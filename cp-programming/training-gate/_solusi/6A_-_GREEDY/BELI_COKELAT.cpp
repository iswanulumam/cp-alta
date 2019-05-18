#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long llu;
typedef long long ll;

#define fs first
#define sc second
#define pb push_back
#define mp make_pair
#define reset(a, b) memset(a, b, sizeof(a))

bool my_func(pair<llu, llu> i, pair<llu, llu> j) {
	if (i.first < j.first)
		return true;
	else if (i.first == j.first)
		return (i.second > j.second);
	else
		return false;
}

int main() {
	int n;
	llu d;
	scanf("%d %llu", &n, &d);

	pair<llu, llu> arr[n];

	for (int i = 0; i < n; i++) {
		llu h, b;
		scanf("%llu %llu", &h, &b);
		arr[i] = mp(h, b);
	}

	sort(arr, arr+n, my_func);

	llu temp = d;

	//cari berdasarkan besarnya value
	llu ans = 0;
	for (int i = 0; i < n; i++) {
		if (d >= arr[i].fs * arr[i].sc) {
			ans += arr[i].sc;
			d -= arr[i].sc*arr[i].fs;
		} else {
			ans += d / arr[i].fs;
			break;
		}
	}

	printf("%llu\n", ans);
}