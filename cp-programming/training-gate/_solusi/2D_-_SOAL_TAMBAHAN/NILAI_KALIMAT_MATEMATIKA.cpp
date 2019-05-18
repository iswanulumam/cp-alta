#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	char op;
	long x, y;
	cin >> x >> op >> y;
	switch (op){
		case '+': cout << x+y; break;
		case '-': cout << x-y; break;
		case '*': cout << x*y; break;
		case '<': (x<y) ? cout << "benar" : cout << "salah"; break;
		case '>': (x>y) ? cout << "benar" : cout << "salah"; break;
		case '=': (x==y) ? cout << "benar" : cout << "salah"; break;
	}
	cout << endl;
	return 0;
}