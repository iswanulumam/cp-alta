#include <bits/stdc++.h>

typedef unsigned long long LLU;
typedef long long LL;

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

set<string> names;
bool data[128][128];
int r, c;

void check(int x1, int y1, int x2, int y2, string name) {	
	bool homogen=true, initdata = data[y1][x1]; int d=(x2-x1)/2;
	for (int i=y1; i<=y2; i++)
		for (int j=x1; j<=x2; j++)
			if (initdata!=data[i][j]) {
				homogen = false;		
				break;	
			}	

	if (!homogen) {		
		check(x1,     y1,     x1+d,     y1+d, name+"0");
		check(x1+d+1, y1,     x1+d+d+1, y1+d, name+"1");
		check(x1,     y1+d+1, x1+d,     y1+d+d+1, name+"2");
		check(x1+d+1, y1+d+1, x2,       y2, name+"3");
	} else
		if (initdata==true)
			names.insert("1"+name);
}

bool is_2k(int a) {
	while(a>1) {
		if (a%2==0)
			a/=2;
		else
			return false;
	}
	return true;
}
int conv_to_2k(int a) {
	const int k2[8] = {2, 4, 8, 16, 32, 64, 128, 256};
	int idx =0;
	while(a>k2[idx] && idx!=8)
		idx++;
	return k2[idx];
}

int main() {		
	// READ("input", false);
	RESET(data, false);

	scanf("%d %d", &r, &c);
	
	for (int i=0; i<r; i++)
		for (int j=0; j<c; j++) {
			int a;
			scanf("%d", &a);
			data[i][j] = (a==1);
		}
	
	if (!(is_2k(r) && is_2k(c) && r==c)) 
		r = c = max(conv_to_2k(r), conv_to_2k(c));

	check(0, 0, c-1, r-1, "");	

	for (set<string>::iterator it=names.begin(); it!=names.end(); it++)
		printf("%s\n", it->c_str());

	printf("END\n");
}