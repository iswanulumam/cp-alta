#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long LLU;
typedef long long LL;

int main(){
	int n, m;
	scanf("%d %d", &n, &m);
	bool arr[n+1][m+1];	

	for (int y=0; y<n; y++)
		for (int x=0; x<m; x++)
		{
			int tmp;
			scanf("%d", &tmp);
			arr[y][x] = (tmp!=-1);
		}

	int sx, sy;
	scanf("%d %d", &sy, &sx);
	
	int dist[n+1][m+1];
	bool visited[n+1][m+1];
	memset(dist, -1, sizeof(dist));	
	memset(visited, false, sizeof(visited));	

	queue<pair<int, int> > q;			
	q.push(make_pair(sy-1, sx-1));
	dist[sy-1][sx-1] = 1;
	// for (int y=0; y<n; y++)
	// {
	// 	for (int x=0; x<m; x++)
	// 	{
	// 		cout<<arr[y][x] << '\t'; 
	// 	}
	// 	cout << endl;
	// }
	while(!q.empty())
	{
		int y=q.front().first, x=q.front().second;
		q.pop();

		if (visited[y][x]) continue;

		if (x!=0) //ke kiri
			if (arr[y][x-1] && !visited[y][x-1]) { q.push(make_pair(y, x-1)); dist[y][x-1] = dist[y][x]+1; }
		if (x!=m-1) //ke kanan			
			if (arr[y][x+1] && !visited[y][x+1]) { q.push(make_pair(y, x+1)); dist[y][x+1] = dist[y][x]+1; }
		if (y!=0) //ke atas
			if (arr[y-1][x] && !visited[y-1][x]) { q.push(make_pair(y-1, x)); dist[y-1][x] = dist[y][x]+1; }
		if (y!=n-1) //kebawah
			if (arr[y+1][x] && !visited[y+1][x]) { q.push(make_pair(y+1, x)); dist[y+1][x] = dist[y][x]+1; }

		visited[y][x] = true;
	}

	// for (int y=0; y<n; y++)
	// {
	// 	for (int x=0; x<m; x++)
	// 	{
	// 		cout<<dist[y][x] << '\t'; 
	// 	}
	// 	cout << endl;
	// }
	int minimum=n*m+2;

	for (int x=0; x<m; x++)
		if (dist[0][x]!=-1) minimum = min(dist[0][x], minimum);
	for (int x=0; x<m; x++)		
		if (dist[n-1][x]!=-1) minimum = min(dist[n-1][x], minimum);
	for (int y=0; y<n; y++)
		if (dist[y][0]!=-1) minimum = min(dist[y][0], minimum);
	for (int y=0; y<n; y++)
		if (dist[y][m-1]!=-1) minimum = min(dist[y][m-1], minimum);
	cout << minimum << endl;
}