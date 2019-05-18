#include <bits/stdc++.h>
using namespace std;
   
typedef unsigned long long LLU;
typedef long long LL;
   
map<int, int> memo;
 
long emas(int n)
{  
    if (memo.find(n) != memo.end())
        return memo.find(n)->second;
 
    if (n==0)
        return 0;
 
    long n2=emas(n/2), n3=emas(n/3), n4=emas(n/4); 
 
    if (n>n2+n3+n4)
    {
        memo.insert(make_pair(n, n));
        return n;
    }
    else
    {
        memo.insert(make_pair(n, n2+n3+n4));
        return n2+n3+n4;
    }
}
 
int main() {
    int n;
    cin >> n;
    cout << emas(n) << endl;
}