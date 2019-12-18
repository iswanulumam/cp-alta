#include <bits/stdc++.h>
using namespace std;

#define N 10000 + 5

map<string, int> id;
char name[N][30];

vector<pair<int, int> > adj[N];

int now = 1;

int chosen[N];
int used[N];
bool ans = false;

void dfs(int v, int d, int to, int type) {
	if (ans) return;
	if (v == to) {
		for (int i = 0; i < d; i++)
			puts(name[chosen[i]]);

		ans = true;
		return;
	}

	for (int i = 0; i < adj[v].size(); i++) {
		if (ans) break;
		if (adj[v][i].second != type) continue;
		if (!used[adj[v][i].first]) {
			chosen[d] = adj[v][i].first;
			used[adj[v][i].first] = true;
			dfs(adj[v][i].first, d+1, to, type);
			used[adj[v][i].first] = false;
		}
	}
}

int main() {
	// freopen("evolusi.in", "r", stdin);
	// freopen("evolusi.out", "w", stdout);

	int n, m;
	scanf("%d %d\n", &n, &m);

	char n1[30], n2[30];
	while (m--) {
		scanf("%s %s\n", n1, n2);
		int i1 = id[n1], i2	= id[n2];

		if (i1 == 0) {
			i1 = id[n1] = now++;
			strcpy(name[i1], n1);
		}

		if (i2 == 0) {
			i2 = id[n2] = now++;
			strcpy(name[i2], n2);
		}

		adj[i1].push_back(make_pair(i2, 1));
		adj[i2].push_back(make_pair(i1, 2));
	}

	scanf("%s %s", n1, n2);
	int from = id[n1], to = id[n2];

	used[from] = 1;
	chosen[0] = from;
	dfs(from, 1, to, 1);
	used[from] = 0;

	if (!ans) {
		used[to] = 1;
		chosen[0] = to;
		dfs(to, 1, from, 1);
		used[to] = 0;
	}

	if (!ans)
		puts("TIDAK MUNGKIN");
}
