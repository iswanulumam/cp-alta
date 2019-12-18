#include <bits/stdc++.h>

typedef unsigned long long llu;
typedef long long ll;

#define INF 1123456789

#define fs first
#define sc second
#define pb push_back
#define mp make_pair
#define sqr(a) a*a
#define ii pair<int, int>
#define reset(a, b) memset(a, b, sizeof(a))
#define debug cerr << "here" << endl;

using namespace std;

int arr[50000];
int n,m;

bool sufficient(double time) {
	int used = 0;
	
	for (int i = 0; i < n; i++) {
		used += ceil(arr[i] / time);
		
		if (used > m) break;
	}
	
	return used <= m;
}

int main() {
	scanf("%d %d", &n, &m);
	
	for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
	
	double lo = 1, hi = 2e9;
	double mid;
	
	while (hi - lo >= 1e-5) {
		mid = (hi+lo)/2.0;
		if (sufficient(mid))
			hi = mid-1e-5;
		else 
			lo = mid+1e-5;		
	}
	
	printf("%0.2lf\n", mid);
}