#include <bits/stdc++.h>
using namespace std;

#define ii pair<int, int>
#define fs first
#define sc second

#define N 500 + 5

bool taken[N];
int dist[N][N];

int n;

priority_queue<ii> pq;

void proses(int node) {
	taken[node] = true;

	for (int i = 0; i < n; i++) {
		if (i == node) continue;

		if (!taken[i])
			pq.push(ii(-dist[node][i], -i));
	}
}

int main() {
	// #ifndef ONLINE_JUDGE
	// freopen("job-shop.in", "r", stdin);
	// #endif

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			scanf("%d", &dist[i][j]);

	int ans = 0, cnt = 0;

	proses(0);
	while (!pq.empty()) {
		if (cnt == n-1) break;
		int d = -pq.top().fs, node = -pq.top().sc;
		pq.pop();

		if (!taken[node]) {
			ans += d;
			proses(node);
			cnt++;
		}
	}

	printf("%d\n", ans);
}