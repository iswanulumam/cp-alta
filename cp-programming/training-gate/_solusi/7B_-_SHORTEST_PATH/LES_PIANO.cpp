#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long llu;
typedef long long ll;

#define N 2500 + 5
#define ii pair<int, int>

vector<ii> adj[N];
int dist[N];

priority_queue<ii> pq;

int main() {
	// #ifndef ONLINE_JUDGE
	// freopen("les-piano.in", "r", stdin);	
	// #endif
	
	int v, e, a, b;
	scanf("%d %d %d %d", &v, &e, &a, &b);

	while (e--) {
		int x, y, z;
		scanf("%d %d %d", &x, &y, &z);

		adj[x].push_back(ii(y, z));
		adj[y].push_back(ii(x, z));
	}

	for (int i = 0; i <= v; i++)
		dist[i] = 1123456789; //inf

	pq.push(ii(0, a));
	dist[a] = 0;

	while (!pq.empty()) {
		int d = pq.top().first, node = pq.top().second;		
		pq.pop();

		if (d > dist[node]) continue;

		for (int i = 0; i < adj[node].size(); i++) {
			if (dist[adj[node][i].first] > d + adj[node][i].second) {
				dist[adj[node][i].first] = d + adj[node][i].second;
				pq.push(ii(dist[adj[node][i].first], adj[node][i].first));
			}
		}
	}

	printf("%d\n", dist[b]);
}