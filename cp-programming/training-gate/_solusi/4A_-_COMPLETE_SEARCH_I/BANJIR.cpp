#include <bits/stdc++.h>
using namespace std;
   
typedef unsigned long long LLU;
typedef long long LL;
   
int main() {
    int t;
    string dump;
    cin >> t;
    getline(cin, dump);
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        getline(cin, dump);
        bool visited[n+1][m+1], maps[n+1][m+1], banjir, isbreak=false, fp=0;
        memset(maps, false, sizeof(maps));
        memset(visited, false, sizeof(visited));
        for (int y=0; y<n; y++)
        {
            string s;
            getline(cin, s);
            for (int x=0; x<m; x++)         
                if (s[x]=='#') maps[y][x] = true; else fp++;
        }              
        for (int y=0; y<n; y++)
        {          
            for (int x=0; x<m; x++)
            {
                if (maps[y][x] || visited[y][x])
                    continue;
 
                queue<pair<int, int> > q;
                q.push(make_pair(x, y));
                banjir = false;
                while(!q.empty())
                {
                    pair<int, int> node = q.front();
                    int cx=node.first, cy=node.second;
                    q.pop();
 
                    if (visited[cy][cx])
                        continue;
 
                    if(cx!=0)
                        if(!maps[cy][cx-1]) q.push(make_pair(cx-1, cy));
                    if(cx!=m-1)
                        if(!maps[cy][cx+1]) q.push(make_pair(cx+1, cy));
                    if(cy!=0)
                        if(!maps[cy-1][cx]) q.push(make_pair(cx, cy-1));
                    if(cy!=n-1)
                        if(!maps[cy+1][cx]) q.push(make_pair(cx, cy+1));
                     
                    visited[cy][cx] = true;                
                    if ((cx==0)||(cx==m-1)||(cy==0)||(cy==n-1))
                        banjir = true;                                                         
                }              
                if (!banjir)
                {
                    isbreak = true;
                    break;
                }
            }  
            if (isbreak)       
                break;
        }
        if (!banjir && fp>0)
            cout << "YA" << endl;
        else
            cout << "TIDAK" << endl;
    }
}