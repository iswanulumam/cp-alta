#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long llu;
typedef long long ll;
 
#define INF 1123456789123456789LLU
 
#define fs first
#define sc second
#define pb push_back
#define mp make_pair
#define sqr(a) a*a
#define reset(a, b) memset(a, b, sizeof(a))
#define debug(a) cerr << #a << '=' << a << endl;
 
#define MOD 26101991LLU
 
int n, q;
llu t_memo[200];
pair<llu, llu> f_memo[200][200];
pair<int, int> matrices[100];
 
pair<llu, llu> f_query(int l, int r) {
    if (l == r) return mp(0, 1);
 
    if (f_memo[l][r].fs != -1) return f_memo[l][r];
 
    llu best = INF, current,  move = 1;
    for (int i = l; i < r; i++) {
        pair<llu, llu> f1 = f_query(l, i), f2 = f_query(i+1, r);
        current = f1.fs + f2.fs + (llu) matrices[l].fs * (llu) matrices[i].sc * (llu) matrices[r].sc;
		
        if (current < best) {
            best = current;
            move = (f1.sc * f2.sc) % MOD;
        } else if (current == best) {
            move += (f1.sc * f2.sc) % MOD;
			move %= MOD;
        }
    }
 
    return f_memo[l][r] = mp(best, move);
}
 
ll t_query(int x) {
    if (x == 1 || x == 2) return t_memo[x] = 1;
 
    if (t_memo[x] != -1) return t_memo[x];
 
    ll res = 0;
    for (int i = 1; i < x; i++)
        res = (res + (t_query(i)*t_query(x-i) % MOD)) % MOD;
 
    return t_memo[x] = res;
}
 
int main() {
    reset(t_memo, -1);
    reset(f_memo, -1);
 
    scanf("%d", &n);
 
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            scanf("%d", &matrices[i].fs);
            scanf("%d", &matrices[i].sc);
        } else {
            matrices[i].fs = matrices[i-1].sc;
            scanf("%d", &matrices[i].sc);
        }
    }
 
    scanf("%d", &q);
 
    if (q == 1)
        printf("%llu\n", f_query(0, n-1).fs);
    else if (q == 2)
        printf("%llu\n", f_query(0, n-1).sc);
    else if (q == 3)
        printf("%llu\n", t_query(n));
}