#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long llu;
typedef long long ll;

int main() {
	int n, power[100000];
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
		scanf("%d", &power[i]);
	
	sort(power, power+n);

	int kurang=0, ans=0;

	for (int i = n-1; i >= 0; i--) {
		if (power[i] == -1)
			break;

		kurang = power[i];

		for (int j = 0; j < i; j++) {
			if (kurang == 0)
				break;
			if (power[j] != -1) {
				power[j] = -1;
				kurang--;
			}
		}
		
		ans++;
	}

	printf("%d\n", ans);
}