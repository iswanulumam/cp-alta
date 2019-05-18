#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long LLU;
typedef long long LL;

int main() {
	int c, r, q;
	scanf("%d %d", &r, &c);

	char arr[r][c];
	for (int i=0; i<r; i++)
		for (int j=0; j<c; j++)
			scanf(" %c ", &arr[i][j]);

	scanf("%d", &q);
	map<string, bool> m;	
	string query[q];
	for (int i=0; i<q; i++)
	{
		char tmp[101];		
		scanf("%s", tmp);	
		query[i] = tmp;	
		m[query[i]] = false;
	}

	for (int y=0; y<r; y++)
		for (int x=0; x<c; x++)
		{	
			string current;

			for (int i=y; i>=0; i--)
			{				
				current.insert(current.end(), arr[i][x]);
				if (m.find(current)!=m.end())
					m[current] = true;						
			}			

			current="";
			for (int i=y; i<r; i++)
			{
				current.insert(current.end(), arr[i][x]);
				if (m.find(current)!=m.end())
					m[current] = true;				
			}

			current="";
			for (int i=x; i>=0; i--)
			{
				current.insert(current.end(), arr[y][i]);
				if (m.find(current)!=m.end())
					m[current] = true;
			}

			current="";
			for (int i=x; i<c; i++)
			{
				current.insert(current.end(), arr[y][i]);
				if (m.find(current)!=m.end())
					m[current] = true;
			}

			current = "";
			for (int i=y, j=x; i>=0, j>=0; i--, j--)
			{
				current.insert(current.end(), arr[i][j]);
				if (m.find(current)!=m.end())
					m[current] = true;
			}
			current = "";
			for (int i=y, j=x; i>=0, j<c; i--, j++)
			{
				current.insert(current.end(), arr[i][j]);
				if (m.find(current)!=m.end())
					m[current] = true;
			}
			current = "";
			for (int i=y, j=x; i<r, j>=0; i++, j--)
			{
				current.insert(current.end(), arr[i][j]);
				if (m.find(current)!=m.end())
					m[current] = true;
			}
			current = "";
			for (int i=y, j=x; i<r, j<c; i++, j++)
			{
				current.insert(current.end(), arr[i][j]);
				if (m.find(current)!=m.end())
					m[current] = true;
			}
		}

	for (int i=0; i<q; i++)
		cout << query[i] << ' ' << (m[query[i]] ? "Y" : "T") << endl;
}
