#include <bits/stdc++.h>

typedef unsigned long long llu;
typedef long long ll;

#define INF 1123456789

#define fs first
#define sc second
#define pb push_back
#define mp make_pair
#define sqr(a) a*a
#define ii pair<int, int>
#define reset(a, b) memset(a, b, sizeof(a))
#define debug cerr << "here" << endl;

using namespace std;

struct data{
	char arr[8];
};

bool vis[8][8][8][8][8][8][8][8];

void set_visited(data * s) {
	vis[s->arr[0]][s->arr[1]][s->arr[2]][s->arr[3]][s->arr[4]][s->arr[5]][s->arr[6]][s->arr[7]] = true;
}

bool is_visited(data * s) {
	return 	vis[s->arr[0]][s->arr[1]][s->arr[2]][s->arr[3]][s->arr[4]][s->arr[5]][s->arr[6]][s->arr[7]];
}

int main() {
	int n, k;
	scanf("%d", &n);
	
	reset(vis, false);
	
	data initial;
	for (int i = 0; i < n; i++) { scanf("%d", &initial.arr[i]); initial.arr[i]--; }
	scanf("%d", &k);

	queue<pair<data, int> > bfs;
	bfs.push(mp(initial, 0));
	set_visited(&initial);
	
	int ans = -1;
	
	while (!bfs.empty()) {
		data now = bfs.front().fs;
		int dist = bfs.front().sc;
		bfs.pop();
		
		/* ***
		for (int i = 0; i < n; i++)
			cout << (int)now.arr[i] << ' ';
		cout << endl;
		*** */
		
		//cek kalau udah sorted
		bool sorted = true;
		for (int i = 0; i < n-1; i++)
			if ((int)now.arr[i] > (int)now.arr[i+1]) {
				sorted = false;
				break;
			}
		if (sorted) { 
			ans = dist;
			break;
		}
		
		//coba semua kemungkinan
		for (int i = 0; i <= n-k; i++) {
			data current = now;
			
			int l = i, r = i + k - 1;
			while (l < r)
				swap(current.arr[l++], current.arr[r--]);

			if (!is_visited(&current)) {
				set_visited(&current);
				bfs.push(mp(current, dist+1));
			}
		}
	}
	
	printf("%d\n", ans);
}