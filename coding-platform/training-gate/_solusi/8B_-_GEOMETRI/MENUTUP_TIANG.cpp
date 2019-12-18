#include <bits/stdc++.h>

typedef long long ll;
typedef unsigned long long llu;

using namespace std;

#define DEBUG !true

#define N 100000

pair<int, int> t[2*N + 2];
int s, f, n, d;

int main() {
	if (DEBUG) freopen("input.txt", "r", stdin);

	scanf("%d %d %d %d", &s, &f, &n, &d);

	d /= 2;

	for (int i = 0; i < n; i++) {
		int x, h;
		scanf("%d %d", &x, &h);	
		t[2*i] = make_pair(x-d, h);
		t[2*i+1] = make_pair(x+d, h);
	}

	t[2*n] = make_pair(s, 0);
	t[2*n + 1] = make_pair(f, 0);

	sort(t, t + 2*n + 2);
	
	vector<int> convex;
	convex.push_back(0);
	convex.push_back(1);

	for (int i = 2; i < 2*n + 2; i++) {
		convex.push_back(i);
		
		int top, depan, samping, base;
		while (convex.size() > 2) {
			top = convex.size() - 1;
			depan = abs(t[convex[top]].second - t[convex[top-2]].second);
			samping = abs(t[convex[top]].first - t[convex[top-2]].first);
			base = min(t[convex[top]].second, t[convex[top-2]].second);

			if (t[convex[top]].second > t[convex[top-2]].second) {
				double ex_h = base + (double)depan / (double)samping * (double)abs(t[convex[top-1]].first - t[convex[top-2]].first);

				if (ex_h <= t[convex[top-1]].second)
					break;
				else
					convex.erase(convex.begin()+top-1);
			} else {
				double ex_h = base + (double)depan / (double)samping * (double)abs(t[convex[top]].first - t[convex[top-1]].first);

				if (ex_h <= t[convex[top-1]].second)
					break;
				else
					convex.erase(convex.begin()+top-1);
			}
		}					
	}

	double ans = 0;
	for (int i = 1; i < convex.size(); i++)
		ans += hypot(abs(t[convex[i]].first - t[convex[i-1]].first), abs(t[convex[i]].second - t[convex[i-1]].second));

	printf("%0.3lf\n", ans);
}