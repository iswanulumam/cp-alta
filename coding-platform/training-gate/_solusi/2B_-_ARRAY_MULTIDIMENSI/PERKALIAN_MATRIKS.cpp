#include <iostream>

using namespace std;

int main()
{
	int m, n, p;
	cin >> m >> n;
	int arr1[m][n];
	for (int i = 0; i < m; ++i)	
		for (int j = 0; j < n; ++j)			
			cin >> arr1[i][j];
	
	cin >> n >> p;
	int arr2[n][p];	
	for (int i = 0; i < n; ++i)	
		for (int j = 0; j < p; ++j)			
			cin >> arr2[i][j];
	

	for (int i = 0; i < m; ++i)	
	{
			
		for (int j = 0; j < p; ++j)				
		{
			long sum =0;
			for (int k=0; k<n; k++)
				sum += arr1[i][k]*arr2[k][j];

			cout << sum;
			if (j!=p-1)
				cout << ' ';
		}
		cout << endl;
	}
	return 0;	
}