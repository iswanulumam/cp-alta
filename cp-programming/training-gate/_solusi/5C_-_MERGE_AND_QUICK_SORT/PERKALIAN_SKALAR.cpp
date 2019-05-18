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

inline void READ(const string& s, bool out = false) {
#ifndef ONLINE_JUDGE
  freopen((s + ".in").c_str(), "r", stdin);
  if (out)
    freopen((s + ".out").c_str(), "w", stdout);
#endif
}

int main() {
  //  READ("input");

  int n;
  scanf("%d", &n);
  ll v1[n], v2[n];

  for (int i = 0; i < n; i++)
    scanf("%lld", &v1[i]);
  for (int i = 0; i < n; i++)
    scanf("%lld", &v2[i]);

  sort(v1, v1 + n);
  sort(v2, v2 + n);
  long long res = 0;
  for (int i = 0; i < n; i++)
    res += v1[i] * v2[n - i - 1];
  printf("%lld\n", res);
}