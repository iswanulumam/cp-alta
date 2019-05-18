#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long LLU;
typedef long long LL;

int main() {	
	deque<long> d;
	int n;	
	long size=0;
	bool is_head_front = true;
	scanf("%d", &n);

	while(n--)
	{
		char query[4];		
		scanf("%3s", query);

		if (strcmp(query, "add")==0) {				
			int x, y;
			scanf("%d %d", &x, &y);
			size += y;
			if (is_head_front)
				for (int i=0; i<y; i++)				
					d.push_back(x);				
			else
				for (int i=0; i<y; i++)				
					d.push_front(x);				
			printf("%ld\n", size);
		} else if (strcmp(query, "del")==0) {
			int y;
			scanf("%d", &y);			
			size -= y;
			int val;
			if (is_head_front)
			{
				val = d.front();
				for (int i=0; i<y; i++)
					d.pop_front();			
			}
			else
			{
				val = d.back();
				for (int i=0; i<y; i++)				
					d.pop_back();
			}
			printf("%d\n", val);
		} else if (strcmp(query, "rev")==0) {		
			is_head_front = !is_head_front;			
		}
	}
}