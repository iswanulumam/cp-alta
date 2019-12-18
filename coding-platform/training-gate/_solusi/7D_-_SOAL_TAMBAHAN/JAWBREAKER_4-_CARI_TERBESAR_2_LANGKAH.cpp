#include <bits/stdc++.h>
using namespace std;

#define ii pair<int, int>
#define fs first
#define sc second

#define MAXN 30

const int dir_x[4] = {0, 1, 0, -1};
const int dir_y[4] = {-1, 0, 1, 0};

int arr[MAXN][MAXN];
int vis[MAXN][MAXN];
int r, c;

vector<pair<int, ii> > v;

int safe(int y, int x) { return (y >= 0 && y < r && x >= 0 && x < c); }

void runtuhin() {
	for (int i = 0; i < c; i++) {
		bool ada = true;
		while (ada) {
			ada = false;
			for (int j = r-1; j >= 1; j--) {
				if (arr[j][i] == 0 && arr[j-1][i] != 0) {
					ada = true;
					swap(arr[j][i], arr[j-1][i]);
				}
			}
		}
	}
}

int luas(int y, int x) {
	if (arr[y][x] == 0) return -1;
	int size = 1;
	for (int i = 0; i < 4; i++) {
		int cy = y+dir_y[i], cx = x+dir_x[i];
		if (safe(cy, cx)) {
			if (!vis[cy][cx] && arr[cy][cx] == arr[y][x]) {
				vis[cy][cx] = true;
				size += luas(cy, cx);
			}
		}
	}
	return size;
}

void ganti(int y, int x, int what) {
	arr[y][x] = 0;

	for (int i = 0; i < 4; i++) {
		int cy = y+dir_y[i], cx = x+dir_x[i];
		if (safe(cy, cx)) {
			if (arr[cy][cx] == what) {
				arr[cy][cx] = 0;
				ganti(cy, cx, what);
			}
		}
	}
}

int tmp[MAXN][MAXN];
int coba(int y, int x) {
	memcpy(tmp, arr, sizeof(arr));

	ganti(y, x, arr[y][x]);
	runtuhin();

	memset(vis, false, sizeof(vis));
	int ret = 0;
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++)
			if (!vis[i][j]) {
				vis[i][j] = true, ret = max(ret, luas(i, j));
			}

	memcpy(arr, tmp, sizeof(tmp));

	return ret;
}
int main() {
	// #ifndef ONLINE_JUDGE
	// freopen("jaw-breaker.in", "r", stdin);
	// #endif

	scanf("%d %d", &r, &c);

	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++)
			scanf("%d", &arr[i][j]);

	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++)
			if (!vis[i][j])
				vis[i][j] = true, v.push_back(make_pair(luas(i, j), ii(i, j)));

	int ans = 0;
	for (int i = 0; i < v.size(); i++) {
		int coba1 = coba(v[i].sc.fs, v[i].sc.sc);
		// cout << coba1<< endl;
		ans = max(ans, v[i].fs*(v[i].fs-1) + coba1*(coba1-1));
	}

	printf("%d\n", ans);
}