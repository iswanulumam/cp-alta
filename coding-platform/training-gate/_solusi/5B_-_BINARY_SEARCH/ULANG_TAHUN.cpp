#include <bits/stdc++.h>

typedef unsigned long long llu;
typedef long long ll;

#define RESET(a, b) memset(a,b,sizeof(a))
#define UNIQUE(a) (a).erase( unique( (a).begin(), (a).end() ), (a).end() )
#define MP(a, b) make_pair(a, b)
#define PB(a) push_back(a)
#define F first
#define S second

using namespace std;

inline void READ(const string &s, bool out=false) {
	#ifndef ONLINE_JUDGE
	freopen((s + ".in").c_str(), "r", stdin);
	if (out) freopen((s + ".out").c_str(), "w", stdout);
	#endif
}

int main() {
	// READ("input");

	map<string, string> m;
	int n, q; char nama[16], telp[8];

	scanf("%d %d", &n, &q);

	for (int i=0; i<n; i++) {
		scanf("%15s %7s", nama, telp);
		m[nama] = telp;
	}

	while(q--) {
		scanf("%s", nama);
		printf("%s\n", m[nama].c_str());
	}
}