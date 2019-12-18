#include <bits/stdc++.h>

typedef unsigned long long llu;
typedef long long ll;

#define RESET(a, b) memset(a, b, sizeof(a))
#define UNIQUE(a) (a).erase(unique((a).begin(), (a).end()), (a).end())
#define MP(a, b) make_pair(a, b)
#define PB(a) push_back(a)
#define F first
#define S second

using namespace std;

inline void READ(bool out) {
#ifndef ONLINE_JUDGE
  freopen("input/input.in", "r", stdin);
  if (out)
    freopen("input/input.out", "w", stdout);
#endif
}

int r, c;
bool board[20][8];

int remove_lines() {
  int startcheck = -1;
  for (int i = r - 1; i >= 0; i--) {
    // cek kalau baris i itu semua true
    bool isline = true;
    for (int j = 0; j < c; j++)
      if (board[i][j] == false) {
        isline = false;
        break;
      }

    // kalau true hilangkan barisnya (set jadi false)
    if (isline) {
      RESET(board[i], false);
      if (startcheck == -1)
        startcheck = i;
    }
  }
  return startcheck;
}

void runtuh(int idx) {
  for (int i=idx; i>=0; i--)
    for (int j=0; j<c; j++) {
      if (board[i][j]==false) continue;

      for (int k=i+1; k<r+1; k++) {        
        if (board[k][j]==true || k==r) {
          board[k-1][j] = true;
          board[i][j] = false;
          break;
        }
      }      
    }
}

void do_nothing() { /* lol */ }

int main() {
  // READ(!false);

  scanf("%d %d", &r, &c);

  char line[c + 1];

  for (int i = 0; i < r; i++) {
    scanf("%s", line);    
    for (int j = 0; j < c; j++)
      board[i][j] = (line[j] == '1');
  }
  
  while (true) {
    int idx= remove_lines();
    if (idx==-1)
      break;

    runtuh(idx);
  }

  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; ++j)
      printf("%c", (board[i][j] ? '1' : '0'));
    printf("\n");
  }
}