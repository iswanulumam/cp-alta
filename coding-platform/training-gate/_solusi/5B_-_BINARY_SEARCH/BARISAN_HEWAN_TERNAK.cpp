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

	int n, q, t;
	scanf("%d", &n);
	pair<int, int> arr[n];

	for (int i=0; i<n; i++) {		
		scanf("%d", &t);	
		arr[i].F = ((i==0) ? 1 : arr[i-1].S+1);		
		arr[i].S = arr[i].F+t-1;
	}	

	scanf("%d",&q);
	while(q--) {
		llu query;
		scanf("%llu", &query);

		int left=0, right=n-1;

		while (left<=right) {
			int pivot = (right+left)/2;

			if (arr[pivot].F<=query && arr[pivot].S>=query) {
				break;				
			} else if (query<arr[pivot].F)
				right = pivot-1;
			else if (query>arr[pivot].S)
				left = pivot+1;			
		}

		printf("%d\n", (right+left)/2+1);
	}
}