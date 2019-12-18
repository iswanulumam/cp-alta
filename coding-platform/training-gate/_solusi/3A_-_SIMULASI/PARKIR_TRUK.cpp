#include <bits/stdc++.h>

typedef unsigned long long LLU;
typedef long long LL;

using namespace std;

struct waktu
{
	int mulai, akhir;
};

int main()
{
	int a, b, c, x, y;		
	waktu t1, t2, t3;	
	cin >> a >> b >> c;
	cin >> x >> y;
	t1.mulai = min(x, y);
	t1.akhir = max(x, y);
	cin >> x >> y;
	t2.mulai = min(x, y);
	t2.akhir = max(x, y);
	cin >> x >> y;
	t3.mulai = min(x, y);
	t3.akhir = max(x, y);
	LLU sum=0;
	for (int i=min(min(t1.mulai,t2.mulai),t3.mulai); i<=max(max(t1.akhir,t2.akhir),t3.akhir); i++)
	{
		short z=0;
		if ((i>=t1.mulai)&&(i<=t1.akhir-1)) z++;
		if ((i>=t2.mulai)&&(i<=t2.akhir-1)) z++;
		if ((i>=t3.mulai)&&(i<=t3.akhir-1)) z++;	

		if (z==1)		
			sum+=1*a;
		else if (z==2)
			sum+=2*b;
		else if (z==3)		
			sum+=3*c;
	}
	cout << sum << endl;
}