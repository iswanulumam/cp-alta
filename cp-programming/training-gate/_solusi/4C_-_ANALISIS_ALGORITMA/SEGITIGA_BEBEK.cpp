#include <bits/stdc++.h>
using namespace std;
	  
typedef unsigned long long LLU;
typedef long long LL;

double cariluas(pair<int, int> p1, pair<int, int> p2, pair<int, int> p3)
{
	return abs((p1.first*(p2.second-p3.second)+p2.first*(p3.second-p1.second)+p3.first*(p1.second-p2.second))/2.0f);
}

int main(){
	int n;
	scanf("%d", &n);   
	pair<int, int> coord[n];

	for (int i=0; i<n; i++)	
		scanf("%d %d", &coord[i].first, &coord[i].second);	

	double area=-1.0;

	if (n>=3){
		unsigned long long count = 1;
		area = 400000000.0;

		for (int i=0; i<n; i++) {
			pair<int, int> p1=coord[i];

			for (int j=i+1; j<n; j++) {
				pair<int, int> p2=coord[j];

				for (int k=j+1; k<n; k++) {
					pair<int, int> p3=coord[k];

					double tmp = cariluas(p1, p2, p3);

					if (tmp==0) continue;
							
					if (tmp<area) {
						count = 1;
						area = tmp;
					} else if (tmp==area)
						count++;					
				}
			}
		}

		if ((count != 1) || (area == 400000000.0))
			area = -1.00;
	}	
	printf("%0.2lf\n", area);
}