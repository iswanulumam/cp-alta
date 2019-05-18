#include <bits/stdc++.h>

#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long llu;
typedef long long ll;

#define fs first
#define sc second
#define pb push_back
#define mp make_pair
#define scanint(a) scanf("%d", &a);
#define debug(a) cerr << #a << '=' << a << endl;
#define reset(a, b) memset(a, b, sizeof(a))

ll memo[60];

ll f(int x) {
    if (x == 0 || x == 1)
        return 1;

    if (memo[x] != 0) return memo[x];

    ll ret = 0;
    for (int i = 0; i < x; i++)
        ret += f(x-1-i)*f(i);
	
    return memo[x] = ret;
}

int main() {
    reset(memo, 0);

    int x;
    cin >> x;
		
	cout << ((x % 2 == 0) ? f(x/2) : 0) << endl;
}
