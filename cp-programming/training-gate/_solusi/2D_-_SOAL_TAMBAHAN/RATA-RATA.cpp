#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	int t;
	cin >> t;
	double sum=0.0, m_in, m_ax;	
	for (int i=0; i<t; i++)
	{
		double tmp;
		cin >> tmp;
		sum += tmp;
		if (i==0)
		{
			m_in = tmp;
			m_ax = tmp;
		} else {
			if (tmp>m_ax)
				m_ax = tmp;
			if (tmp<m_in)
				m_in = tmp;
		}		
	}	
	sum /= t;
	cout << fixed <<setprecision(2) << m_in << ' ' << m_ax << ' ' << sum << endl;
	return 0;
}