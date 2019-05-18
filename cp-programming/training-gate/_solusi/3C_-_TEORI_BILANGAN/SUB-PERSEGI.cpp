#include <bits/stdc++.h>
  
typedef unsigned long long LLU;
typedef long long LL;
  
using namespace std;


int main()
{   
	int n;
	LLU sum=0;
	cin >> n;
	for (int i=n; i>=0; i--)	
		sum += (n-i)*(n-i);	

	cout << sum << endl;
}