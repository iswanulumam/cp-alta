#include <bits/stdc++.h>
 
using namespace std;

typedef unsigned long long LLU;
typedef long long LL;

int main() {	
	int n;	
	scanf("%d", &n);
	double x[n], total=0, avg, sum=0, minx, maxx;
	for (int i=0; i<n; i++)
	{		
		scanf("%lf", &x[i]);
		total += x[i];
		if (i==0)
		{
			minx = x[i];
			maxx = x[i];			
		} else {
			minx = min(minx, x[i]);
			maxx = max(maxx, x[i]);
		}		
	}

	avg = total/n;
	for (int i=0; i<n; i++)	
		sum += pow(x[i]-avg, 2);	

	printf("%0.2f %0.2f %0.2f %0.2f\n", minx, maxx, avg, sqrt(sum/(n-1)));
}
