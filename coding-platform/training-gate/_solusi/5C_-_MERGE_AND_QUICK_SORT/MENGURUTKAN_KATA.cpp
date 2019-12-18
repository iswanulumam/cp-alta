#include <bits/stdc++.h>
 
typedef unsigned long long llu;
typedef long long ll;
 
#define RESET(a, b) memset(a,b,sizeof(a))
#define UNIQUE(a) (a).erase( unique( (a).begin(), (a).end() ), (a).end() )
#define MP(a, b) make_pair(a, b)
#define PB(a) push_back(a)
#define F first
#define S second
 
using namespace std;
 
inline void READ(const string &s, bool out=false) {
  #ifndef ONLINE_JUDGE
  freopen((s + ".in").c_str(), "r", stdin);
  if (out) freopen((s + ".out").c_str(), "w", stdout);
  #endif
}
 
int main() {   
  // READ("input");
 
  int n;
  cin >> n;
  vector<string> arr[101];
  string s;
  for (int i=0; i<n; i++) {
    cin >> s;    
    arr[s.length()].PB(s);
  }  
   
  for (int i=0; i<101; i++) {
    sort(arr[i].begin(), arr[i].end());
 
    for (vector<string>::iterator it = arr[i].begin(); it!=arr[i].end(); it++)
      printf("%s\n", it->c_str());  
  }
}