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
     
    for (int i=0; i<n-1; i++)
    {   
        int lowest=i;       
        for (int j=i+1; j<n; j++)                
            if (arr[lowest] > arr[j])
                lowest = j;
 
        if (lowest != i)
        {
            swap(arr[lowest], arr[i]);
            count++;
        }
    }
    printf("%d\n", count);
}