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

	int r, c;
	llu v;
	scanf("%d %d %llu", &r, &c, &v);
	int arr[r*c];

	for (int y=0; y<r*c; y++)
		scanf("%d", &arr[y]);

	sort(arr, arr+r*c);

	llu tmp=v,res;
	for (int i=0; i<r*c-1; i++) {
		tmp += arr[i];
		if (tmp/double(i+1) <= arr[i+1]) {
			res = i;
			break;
		}
	}
	cout << fixed << setprecision(3) << tmp/double(res+1) << endl;	
}