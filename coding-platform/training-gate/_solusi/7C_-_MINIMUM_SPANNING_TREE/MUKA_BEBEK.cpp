#include <bits/stdc++.h>
using namespace std;

#define ii pair<int, int>
#define fs first
#define sc second

int dist[200][200];
bool taken[200];

priority_queue<ii> pq;

int n;

void proses(int node) {
	taken[node] = true;

	for (int i = 0; i < n; i++) {
		if (node == i) continue;

		if (!taken[i])
			pq.push(ii(-dist[node][i], -i));
	}
}

int main() {
	// #ifndef ONLINE_JUDGE
	// freopen("muka-bebek.in", "r", stdin);
	// #endif

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			scanf("%d", &dist[i][j]);

	proses(0);

	int ans = 0;
	while (!pq.empty()) {
		int panjang = -pq.top().fs, id = -pq.top().sc;
		pq.pop();

		if (!taken[id]) {
			ans+=panjang;
			proses(id);
		}
	}

	printf("%d\n", ans);
}