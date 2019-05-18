#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	int n;  
	scanf("%d", &n);    
	 
	pair<int, int> c[n];
	 
	for (int i=0; i<n; i++)  
		scanf("%d", &c[i].first);
	for (int i=0; i<n; i++)
		scanf("%d", &c[i].second);

	int p[201][201];
	memset(p, 0, sizeof(p));

	for (int i=0; i<n; i++)    	
		(p[c[i].second + 100][c[i].first + 100])++;    			

	unsigned long long count=0;

	for (int y=0; y<201; y++)
		for (int x=0; x<201; x++)
		{
			// cek ke kiri            
			long kiri=0;
			for (int i=0; i<x; i++)			
				kiri += p[y][i];	

			// cek ke kanan
			long kanan=0;
			for (int i=x+1; i<201; i++)			
				kanan += p[y][i];	

			// cek ke kiri            
			long atas=0;
			for (int i=0; i<y; i++)			
				atas += p[i][x];	

			// cek ke kanan
			long bawah=0;
			for (int i=y+1; i<201; i++)			
				bawah += p[i][x];

			if ((kanan*kiri)*(bawah*atas)>0)
			// count += (kanan*kiri)*(bawah*atas);
				count++;
		}    
	printf("%llu\n", count);
}