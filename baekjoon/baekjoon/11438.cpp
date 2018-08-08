#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

vector<int> tree[100001];
int dist[100001];
int dp[100001][18];

void init(int x, int cnt) {
    for (int i = 0; i < tree[x].size(); i++) {
        int nx = tree[x][i];
        if (dist[nx] == -1) {
            dist[nx] = cnt;
            dp[nx][0] = x;
            init(nx, cnt + 1);
        }
    }
}

int main(void) {
    int N; scanf("%d", &N);

    for (int i = 0; i < N - 1; i++) {
        int from, to;
        scanf("%d %d", &from, &to);

        tree[from].push_back(to);
        tree[to].push_back(from);
    }

    memset(dist, -1, sizeof(dist));
    dist[1] = 0;

    init(1, 1);


    for (int k = 1; k <= 17; k++) {
        for (int i = 1; i <= N; i++) {
            dp[i][k] = dp[dp[i][k - 1]][k - 1];
        }
    }

    int M; scanf("%d", &M);

    for (int i = 0; i < M; i++) {
        int x, y; scanf("%d %d", &x, &y);

        if (dist[x] < dist[y]) {
            for (int k = 17; k >= 0; k--) {
                if (x != y && dist[dp[y][k]] >= dist[x]) {
                    y = dp[y][k];
                }
            }
        }
        else if (dist[x] > dist[y]) {
            for (int k = 17; k >= 0; k--) {
                if (x != y && dist[dp[x][k]] >= dist[y]) {
                    x = dp[x][k];
                }
            }
        }

        for (int k = 17; k >= 0; k--) {
            if (x != y && dp[x][k] != dp[y][k]) {
                x = dp[x][k];
                y = dp[y][k];
            }
        }

        int ans = 0;

        if (x == y) ans = x;
        else ans = dp[x][0];
        printf("%d\n", ans);
    }

    return 0;
}