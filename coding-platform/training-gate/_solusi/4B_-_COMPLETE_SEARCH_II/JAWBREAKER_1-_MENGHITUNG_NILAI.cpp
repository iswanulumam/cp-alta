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
	scanf("%d %d", &cy, &cx);

	queue<pair<int, int> > q;
	q.push(make_pair(cx, cy));

	bool visited[m+1][n+1];
	long count=0;	
	memset(visited, false, sizeof(visited));
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
	printf("%ld\n", count*(count-1));
}