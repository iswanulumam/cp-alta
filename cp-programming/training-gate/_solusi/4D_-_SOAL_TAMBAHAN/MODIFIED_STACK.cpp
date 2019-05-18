#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long LLU;
typedef long long LL;

long size=0;
deque<pair<long, long> > d;

int main() {	
	int n, addbuffer=0;
	scanf("%d", &n);
	while(n--)
	{
		char opt[4];		
		scanf("%3s", opt);		
		if (strcmp(opt,"add")==0)
		{	
			int x, y;
			scanf("%d %d", &x, &y);
			if (size > 0)
			{
				if (d.front().first == x)				
					d.front().second += y;
				else
					d.push_front(make_pair(x, y));
			} else
				d.push_front(make_pair(x, y));
			size += y;
			printf("%ld\n", size);
		} 
		else if (strcmp(opt, "del")==0)
		{		
			printf("%ld\n", d.front().first);
			int y;					
			scanf("%d", &y);									
			size -= y;
			while (y>0)
			{							
				if (d.front().second >= y)
				{
					d.front().second -= y;
					y = 0;
				} else {
					y-= d.front().second;
					d.pop_front();
				}
			}
		} 		
		else if (strcmp(opt, "adx")==0)
		{		
			int x;
			scanf("%d", &x);
			for (deque<pair<long, long> >::iterator it=d.begin(); it!=d.end(); it++)			
				it->first += x;									
		} 
		else if (strcmp(opt, "dex")==0) 
		{
			int x;
			scanf("%d", &x);
			for (deque<pair<long, long> >::iterator it=d.begin(); it!=d.end(); it++)			
				it->first -= x;									
		} 
	}
}
