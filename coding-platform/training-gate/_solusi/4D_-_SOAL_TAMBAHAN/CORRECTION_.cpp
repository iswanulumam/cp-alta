#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long LLU;
typedef long long LL;

char arr[3000][3000];
inline int dist(char a, char b)
{		
	int x=(int)a, y=(int)b, z=(int)'a';
	return min(max(x-z, y-z)-min(x-z, y-z), (min(x-z, y-z)+26) - max(x-z, y-z));		
}

int main() {			
	int n;
	scanf("%d\n", &n);

	char query[3000];	
	int len[n], qlen, diff[n+1];

	memset(diff, 0, sizeof(diff));
	diff[n] = 40000;

	for (int i=0; i<n; i++)
	{
		scanf("%s\n", arr[i]);
		len[i] = strlen(arr[i]);
 	}

	scanf("%s\n", query);	
	qlen = strlen(query);

	for (int i=0; i<qlen; i++)
	{
		int idx=n;
		for (int j=0; j<n; j++)
		{						
			if (len[j] >= i+1)
			{
				diff[j] += dist(query[i], arr[j][i]);
				if (diff[j]<diff[idx]) idx = j;
			}
		}
		for (int j=0; j<=i; j++)
			printf("%c", arr[idx][j]);
		printf("\n");
	}
}