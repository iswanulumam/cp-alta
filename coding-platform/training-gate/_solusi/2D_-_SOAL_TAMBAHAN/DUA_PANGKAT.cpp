#include <iostream>
#include <string>
#include <cmath>

using namespace std;

bool is2(unsigned long long x)
{		
	while (x%2==0)	
		x/=2;					
	return (x==1);
}
 

int main()
{
	unsigned long long x;
	cin >> x;
	if (is2(x))
		cout << "TRUE" << endl;
	else
		cout << "FALSE" << endl;
	return 0;
}