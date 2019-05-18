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
int r, c, r1, c1;

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

string s; 
int len;

void fill(int idx, int x1, int y1, int x2, int y2) {
	if (idx == len) {
		for (int i=y1; i<=y2; i++)
			for (int j=x1; j<=x2; j++)
				data[i][j] = true;					
	} else {
		int d=(x2-x1)/2;
					
		if (s[idx]=='0')									
			fill(idx+1, x1, y1, x1+d, y1+d);
		else if (s[idx]=='1')					
			fill(idx+1, x1+d+1, y1, x1+d+d+1, y1+d);
		else if (s[idx]=='2')			
			fill(idx+1, x1, y1+d+1, x1+d, y1+d+d+1);
		else			
			fill(idx+1, x1+d+1, y1+d+1, x2, y2);
	}
}


int main() {		
	// READ("input", false);
	RESET(data, false);

	char tmp[101]; string inp;	
	scanf("%100s", tmp); 
	inp = tmp;	

	queue<string> q;
	while(inp != "END") {		
		q.push(tmp);
		scanf("%100s", tmp); 	
		inp = tmp;	
	}

	scanf("%d %d", &r, &c);

	if (!(is_2k(r) && is_2k(c) && r==c)) 
		r1 = c1 = max(conv_to_2k(r), conv_to_2k(c));
	else
		r1 = c1 = r;
	
	while (!q.empty()) {
		s = q.front();		
		q.pop();		
		if (s[0]=='0') continue;

		len = s.length();
		fill(1, 0, 0, c1-1, r1-1);
	}

	for (int i=0; i<r; i++) {
		for (int j=0; j<c; j++) {			
			printf("%d", ((data[i][j]) ? 1 : 0));			
			if (j!=c-1)
				printf(" ");
		}
		printf("\n");
	}
}