#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s1;
	getline(cin, s1);
	for (int i=s1.length()-1; i>=0; i--)
		cout << s1[i];
	cout << endl;
}