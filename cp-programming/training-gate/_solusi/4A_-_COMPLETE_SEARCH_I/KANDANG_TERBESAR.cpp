#include <bits/stdc++.h>
using namespace std;
  
typedef unsigned long long LLU;
typedef long long LL;
  
int main() {
    int n, m;
    bool peta[501][501], visited[501][501];
    long luask=0, luasb=0;
    int poskx, posky, posbx, posby;
  
    scanf("%d %d", &n, &m);
    memset(peta, false, sizeof(peta)); 
    for (int y=0; y<m; y++)
    {
        string tmp;
        scanf("%s\n", &tmp[0]);
        for (int x=0; x<n; x++)
        {
            char c = tmp[x];
            switch (c)
            {
                case('#'): peta[y][x] = true; break;
                case('B'): posbx = x; posby = y; break;
                case('K'): poskx = x; posky = y; break;
            }
        }
    }
  
    queue<pair<int, int> > track;
      
    memset(visited, false, sizeof(visited));
    track.push(make_pair(poskx, posky));
    while(!track.empty())
    {
        pair<int, int> node = track.front();     
        int x=node.first, y=node.second;
        track.pop();       
  
        if (visited[y][x])     
            continue;      
  
        if (peta[y][x] == true)            
            continue;      
  
        if (((x<0) && (x>=n)) && ((y<0) && (y>=m)))
            continue;      
  
        visited[y][x] = true;
        luask++;
        if (x!=n-1)
            if (peta[y][x+1] == false)
                track.push(make_pair(x+1, y));
        if (x!=0)
            if (peta[y][x-1] == false)
                track.push(make_pair(x-1, y));
        if (y!=m-1)
            if (peta[y+1][x] == false)
                track.push(make_pair(x, y+1));
        if (y!=0)
            if (peta[y-1][x] == false)
                track.push(make_pair(x, y-1));
    }  
  
    memset(visited, false, sizeof(visited));
    track.push(make_pair(posbx, posby));
    while(!track.empty())
    {
        pair<int, int> node = track.front();     
        int x=node.first, y=node.second;
        track.pop();       
  
        if (visited[y][x])     
            continue;
          
        if (peta[y][x] == true)            
            continue;      
  
        if ((x<0) || (x>=n) || (y<0) || (y>=m))    
            continue;      
  
        visited[y][x] = true;
        luasb++;
        if (x!=n-1)
            if (peta[y][x+1] == false)
                track.push(make_pair(x+1, y));
        if (x!=0)
            if (peta[y][x-1] == false)
                track.push(make_pair(x-1, y));
        if (y!=m-1)
            if (peta[y+1][x] == false)
                track.push(make_pair(x, y+1));
        if (y!=0)
            if (peta[y-1][x] == false)
                track.push(make_pair(x, y-1));
    }  
  
    if (luask>luasb)
        printf("K %ld\n", luask-luasb);
    else if (luask<luasb)
        printf("B %ld\n", luasb-luask);
    else
        printf("SERI\n");
}