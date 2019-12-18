#include <bits/stdc++.h>
  
typedef unsigned long long LLU;
typedef long long LL;
  
using namespace std;
  
int main()
{   
    int n, count=0; 
    scanf("%d", &n);
    vector<int> v(n);
    for (int i=0; i<n; i++)  
        scanf("%d", &v[i]);
     
    sort(v.begin(), v.end());
    if (n%2==0)
    	printf("%0.2f\n", (v[n/2]+v[n/2-1])/2.0);
   	else
   		printf("%d\n", (v[n/2]));
    
}