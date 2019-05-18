#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long llu;
typedef long long ll;

#define RESET(a, b) memset(a, b, sizeof(a))
#define MP make_pair
#define PB push_back
#define F first
#define S second

vector<vector<string> > posb(5);

void get_posb(int idx, string res, int point, int match) {
  // pretty as usual, isn't it?
  if (match == 0) {
    if (point == 0)      
      posb[idx].PB(res);    
  } else {
    if (point >= 3)
      get_posb(idx, res + "w", point - 3, match - 1);
    if (point >= 1)
      get_posb(idx, res + "d", point - 1, match - 1);
    get_posb(idx, res + "l", point, match - 1);
  }
}

string check_arr[5];

int get_idx(int player, int idx) {
  if (idx<player)
    return idx;
  return idx-1;  
}

bool check(int n) {
  for (int i = 0; i < n; i++) {    
    for (int j = 0; j < n; j++) {              
      if (i==j) continue;

      char a = check_arr[i][get_idx(i, j)], b = check_arr[j][get_idx(j, i)];

      if (a == b) {
        if (a != 'd') 
          return false;
      } else {
        if (a=='d' || b=='d')
          return false;
      }      
    }
  }    

  return true;
}

int main() {
  int t;
  scanf("%d", &t);
  while (t--) {
    int n;    
    scanf("%d", &n);    
    for (int i = 0, point; i < n; i++) {      
      scanf("%d", &point);
      posb[i].clear();
      get_posb(i, "", point, n - 1);      
    }

    #define it vector<string>::iterator

    bool done=false;   
    for (it ia=posb[0].begin(); ia<posb[0].end() && !done; ia++) {
      check_arr[0] = *ia;            
      for (it ib=posb[1].begin(); ib<posb[1].end() && !done && n>=2; ib++) {
        check_arr[1] = *ib;
        if (n==2) done = check(n);
        for (it ic=posb[2].begin(); ic<posb[2].end() && !done && n>=3; ic++) {
          check_arr[2] = *ic;
          if (n==3) done = check(n);
          for (it id=posb[3].begin(); id<posb[3].end() && !done && n>=4; id++) {
            check_arr[3] = *id;
            if (n==4) done = check(n);
            for (it ie=posb[4].begin(); ie<posb[4].end() && !done && n==5; ie++) {
              check_arr[4] = *ie;
              if (n==5) done = check(n);
            }
          }
        }
      }
    }

    if (done)
      printf("YES\n");
    else
      printf("NO\n");
  }
}