#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long LLU;
typedef long long LL;

int main(){
	int m, n, cx, cy;
	scanf("%d %d", &m, &n);
	int arr[m+1][n+1];
	for (int y=0; y<m; y++)
		for (int x=0; x<n; x++)
			scanf("%d", &arr[y][x]);
	
	bool visited[m+1][n+1];
	long maximum=0, mx, my;		
	memset(visited, false, sizeof(visited));

	for (int ay=0; ay<m; ay++)
		for (int ax=0; ax<n; ax++)
		{
			if (visited[ay][ax]) continue;

			long count=0;			
			
			queue<pair<int, int> > q;
			q.push(make_pair(ax, ay));

			while(!q.empty())
			{
				pair<int, int> node=q.front();
				int x=node.first, y=node.second;
				q.pop();
		
				if (visited[y][x])
					continue;			

				if (x!=0)
					if (arr[y][x-1]==arr[y][x]) q.push(make_pair(x-1, y));
				if (x!=n-1)
					if (arr[y][x+1]==arr[y][x]) q.push(make_pair(x+1, y));
				if (y!=0)
					if (arr[y-1][x]==arr[y][x]) q.push(make_pair(x, y-1));
				if (y!=m-1)
					if (arr[y+1][x]==arr[y][x]) q.push(make_pair(x, y+1));

				count++;
				visited[y][x] = true;				
			}

			if (count > maximum) { mx = ax; my = ay; }
			maximum = max(count, maximum);
		}		
	
	queue<pair<int, int> > q;
	q.push(make_pair(mx, my));
	memset(visited, false, sizeof(visited));

	// cout << mx << " " << my << " " << maximum << endl;
	//print array yang baru
	while(!q.empty())
	{
		pair<int, int> node=q.front();
		int x=node.first, y=node.second;
		q.pop();

		if (visited[y][x])
			continue;			

		if (x!=0)
			if (arr[y][x-1]==arr[y][x]) q.push(make_pair(x-1, y));
		if (x!=n-1)
			if (arr[y][x+1]==arr[y][x]) q.push(make_pair(x+1, y));
		if (y!=0)
			if (arr[y-1][x]==arr[y][x]) q.push(make_pair(x, y-1));
		if (y!=m-1)
			if (arr[y+1][x]==arr[y][x]) q.push(make_pair(x, y+1));

		visited[y][x] = true;						
	}

	int newarr[m+1][n+1];

	bool adaswap=true;
	while (adaswap)
	{
		adaswap = false;
		for (int y=m-1; y>=1; y--)
		{
			for (int x=0; x<n; x++)
			{
				if (visited[y][x] && (!visited[y-1][x]))
				{
					swap(arr[y-1][x], arr[y][x]);			
					swap(visited[y-1][x], visited[y][x]);
					adaswap = true;
				}
				
				newarr[y][x] = arr[y][x];
			}
		}
	}

	for (int x=0; x<n; x++)
		newarr[0][x] = arr[0][x];

	for (int y=0; y<m; y++)
	{
		for (int x=0; x<n; x++)
		{
			if (visited[y][x])
				printf(".");
			else
				printf("%d", newarr[y][x]);
			if (x!=n-1)
				printf(" ");
		}
		printf("\n");
	}
}