#include <bits/stdc++.h>

typedef long long ll;
typedef unsigned long long llu;

using namespace std;

#define DEBUG !true

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
        return ((fabs(p.a.x - q.a.x) < 1e-9) && (inrange(p.a.y, q.a.y, q.b.y) || inrange(p.b.y, q.a.y, q.b.y) || inrange(q.a.y, p.a.y, p.b.y) || inrange(q.b.y, p.a.y, p.b.y))) ? true : false;
    else if (p.vert || q.vert) {
        int vertx = (p.vert) ? p.a.x : q.a.x;
        line r = (!p.vert) ? p : q;
        line s = (p.vert) ? p : q;

        if (inrange(vertx, r.a.x, r.b.x))
            return inrange(y(r, vertx), s.a.y, s.b.y);

        return false;
    } else {
        if (fabs(p.m - q.m) < 1e-9) {
            if (fabs(p.c - q.c) < 1e-9) {
                if (inrange(p.a.x, q.a.x, q.b.x) || inrange(p.b.x, q.a.x, q.b.x) || inrange(q.b.x, p.a.x, p.b.x) || inrange(q.b.x, p.a.x, p.b.x))
                    return true;
                return false;
            }

            return false;
        } else {
            double x = int_x(p, q);
            double py = y(p, x), qy = y(q, x);

            // cout << x << ' ' << py << ' ' << qy << endl;
            return inrange(py, p.a.y, p.b.y) && inrange(x, p.a.x, p.b.x) && inrange(qy, q.a.y, q.b.y) && inrange(x, q.a.x, q.b.x);
        }
    }
}

line garis[200000 + 2];

point to_point(int x, int y) {
    point ret;
    ret.x = x;
    ret.y = y;
    return ret;
}

int main() {
    // freopen("input.txt", "r", stdin);

    int t;
    scanf("%d", &t);

    while (t--) {
        double x1, x2, y1, y2;
        point a, b;
        line kotak[4]; line garis;
        scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &a.x, &a.y, &b.x, &b.y);

        garis = to_line(a, b);

        kotak[0] = to_line(to_point(x1, y1), to_point(x1, y2));
        kotak[1] = to_line(to_point(x1, y2), to_point(x2, y2));
        kotak[2] = to_line(to_point(x2, y2), to_point(x2, y1));
        kotak[3] = to_line(to_point(x2, y1), to_point(x1, y1));

        bool ans = false;
        for (int i = 0; i < 4; i++) {
            if (intersect(garis, kotak[i])) {
                ans = true;
                break;
            }
        }

        printf("%s\n", (ans) ? "YA" : "TIDAK");
    }

}