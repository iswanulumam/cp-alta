#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long llu;
typedef long long ll;

#define fs first
#define sc second
#define pb push_back
#define mp make_pair
#define reset(a, b) memset(a, b, sizeof(a))

int main() {
	int n;
	scanf("%d", &n);
	int arr[n];
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	set<int> indices;

	for (int i = 1; i < n-1; i++) {
		if ((arr[i-1] <= arr[i]) && (arr[i] >= arr[i+1]))
			indices.insert(i+1);
	}

	if (n > 1) {
		if (arr[0] >= arr[1])
			indices.insert(1);
		if (arr[n-2] <= arr[n-1])
			indices.insert(n);
	}

	if (n == 1)
		indices.insert(1);
	for (set<int>::iterator it = indices.begin(); it != indices.end(); it++) {
		printf("%d\n", *it);
	}
}