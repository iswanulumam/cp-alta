#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

int main()
{
	int n;
	int v[100001] = {0};
	cin >> n;
	while(n--)
	{
		int tmp;
		cin >> tmp;
		v[tmp]++;
	}
	int maxval=0, maxidx=-1;
	for (int i=0; i<100001; i++)
	{
		if (v[i] >= maxval)
		{
			maxval = v[i];
			maxidx = i;
		}
	}
	cout << maxidx <<endl;
}