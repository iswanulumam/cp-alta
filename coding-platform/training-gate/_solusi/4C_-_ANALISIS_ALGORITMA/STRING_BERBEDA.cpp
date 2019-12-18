#include <bits/stdc++.h>
using namespace std;

int main()
{
	string a, b;
	cin >> a >> b;
	if (a.length()>b.length())
		swap(a, b);

	int minimum=b.length();
	for (int i=0; i<b.length()-a.length()+1; i++)
	{
		int tmp=0;
		for (int j=0; j<a.length(); j++)		
			if (a[j]!=b[i+j]) tmp++;
		minimum = min(minimum, tmp);		
	}
	cout << minimum << endl;
}