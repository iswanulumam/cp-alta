#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long llu;
typedef long long ll;

#define fs first
#define sc second
#define pb push_back
#define mp make_pair
#define scanint(a) scanf("%d", &a);
#define debug(a) cerr << #a << '=' << a << endl;
#define reset(a, b) memset(a, b, sizeof(a))

int main() {
    int n;
    scanint(n);

    pair<int, int> arr[n];
    for (int i = 0; i < n; i++) {
        scanint(arr[i].sc);
        scanint(arr[i].fs);
        arr[i].fs += arr[i].sc - 1;
    }

    sort(arr, arr+n);

    int ans = 1, last = arr[0].fs;

    for (int i = 1; i < n; i++) {
        if (arr[i].sc > last) {
            ans++;
            last = arr[i].fs;
        }
    }

    printf("%d\n", ans);
}