#include <bits/stdc++.h>
  
typedef unsigned long long LLU;
typedef long long LL;
  
using namespace std;


int main()
{   
	int n;
	long sum=0;
	cin >> n;
	while (n>4)
	{
		n/=5;
		sum += n;
	}
	cout << sum << endl;
}