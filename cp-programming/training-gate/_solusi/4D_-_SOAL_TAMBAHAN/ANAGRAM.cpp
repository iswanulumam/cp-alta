#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long LLU;
typedef long long LL;
 
int main() {
    int n;
    scanf("%d", &n);
    map<string, set<string> > anagr;   
    for (int i=0; i<n; i++)
    {
        char x[101]; string tmp, y;
        scanf("%100s", x);
        tmp = y = x; sort(y.begin(), y.end());
        if (anagr.find(y)==anagr.end())
        {
            set<string> s;
            s.insert(tmp);
            anagr.insert(make_pair(y, s));
        } else {
            anagr[y].insert(tmp);
        }
    }
     
    pair<int, pair<string, string> > s[anagr.size()];
    int idx=0;
    for (map<string, set<string> >::iterator it = anagr.begin(); it!=anagr.end(); it++)    
    {
        s[idx] = make_pair(it->second.size(), make_pair(*(it->second.begin()), it->first));       
        idx++;     
    }
 
    sort(s, s+anagr.size());

	idx=anagr.size()-1;  	

  	for (int i=anagr.size()-1; i>=0; i--)
  	{
  		if (s[i].first == s[idx].first)
  			idx = i;
  		else
  			break;
  	}
 
    if (s[idx].first==1)
        printf("TIDAK ADA\n");
    else {
        printf("%d\n", s[idx].first);
        for (set<string>::iterator it=anagr[s[idx].second.second].begin(); it!=anagr[s[idx].second.second].end(); it++)      
            printf("%s\n", it->c_str());    
    }
     
}