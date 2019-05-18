#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long llu;
typedef long long ll;

#define N 1000 + 5
#define ii pair<int, int>
#define iii pair<int, ii>
#define INF 1123456789

int mat[N][N];
int dist[N][N];

deque<ii> dq;

int r, c;

inline bool safe(int y, int x) {
	return (y >= 0 && y < r && x >= 0 && x < c);
}

int main() {
	// #ifndef ONLINE_JUDGE
	// freopen("perjalanan.in", "r", stdin);	
	// #endif

	scanf("%d %d", &r, &c);

	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++) {
			scanf("%d", &mat[i][j]);
			dist[i][j] = INF;
		}
	
	int sy, sx, ty, tx;
	scanf("%d %d", &sy, &sx);
	scanf("%d %d", &ty, &tx);

	dq.push_back(ii(sy-1, sx-1));
	dist[sy-1][sx-1] = 0;

	int dir_x[4] = {-1, 0, 1, 0};
	int dir_y[4] = {0, -1, 0, 1};

	while (!dq.empty()) {
		int y = dq.front().first, x = dq.front().second;
		dq.pop_front();		

		for (int i = 0; i < 4; i++) {
			int cx = x + dir_x[i], cy = y + dir_y[i];

			if (safe(cy, cx)) {
				if (mat[y][x] == mat[cy][cx] && dist[y][x] < dist[cy][cx]) {
					dist[cy][cx] = max(dist[y][x], mat[y][x]);
					dq.push_front(ii(cy, cx));
				} else if (max(dist[y][x], mat[cy][cx]) < dist[cy][cx]) {
					dist[cy][cx] = max(dist[y][x], mat[cy][cx]);								
					dq.push_back(ii(cy, cx));
				}
			}
		}
	}

	printf("%d\n", dist[ty-1][tx-1]);	

	// for (int i = 0; i < r; i++) {
	// 	for (int j = 0; j < c; j++) {			
	// 		cout << dist[i][j] << ' ' ;
	// 	}
	// 	cout << endl;
	// }
}