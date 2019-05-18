#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long LLU;
typedef long long LL;

int main() {
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n, m;
		string query;
		scanf("%d %d", &n, &m);

		pair<int, pair<int, pair<int, string> > > data[n];

		char tmp[6];
		scanf("%5s", tmp);
		query = tmp;

		for (int i=0; i<n; i++)
		{			
			int p1, p2, p3;
			scanf("%5s %d %d %d", tmp, &p1, &p2, &p3);
			string s = tmp;
			data[i] = make_pair(p3, make_pair(p2, make_pair(p1, tmp)));
		}

		sort(data, data+n);
		bool lulus=false;
		int idx=n-1, counter=0;
		while (counter != m)
		{
			// cout << data[i].second.second.second << ' ' <<data[i].second.second.first <<' ' <<data[i].second.first << ' ' <<data[i].first <<endl;
			if (data[idx].second.second.second == query)
			{
				lulus = true;
				break;
			}
			counter++;
			idx--;
		}		
		printf("%s\n", (lulus) ? "YA" : "TIDAK");
	}
}