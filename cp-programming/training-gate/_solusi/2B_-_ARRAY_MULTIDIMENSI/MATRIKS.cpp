#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

int main()
{
	int n, m;	
	cin >> n >> m;
	int a[n][m];
	for (int i=0; i<n; i++)
		for (int j=0; j<m; j++)
			cin >> a[i][j];

	for (int i=0; i<m; i++)
	{
		for (int j=n-1; j>=0; j--)		
		{
			cout << a[j][i];
			if (j!=0)
				cout << ' ';
		} 

		cout << endl;
	}	

	return 0;
}