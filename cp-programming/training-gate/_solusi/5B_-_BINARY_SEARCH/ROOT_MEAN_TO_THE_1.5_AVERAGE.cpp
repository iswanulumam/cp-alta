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
   
double arr[50000];
int n;
   
inline double test(double y) {
	double tmp=0;
	for (int i=0; i<n; i++)
		tmp += pow(abs(arr[i]-y), 1.5);  
	return tmp;
}
   
int main() {
	// READ("input", false);
   
	scanf("%d", &n);
	   
	for (int i=0; i<n; i++)     
		scanf("%lf", &arr[i]);
   
	double mid, top, bot;
	double l=-1000, r=1000;
	while (r>=l) {
		double pivot = (r+l)/2.00;   
   
		mid = test(pivot);
		top = test(l);
		bot = test(r);
		
		
		if (top < bot)
			r = pivot;       
		else if (bot < top)
			l = pivot;
		else {       
			cout << fixed << setprecision(2) << pivot << endl;
			break;   			
		}    
	}
}