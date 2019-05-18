#include <bits/stdc++.h>
 
using namespace std;

typedef unsigned long long LLU;
typedef long long LL;

bool used[9];
int permutation[9], n;

void dbg() { cout << "here" << endl; }

bool valid()
{
	bool x=false, y=false;
	for (int i=1; i<n-1; i++)
	{
		if (((permutation[i-1] > permutation[i]) && (permutation[i] > permutation[i+1]))) return false;
		if (((permutation[i-1] < permutation[i]) && (permutation[i] < permutation[i+1]))) return false;
	}
	return true;
}

void generate(int lvl)
{	
	if (lvl == n)
	{				
		if (valid()) {					
			for (int i=0; i<n; i++)	printf("%d", permutation[i]);
			printf("\n");			
		}
		return;
	} 
	
	for (int i=0; i<n; i++)	
		if (!used[i])
		{
			permutation[lvl] = i+1;
			used[i] = true;
			generate(lvl+1);
			used[i] = false;
		}	
}

int main() {	
	memset(permutation, 0, sizeof(permutation));
	memset(used, false, sizeof(used));	
	scanf("%d", &n);
	generate(0);		
}

