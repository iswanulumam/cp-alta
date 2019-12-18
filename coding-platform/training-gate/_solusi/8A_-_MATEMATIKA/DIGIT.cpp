#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int ans[5001];

/* START OF GFLYINGCAT'S BIG UNSIGNED NUMBER LIBRARY */
/* last date: 7/7/2015 */

#define L 2000

struct bign{
    short num[L];
    int len;
};

bign init(string s) {
    bign ret;
    memset(ret.num, -1, sizeof(ret.num));
    ret.len = 0;

    if (s != "0") {
        for (int i = 0; i < s.length(); i++)
            ret.num[i] = (int) s[s.length()-i-1] - (int) '0';
        ret.len = s.length();
    }

    return ret;
}

bign init(ll x) {
    bign ret;
    memset(ret.num, -1, sizeof(ret.num));
    ret.len = 0;

    if (x != 0) {
        int idx = 0;
        while (x > 0) {
            ret.num[idx++] = x % 10;
            x /= 10;
            ret.len++;
        }
    }

    return ret;
}

void print(bign a) {
    if (a.len == 0) {
        printf("0\n");
        return;
    }

    for (int i = a.len-1; i >= 0; i--)
        printf("%d", a.num[i]);
}

bign simplify(bign a) {
    while (a.num[a.len-1] == 0 && a.len >= 1)
        a.len--;
    return a;
}


bign add(bign & a, bign & b) {
    bign res = init("0");

    int carry = 0, last;
    for (int i = 0; i < L; i++) {
        int x = ((a.num[i] == -1) ? 0 : a.num[i]), y = ((b.num[i] == -1) ? 0 : b.num[i]);

        last = i;
        if (a.num[i] == -1 && b.num[i] == -1) break;

        res.len++;
        res.num[i] = (x+y+carry)%10;
        carry = (x+y+carry)/10;
    }

    if (carry > 0) {
        res.num[last] = carry;
        res.len++;
    }

    return res;
}

bign mul(bign a, bign b) {
    bign res = init("0");
    bign tmp;

    for (int i = 0; i < a.len; i++) {
        int carry = 0;

        tmp = init("0");
        for (int j = 0; j <= i; j++)
            tmp.num[j] = 0;
        tmp.len = i;

        for (int j = 0; j < b.len; j++) {
            tmp.num[tmp.len] = (b.num[j]*a.num[i]+carry)%10;
            carry = (b.num[j]*a.num[i]+carry)/10;

            tmp.len++;
        }

        if (carry > 0) {
            tmp.num[i+b.len] = carry;
            tmp.len++;
        }
        res = add(res, tmp);
    }
    return simplify(res);
}

/* END OF GFLYINGCAT BIG NUMBER LIBRARY */

int main() {
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt", "r", stdin);
	// #endif

	ans[0] = 1;

	bign now = init(1);
	for (int i = 1; i <= 5000; i++) {
		now = add(now, now);

		int res = 0;
		for (int j = 0; j < now.len; j++)
			res += now.num[j];
		ans[i] = res;
	}

	int t, n;
	scanf("%d", &t);

	while (t--) {
		scanf("%d", &n);
		printf("%d\n", ans[n]);
	}
}