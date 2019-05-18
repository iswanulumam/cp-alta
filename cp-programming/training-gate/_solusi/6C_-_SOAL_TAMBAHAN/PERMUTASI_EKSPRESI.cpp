#include <bits/stdc++.h>

typedef unsigned long long llu;
typedef long long ll;

#define fs first
#define sc second
#define pb push_back
#define mp make_pair
#define sqr(a) a*a
#define ii pair<int, int>
#define reset(a, b) memset(a, b, sizeof(a))
#define dump(a) cerr << #a << " = " << a << endl

using namespace std;

string s;
int len;
set<ll> container;

int chosen[12];

int f(int depth) {
	if (depth == len-1) {
		
		ll res = 0, buffer = (int) s[0] - (int) '0';
		bool add = true;
				
		for (int i = 0; i < len-1; i++) {
			if (chosen[i] == 0) { //concat
				buffer *= 10;
				buffer += (int) s[i+1] - (int) '0';
			} else if (chosen[i] == 1) { //tambah
				res += (add) ? buffer : -buffer;
				add = true;
				
				buffer = (int) s[i+1] - (int) '0';
			} else {
				res += (add) ? buffer : -buffer;
				add = false;
				
				buffer = (int) s[i+1] - (int) '0';
			}
		}
		
		res += (add) ? buffer : -buffer;
		//cout << res << endl;
		container.insert(res);
	} else {
		for (int i = 0; i < 3; i++) {
			chosen[depth] = i;
			f(depth+1);
		}
	}
}

int main() {
	cin >> s;
	len = s.length();
	
	f(0);
	
	cout << container.size() << endl;
}