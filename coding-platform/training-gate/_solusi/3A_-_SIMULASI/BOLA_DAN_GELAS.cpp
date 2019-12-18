#include <bits/stdc++.h>
 
typedef unsigned long long LLU;
typedef long long LL;
 
using namespace std;
 
struct waktu
{
    int mulai, akhir;
};
 
int main()
{
    long n, m;
    scanf("%ld %ld", &n, &m);
    long gelas[n];
    for (long i=0; i<=n; i++)    
        gelas[i]=i;
     
    while(m--)
    {
        long x, y;
        scanf("%ld %ld", &x, &y);
        swap(gelas[x-1], gelas[y-1]);
    }

    long q, qr;
    scanf("%ld", &q);
    while(q--)
    {
        scanf("%ld", &qr);
        printf("%ld\n", gelas[qr-1]+1);
    }
}