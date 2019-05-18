#include <bits/stdc++.h>
  
typedef unsigned long long LLU;
typedef long long LL;
  
using namespace std;

const int n=1000001;

int main()
{   
	bool arr[n];
	memset(arr, true, sizeof(arr));
	arr[0]=false;
	arr[1]=false;		
	int cache[100000], ix=0, c=sqrt(n);
	memset(cache, 0, sizeof(cache));
	for (int i=2; i<=n; i++)
	{		
		if (arr[i]==true)		
		{
			cache[ix]=i;
			ix++;
			if (i<=c)
				for (int j=2*i; j<n; j+=i)
					arr[j]=false;		
		}
	}

	long t, q;	
	scanf("%ld", &t);
	while(t--)
	{
		scanf("%ld", &q);
		printf("%d\n", cache[q-1]);	
	}
}