#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long llu;

#define ii pair<int, int>

int m, n, ans = 0;

vector<ii> spots[40]; //sesuai max depth (7) tak tambahin
int buffer[41][30][30];

const int dirx[4] = {0, 1, 0, -1};
const int diry[4] = {1, 0, -1, 0};

inline bool valid(int y, int x) { return (0 <= y && y < m && 0 <= x && x < n); }

void print(int id) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)  {
            cout << buffer[id][i][j] << ' ';
        }
        cout << endl;
    }
    cout << endl;
}

int fill(int id, int y, int x) {
    int criteria = buffer[id][y][x], ret = 1;
    buffer[id][y][x] = 0;

    for (int i = 0; i < 4; i++) {
        int cy = y+diry[i], cx = x+dirx[i];

        if (valid(cy, cx)) {
            if (buffer[id][cy][cx] == criteria) ret += fill(id, cy, cx);

        }
    }

    return ret;
}

void fall(int id) {
    for (int j = 0; j < n; j++) {
        bool ada = true;

        while (ada) {
            ada = false;

            for (int i = m-2; i >= 0; i--) {
                if ((buffer[id][i+1][j] == 0) && (buffer[id][i][j] > 0)) {
                    ada = true;
                    swap(buffer[id][i+1][j], buffer[id][i][j]);
                }
            }
        }
    }
}

void cari(int id, vector<ii> & container) {
    memcpy(buffer[40], buffer[id], sizeof(buffer[id]));

    container.clear();
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++) {
            if (buffer[40][i][j] == 0) continue;

            int count = fill(40, i, j);

            if (count >= 2) container.push_back(make_pair(i, j));
        }
}


int solve(int depth) {
    memcpy(buffer[depth], buffer[depth-1], sizeof(buffer[depth-1]));

    cari(depth, spots[depth]);
    if (spots[depth].size() == 0) return 0;

    int ret = 0;

    for (int i = 0; i < spots[depth].size(); i++) {
        int score = fill(depth, spots[depth][i].first, spots[depth][i].second);
        fall(depth);

        int cur;

        cur = score*(score-1) + solve(depth+1);
        memcpy(buffer[depth], buffer[depth-1], sizeof(buffer[depth-1]));

        ret = max(cur, ret);
    }

    return ret;
}

int main() {
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // #endif

    scanf("%d %d", &m, &n);

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &buffer[0][i][j]);

    printf("%d\n", solve(1));

    // cari(0, spots[0]);

    // for (int i = 0; i < spots[0].size(); i++) {
    // 	cout << spots[0][i].first<<','<<spots[0][i].second << ' ';
    // }
    // cout << endl;
}