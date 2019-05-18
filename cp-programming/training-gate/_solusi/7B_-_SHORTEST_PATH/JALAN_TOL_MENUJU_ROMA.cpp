#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long llu;
typedef long long ll;

#define N 500 + 5
#define ii pair<int, int>

vector<ii> adj[N];
int dist[N][2];
int vis[N][2];

queue<ii> bfs;

int main() {
	// #ifndef ONLINE_JUDGE
	// freopen("jalan-tol.in", "r", stdin);	
	// #endif

	int n, l, t, s, d;
	scanf("%d %d %d %d %d", &n, &l, &t, &s, &d);

	while (l--) {
		int a, b;
		scanf("%d %d", &a, &b);
		adj[a].push_back(ii(b, 0));
		adj[b].push_back(ii(a, 0));
	}

	while (t--) {
		int a, b;
		scanf("%d %d", &a, &b);
		adj[a].push_back(ii(b, 1));
		adj[b].push_back(ii(a, 1));
	}

	for (int i = 0; i <=500; i++)
		dist[i][0] = dist[i][1] = 1123456789;

	bfs.push(ii(s, 0));
	dist[s][0] = 0;
	
	while (!bfs.empty()) {
		int node = bfs.front().first, used = bfs.front().second;
		bfs.pop();

		for (int i = 0; i < adj[node].size(); i++) {
			int target = adj[node][i].first;
			int tipe = adj[node][i].second;

			if (tipe == 0) {
				if (!vis[target][used]) {
					dist[target][used] = dist[node][used]+1;	
					vis[target][used] = 1;
					bfs.push(ii(target, used));
				}
			} else {
				if (used == 1) continue;

				if (!vis[target][1]) {
					dist[target][1] = dist[node][used]+1;				
					vis[target][1] = 1;
					bfs.push(ii(target, 1));
				}
			}
		}
	}

	printf("%d\n", min(dist[d][0], dist[d][1]));
}