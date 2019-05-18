#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long llu;
typedef long long ll;

int main() {
	int t, n;
	scanf("%d", &t);

	while (t--) {
		scanf("%d", &n);
		int me[n], op[n], s_m = 0, s_o = 0;

		for (int i = 0; i < n; i++)
			scanf("%d", &op[i]);

		for (int i = 0; i < n; i++)
			scanf("%d", &me[i]);

		sort(op, op+n);
		sort(me, me+n);

		int h = 0, t = n-1;
		for (int i = n-1; i >= 0; i--) {
			if (op[i] >= me[t]) {
				h++;
				s_o += 3;
			} else {
				t--;
				s_m += 3;
			}
		}

		if (s_m > s_o)
			printf("YA\n");
		else
			printf("TIDAK\n");
	}
}