#include <bits/stdc++.h>
 
using namespace std;

typedef unsigned long long LLU;
typedef long long LL;

string rep(int n)
{
	string tmp = "";
	for (int i=0; i<n; i++)
		tmp += "*";
	return tmp;
}
int main() {	
	int n=0;
	string arr[10] = {"*"};
	for (int i=1; i<10; i++)
	{
		arr[i] += arr[i-1];
		arr[i] += "\n";
		arr[i] += rep(i+1);
		arr[i] += "\n";
		arr[i] += arr[i-1];		
	}

	scanf("%d", &n);	
	cout << arr[n-1] << endl;
}
