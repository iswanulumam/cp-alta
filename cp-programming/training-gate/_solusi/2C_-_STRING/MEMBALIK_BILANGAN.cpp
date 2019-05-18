#include <iostream>
#include <string>
#include <cmath>

using namespace std;

unsigned long reverse(unsigned long x)
{
	unsigned long tmp=x, len= 1;
	while(tmp>0)
	{
		len *= 10;
		tmp/=10;
	}
	len /= 10;
	while(x>0)
	{
		tmp += x%10 * len;
		len /= 10;
		x /= 10;
	}
	return tmp;
}
 

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		unsigned long long x;
		cin >> x;
		cout << reverse(x) << endl;
	}
	return 0;
}