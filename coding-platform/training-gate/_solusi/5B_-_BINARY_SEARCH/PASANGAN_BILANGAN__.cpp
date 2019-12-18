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
	
	int n, t;
	scanf("%d %d", &n, &t);	
	long arr[n];

	for (int i=0; i<n; i++)
		scanf("%ld", &arr[i]);			

	sort(arr, arr+n);

	while (t--) {
		long query; bool found=false;
		scanf("%ld", &query);		
		for (int i=0; arr[i] < query; i++) {			
			long lookfor = query-arr[i];			
			if (binary_search(arr, arr+n, lookfor)) {				
				if (query-arr[i] == arr[i]) {
					long * it = find(arr, arr+n, arr[i]);
					if ((*(it-1) == arr[i]) || (*(it+1) == arr[i]))
						found = true;
					else
						found =false;
				} else
					found = true;
				break;
			}
		}

		if (found) 
			puts("YA"); 
		else 
			puts("TIDAK");
	}
}