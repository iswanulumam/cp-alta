#include <bits/stdc++.h>
  
typedef unsigned long long llu;
typedef long long ll;
  
#define INF 1123456789123456789LL
  
#define fs first
#define sc second
#define pb push_back
#define mp make_pair
#define sqr(a) a*a
#define ii pair<int, int>
#define reset(a, b) memset(a, b, sizeof(a))
#define debug cerr << "here" << endl;
  
using namespace std;
  
#define MAXN 100000
  
int n;
pair<ll, ll> arr[MAXN];
  
bool sufficient(ll minimum) {
    ll prog = 0; //dibutuhkan
     
//    cout << "minimum " << minimum << endl;
    for (int i = 0; i < n; i++) {                        
		prog += arr[i].sc-minimum;
        		
        if (i != n-1) {
            if (prog > 0)
                if (prog - (arr[i+1].fs - arr[i].fs) > 0)
                    prog -= arr[i+1].fs - arr[i].fs;
                else
                    prog = 0;            
            else
                prog -= arr[i+1].fs - arr[i].fs;
        }
        
       // cout << prog << ' ';                         
    }
    //cout << endl;
    return prog >= 0;
}
  
int main() {
    scanf("%d", &n);
      
    ll lo = INF, hi = 0;
    for (int i = 0; i < n; i++) {
        scanf("%lld %lld", &arr[i].fs, &arr[i].sc);
        lo = min(lo, arr[i].sc);
        hi = max(hi, arr[i].sc);
    }
      
    sort(arr, arr+n);
    ll mid;
          
    while (hi-lo > 1) {
        mid = (hi+lo)/2;        
          
        if (sufficient(mid))
            lo = mid;
        else
            hi = mid;          
    }
      
    ll ans = 0;
    if (sufficient(hi))
        ans = hi;
    else if (sufficient(mid))
        ans = mid;
    else
        ans = lo;
      
    printf("%lld\n", ans);
}