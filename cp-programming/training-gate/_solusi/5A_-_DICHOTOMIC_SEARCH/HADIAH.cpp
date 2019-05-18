#include <bits/stdc++.h>
 
typedef unsigned long long llu;
typedef long long ll;
 
#define RESET(a, b) memset(a,b,sizeof(a))
#define UNIQUE(a) (a).erase( unique( (a).begin(), (a).end() ), (a).end() )
#define MP(a, b) make_pair(a, b)
#define PB(a) push_back(a)
 
using namespace std;
 
inline void READ(const string &s, bool out=false) {
    #ifndef ONLINE_JUDGE
    freopen((s + ".in").c_str(), "r", stdin);
    if (out) freopen((s + ".out").c_str(), "w", stdout);
    #endif
}
 
llu pangkat(llu a, llu b, llu mod) {
    llu temp=1;
    while (b>0) {
        if (b%2==1) {
            temp *= a;
            temp %= mod;      
        }
        if (temp==0) break;
        a *= a;
        a %= mod;
        b /= 2;
    }
    return temp;
}
 
int main() {   
    long a, b, c, mod;
    scanf("%ld %ld %ld %ld", &a, &b, &c, &mod);

    llu res =pangkat(a,b,mod);
    for (int i=2; i<=c; i++)
        res = pangkat(res, b, mod);

    cout << res + 1 << endl;
}