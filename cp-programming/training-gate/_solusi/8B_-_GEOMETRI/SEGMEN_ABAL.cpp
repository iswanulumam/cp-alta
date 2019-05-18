#include <bits/stdc++.h>

typedef long long ll;
typedef unsigned long long llu;

using namespace std;

struct point{ double x, y; };
struct line { bool vert; double m, c; point a, b; }; //represent line segment dengan y = mx+c;

line to_line(point a, point b) {
    line ret;

    ret.a = a;
    ret.b = b;

    if (fabs(a.x -b.x) < 1e-9)
        ret.vert = true;
    else {
        ret.vert = false;
        ret.m = (double)(a.y-b.y)/(double)(a.x-b.x);
        ret.c = -ret.m*a.x+a.y;
    }

    return ret;
}

bool inrange(double x, double a, double b) {
    return min(a, b) <= x && x <= max(a, b);
}

double y(line a, double x) {
    return a.m * x + a.c;
}

double int_x(line a, line b) {
    return (double)(b.c - a.c) / (double)(a.m - b.m);
}

bool intersect(line p, line q) {
    if (p.vert && q.vert)
        return false;
    else if (p.vert || q.vert) {
        int vertx = (p.vert) ? p.a.x : q.a.x;
        line r = (!p.vert) ? p : q;
        line s = (p.vert) ? p : q;

        if (inrange(vertx, r.a.x, r.b.x))
            return inrange(y(r, vertx), s.a.y, s.b.y);

        return false;
    } else {
        if (fabs(p.m - q.m) < 1e-9) {
            return false;
        } else {
            double x = int_x(p, q);
            double py = y(p, x), qy = y(q, x);

            return inrange(py, p.a.y, p.b.y) && inrange(x, p.a.x, p.b.x) && inrange(qy, q.a.y, q.b.y) && inrange(x, q.a.x, q.b.x);
        }
    }
}

line garis[2000];

int main() {
    // freopen("input.txt", "r", stdin);

    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        point a, b;
        scanf("%lf %lf %lf %lf", &a.x, &a.y, &b.x, &b.y);

        garis[i] = to_line(a, b);
        // cout << garis[i].m << ' ' << garis[i].c << endl;
    }

    int ans = 0;
    for (int i = 0; i < t; i++)
        for (int j = i+1; j < t; j++)
            if (intersect(garis[i], garis[j]))
                ans++;

    printf("%d\n", ans);
}