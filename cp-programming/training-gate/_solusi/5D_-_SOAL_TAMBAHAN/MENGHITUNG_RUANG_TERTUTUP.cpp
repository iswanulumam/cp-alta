#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long llu;
typedef long long ll;

int n, m;
char peta[500][500];
bool v[500][500];

void fill(int y, int x, char z) {
	if (z == '.') {
		peta[y][x]     = '.';
		peta[y][x+1]   = '.';
		peta[y+1][x]   = '.';		
		peta[y+1][x+1] = '.';	
	} else if (z == '/') {
		peta[y][x]     = '.';
		peta[y][x+1]   = '/';
		peta[y+1][x]   = '/';
		peta[y+1][x+1] = '.';
	} else if (z == '\\') {
		peta[y][x]     = '\\';
		peta[y][x+1]   = '.';
		peta[y+1][x]   = '.';
		peta[y+1][x+1] = '\\';
	}
}

bool valid_c(int z, int b) {
	return z >= 0 && z < b*2;
}

bool valid_n(int y, int x) {
	return valid_c(y, n) && valid_c(x, m) && !v[y][x];
}
bool valid_room(int sy, int sx) {
	queue<pair<int, int> > bfs;
	bfs.push(make_pair(sy, sx));

	bool res = true;

	while (!bfs.empty()) {
		int y = bfs.front().first, x = bfs.front().second;
		bfs.pop();
		
		if (!valid_n(y, x)) continue;
		if (peta[y][x] != '.') continue;
		

		if (y == 0 || x == 0 || y == n*2-1 || x == m*2-1) res = false;

		v[y][x] = true;

		if (valid_c(x-1, m))
			if (peta[y][x-1] == '.') {
				bfs.push(make_pair(y, x-1));
			} else if (peta[y][x-1] == '/') {
				bfs.push(make_pair(y-1, x));
				bfs.push(make_pair(y+1, x-1));
			} else if (peta[y][x-1] == '\\') {
				bfs.push(make_pair(y+1, x));
				bfs.push(make_pair(y-1, x-1));
			}

		if (valid_c(x+1, m))
			if (peta[y][x+1] == '.') {
				bfs.push(make_pair(y, x+1));
			} else if (peta[y][x+1] == '/') {
				bfs.push(make_pair(y-1, x+1));
				bfs.push(make_pair(y+1, x));
			} else if (peta[y][x+1] == '\\') {
				bfs.push(make_pair(y+1, x+1));
				bfs.push(make_pair(y-1, x));
			}

		if (valid_c(y-1, n))
			if (peta[y-1][x] == '.')				
				bfs.push(make_pair(y-1, x));
			else if (peta[y-1][x] == '/')
				bfs.push(make_pair(y-1, x+1));
			else if (peta[y-1][x] == '\\')
				bfs.push(make_pair(y-1, x-1));

		if (valid_c(y+1, n))
			if (peta[y+1][x] == '.')
				bfs.push(make_pair(y+1, x));
			else if (peta[y+1][x] == '/')
				bfs.push(make_pair(y+1, x-1));
			else if (peta[y+1][x] == '\\')
				bfs.push(make_pair(y+1, x+1));
	}

	return res;
}

void load() {	
	cin >> n >> m;
	string s;

	getline(cin, s);
	memset(v, false, sizeof(v));

	for (int i = 0; i < n; i++) {		
		getline(cin, s);

		for (int j = 0; j < m; j++)
			fill(i*2, j*2, s[j]);
	}
}

void solve() {
	int ans = 0;
	for (int i = 0; i < n*2; i++) {
		for (int j = 0; j < m*2; j++) {
			if (peta[i][j] == '.' && !v[i][j]) {
				if (valid_room(i, j)) ans++;
			}
		}
	}

	cout << ans << endl;
}

int main() {
	// freopen("menghitung-ruang-tertutup.in", "r", stdin);    

	load();	
	solve();
}