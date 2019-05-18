#include <bits/stdc++.h>
using namespace std;
  
int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int arr[n];
    for (int i=0; i<n; i++)    
        scanf("%d", &arr[i]);    
    long long total=0;
  
    for (int i=0; i<k; i++)
        total+=arr[i];   
 
    long long tmp=total;
    for (int i=1; i<n-k+1; i++) {   
        tmp -= arr[i-1];
        tmp += arr[i+k-1];
        total = max(total, tmp);
    }

    printf("%lld\n", total);
}