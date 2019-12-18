#include <bits/stdc++.h>
  
typedef unsigned long long LLU;
typedef long long LL;
  
using namespace std;
  
int main()
{   
    int n, count=0; 
    scanf("%d", &n);
    int arr[n];
    for (int i=0; i<n; i++)  
        scanf("%d", &arr[i]);
     
    while (true)
    {
    	bool doswapping=false;

    	for (int i=0; i<n-1; i++)	    	
    		if (arr[i] > arr[i+1])
    		{
    			swap(arr[i], arr[i+1]);
    			count++;
    			doswapping = true;
    		}    	

    	if (!doswapping)
    		break;
    }
    printf("%d\n", count);
}