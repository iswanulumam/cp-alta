#include <bits/stdc++.h>
using namespace std;

int atas[2000], bawah[2000];

bool isprime(int x) {
	for (int i = 2; i*i <= x; i++)
		if (x%i==0) return false;
	return true;
}

void simplify() {
	for (int i = 2; i <= 2000; i++)
		if (atas[i] == bawah[i])
			atas[i] = bawah[i] = 0;
		else if (atas[i] > bawah[i])
			atas[i] -= bawah[i], bawah[i] = 0;
		else if (atas[i] < bawah[i])
			bawah[i] -= atas[i], atas[i] = 0;
}

int main() {
	// #ifndef ONLINE_JUDGE
	// freopen("faktorial.in", "r", stdin);
	// #endif

	int n, m, tmp;

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &tmp);
		for (int j = 2; j <= tmp; j++) atas[j]++;
	}

	scanf("%d", &m);
	for (int i = 0; i < m; i++) {
		scanf("%d", &tmp);
		for (int j = 2; j <= tmp; j++) bawah[j]++;
	}

	simplify();

	for (int i = 4; i <= 2000; i++) {
		if (atas[i] == 0) continue;
		if (isprime(i)) continue;

		int now = 2, tmp = i;
		while (tmp > 1) {
			if (tmp % now == 0) {
				atas[now] += atas[i];
				tmp /= now;
			} else {
				now++;
			}
		}

		atas[i] = 0;
	}

	for (int i = 4; i <= 2000; i++) {
		if (bawah[i] == 0) continue;
		if (isprime(i)) continue;

		int now = 2, tmp = i;
		while (tmp > 1) {
			if (tmp % now == 0) {
				bawah[now] += bawah[i];
				tmp /= now;
			} else {
				now++;
			}
		}

		bawah[i] = 0;
	}

	simplify();

	bool udah = false;
	for (int i = 2; i <= 2000; i++)
		if (atas[i] > 0) {

			if (udah) printf(" ");
			if (atas[i] == 1)
				printf("%d", i);
			else
				printf("%d(%d)", i, atas[i]);
			udah = true;
		}
	printf("\n");

	udah = false;
	for (int i = 2; i <= 2000; i++)
		if (bawah[i] > 0) {

			if (udah) printf(" ");
			if (bawah[i] == 1)
				printf("%d", i);
			else
				printf("%d(%d)", i, bawah[i]);
			udah = true;
		}
	printf("\n");
}