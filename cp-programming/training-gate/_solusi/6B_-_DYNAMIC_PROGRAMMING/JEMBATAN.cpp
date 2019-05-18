#include <bits/stdc++.h>

typedef unsigned long long llu;
typedef long long ll;

#define fs first
#define sc second
#define pb push_back
#define mp make_pair
#define reset(a, b) memset(a, b, sizeof(a))
#define dump(a) cerr << #a << " = " << a << endl

using namespace std;

void open(string s) {
    #ifndef ONLINE_JUDGE
    freopen(s.c_str(), "r", stdin);
    #endif // ONLINE_JUDGE
}

int atas[100], bawah[100], n;
int h_atas[100], h_bawah[100]; //hashing buat cari dengan O(1)
int memo[100][100];

inline bool valid(int l, int r, int x) {
	if (l > 0 && r < n-1)
		return (h_bawah[atas[l-1]] < h_bawah[atas[x]] && h_bawah[atas[x]] < h_bawah[atas[r+1]]) ? true : false;			
	else if (l > 0)
		return (h_bawah[atas[l-1]] < h_bawah[atas[x]]) ? true : false;
	else if (r < n-1)
		return (h_bawah[atas[x]] < h_bawah[atas[r+1]]) ? true : false;
	else 
		return true;
}

int f(int l, int r) {
	if (memo[l][r] != -1) return memo[l][r];
	
	if (l == r) 
		return memo[l][r] = (valid(l, r, l)) ? 1: 0;
		
	int res = 0;
	
	for (int i = l; i <= r; i++)
		if (valid(l, r, i))
			res = max(res, 1 + f(l, i-1) + f(i+1, r));			
	
	return memo[l][r] = res;
}

int main() {	
	scanf("%d", &n);
	reset(memo, -1);
	
	for (int i = 0; i < n; i++) scanf("%d", &atas[i]);
	
	for (int i = 0; i < n; i++) { 
		scanf("%d", &bawah[i]);
		h_bawah[bawah[i]] = i;
	}
	
	printf("%d\n", f(0, n-1));
}