#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long llu;

char matrix[15][15];
int n, c = 0;

struct data{
	int x, y, len;
	int px[3], py[3], a[3];
};

inline bool valid(int y, int x) {
	if (y >= 0 && y < n && x >= 0 && x < n) {
		if (matrix[y][x] == '#') return false;

		return true;
	}

	return false;
}

inline void init(data & a) {
	for (int i = 0; i < 3; i++)
		a.px[i] = a.py[i] = a.a[i] = 0;
}

// x, y, arah1, arah2, arah3, x1, x2, x3
bool vis[10][10][3][3][3][10][10][10];

inline bool is_visited(data & a) {
	return vis[a.x][a.y][a.a[0]+1][a.a[1]+1][a.a[2]+1][a.px[0]][a.px[1]][a.px[2]];
}

inline void set_visited(data & a) {
	vis[a.x][a.y][a.a[0]+1][a.a[1]+1][a.a[2]+1][a.px[0]][a.px[1]][a.px[2]] = true;
}

void print(data & a) {
	cout << "---------" << endl;
	cout << a.y << ' ' << a.x << endl;
	for (int i = 0; i < c; i++)
		cout << a.px[i] << " arah = " << a.a[i] << endl;
	cout << endl;
}

const int dy[5] = {0, 1, 0, -1, 0};
const int dx[5] = {1, 0, -1, 0, 0};

int main() {
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt", "r", stdin);
	// #endif

	scanf("%d", &n);

	data start;
	start.len = 0;
	init(start);

	for (int i = 0; i < n; i++) {
		scanf("%s", matrix[i]);

		for (int j = 0; j < n; j++) {
			if (matrix[i][j] == 'X') {
				matrix[i][j] = '.';

				start.px[c] = j;
				start.py[c] = i;

				if (!valid(i, j+1) && !valid(i, j-1))
					start.a[c] = 0;
				if (valid(i, j+1))
					start.a[c] = 1;
				else
					start.a[c] = -1;

				c++;
				matrix[i][j] = '.';
			} else if (matrix[i][j] == 'S') {
				start.x = j;
				start.y = i;
				matrix[i][j] = '.';
			}

		}
	}

	int ans = -1;

	queue<data> bfs;
	bfs.push(start);

	while (!bfs.empty()) {
		data now = bfs.front(), tmp;
		bfs.pop();

		// print(now);

		tmp = now;
		tmp.len++;

		for (int i = 0; i < c; i++) {
			tmp.px[i] += tmp.a[i];

			if (!valid(tmp.py[i], tmp.px[i]+tmp.a[i])) {
				if (tmp.a[i] == 1) tmp.a[i] = -1;
				else tmp.a[i] = 1;
			}
		}

		for (int i = 0; i < 5; i++) {
			int cx = now.x + dx[i], cy = now.y + dy[i];
			tmp.x = cx, tmp.y = cy;

			if (!valid(cy, cx)) continue;
			if (is_visited(tmp)) continue;

			bool pass = true;

			for (int j = 0; j < c; j++) {
				if (tmp.py[j] != cy) continue;
				if (tmp.px[j] == cx) {
					pass = false;
					break;
				} else {
					//berpapasan, penjaga ke kiri, kita ke kanan
					if (i == 0 && now.a[j] == -1 && tmp.px[j] == cx-1) {
						pass = false;
						break;
					}

					//sama, kita ke kiri, penjaga ke kanan
					if (i == 2 && now.a[j] == 1 && tmp.px[j] == cx+1) {
						pass = false;
						break;
					}
				}
			}

			if (!pass) continue;

			if (matrix[cy][cx] == 'T')
				ans = tmp.len;

			// cout << cy << ' ' << cx << endl;

			// print(tmp);
			bfs.push(tmp);
			set_visited(tmp);
		}

		if (ans != -1) break;
	}

	printf("%d\n", ans);
}