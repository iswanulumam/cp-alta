#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long llu;
typedef long long ll;

#define INF 1123456789

#define fs first
#define sc second
#define pb push_back
#define mp make_pair
#define sqr(a) a*a
#define reset(a, b) memset(a, b, sizeof(a))
#define debug(a) cerr << #a << '=' << a << endl;

pair<int, int> freq[51][51];
int n, m, batu;

int main() {
	ios_base::sync_with_stdio(false);	

	reset(freq, 0);

	scanf("%d %d %d", &n, &m, &batu);
	
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			int tmp;
			scanf("%d", &tmp);

			if (tmp == 9999) {
				freq[i][j].fs = freq[i][j-1].fs + freq[i-1][j].fs - freq[i-1][j-1].fs;
				freq[i][j].sc = freq[i][j-1].sc + freq[i-1][j].sc - freq[i-1][j-1].sc + 1;
			} else {
				freq[i][j].fs = freq[i][j-1].fs + freq[i-1][j].fs - freq[i-1][j-1].fs + tmp;
				freq[i][j].sc = freq[i][j-1].sc + freq[i-1][j].sc - freq[i-1][j-1].sc;
			}
		}
	}

	// for (int i = 1; i <= n; i++) {
	// 	for (int j = 1; j <= m; j++) {
	// 		cerr << freq[i][j].sc << '\t';
	// 	}
	// 	cerr << endl;
	// }
	// cerr << endl;

	int opt_val = 0, opt_st;

	for (int l = 1; l <= m; l++) {
		for (int r = l; r <= m; r++) {
			for (int t = 1; t <= n; t++) {
				for (int b = t; b <= n; b++) {

					int current = freq[b][r].fs - freq[b][l-1].fs - freq[t-1][r].fs + freq[t-1][l-1].fs;
					int stone = freq[b][r].sc - freq[b][l-1].sc - freq[t-1][r].sc + freq[t-1][l-1].sc;

					if (stone <= batu) {
						if (current > opt_val) {
							opt_val = current;
							opt_st = stone;
						} else if (current == opt_val)							
							opt_st = min(stone, opt_st);						
					}

				}				
			}
		}
	}

	printf("%d %d\n", opt_val, opt_st);
}