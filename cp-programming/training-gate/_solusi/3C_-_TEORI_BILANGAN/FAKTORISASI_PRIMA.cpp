#include <bits/stdc++.h>
  
typedef unsigned long long LLU;
typedef long long LL;
  
using namespace std;

struct data
{
	long val, p;
};

int main()
{   
	vector<data> v;
	long n;
	cin >> n;
	data buf;
	buf.val = 2;
	buf.p = 0;
	while(n>1)
	{
		if (n%buf.val==0)
		{
			n/=buf.val;
			buf.p++;
		} 
		else
		{
			if (buf.p!=0)
				v.push_back(buf);
			buf.val++;
			buf.p=0;
		}
	}
	if (buf.p!=0)
		v.push_back(buf);

	for (vector<data>::iterator it=v.begin(); it<v.end(); ++it)
	{
		if (it->p != 1)
			cout << it->val << '^' << it->p;
		else
			cout << it->val;
		if (it!=v.end()-1)
			cout << " x ";	
	}
	cout << endl;

}