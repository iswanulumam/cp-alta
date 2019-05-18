#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long llu;
typedef long long ll;

#define ii pair<int, int>
#define fs first
#define sc second

int n;
ll m, len = 0;
ll ans[10], p[10], print[10];

int minimum(int l, int r) {
    ll val = p[l];
    int res = l;

    //cari harga termurah dan paling besar angkanya
    for (int i=l+1; i<=r; i++) 
    	if (p[i] <= val) {
    		val = p[i];
    		res = i;
    	}        
    
    return res;
}
 
int main() {
	// #ifndef ONLINE_JUDGE
	// freopen("nomor-kandang.in", "r", stdin);	
	// #endif

	cin >> n;
	for (int i=0; i<=n; i++) cin >> p[i];			
	cin >> m;
	
	if (m < p[minimum(0, n)]) {
		cout << 0 << endl;
		return 0;
	}

	int mini_w0 = minimum(1, n), mini = minimum(0, n);
	len = (m - p[mini_w0] < 0) ? 0 : (m-p[mini_w0])/p[mini]+1;
	
	if (len == 0) {
		cout << 1 << endl << 0 << endl << 0 << endl;
		return 0;
	}

	if (mini == 0) {
		ans[mini_w0] = 1;
		ans[mini] = len - 1;
		m -= p[mini_w0] + p[mini]*(len-1);
	} else {
		ans[mini] = len;	
		m -= p[mini]*len;
	}

	
	for (int i = n; i>=0; i--) {
		if (ans[i] > 0) {			
			for (int j = n; j >= i+1; j--) {
				ll tukar = -m / (p[i]-p[j]);

				if (tukar > 0) {
					tukar = min(tukar, ans[i]);

					ans[i] -= tukar;
					ans[j] += tukar;
					m += tukar * p[i];
					m -= tukar * p[j];
				}
			}
		}
	}

	ll tot = 0;
    for (int i=0; i<=n; i++) tot += ans[i];
 
    if (tot==0) {
        printf("0\n");
        return 0;
    } else {
        if (tot == ans[0]) {
            printf("1\n0\n0\n");
            return 0;
        }
 
        printf("%lld\n", tot);
        memcpy(print, ans, sizeof(ans));
 
        int ch = min(tot, (ll) 50), idx = n;
        while (ch > 0) {
            while (print[idx] == 0) idx--;          
            printf("%d", idx);
            print[idx]--;
            ch--;           
        }
 
        printf("\n");
        stack<int> aux;
        memcpy(print, ans, sizeof(ans));
         
        ch = min(tot, (ll) 50), idx = 0;
        while (ch > 0) {
            while (print[idx] == 0) idx++;          
            aux.push(idx);
            print[idx]--;
            ch--;
        }
 
        while (!aux.empty()) {
            printf("%d", aux.top());
            aux.pop();
        }
        printf("\n");
 
    }
}