//#include <iostream>
//#include <vector>
//#include <cstring>
//using namespace std;
//#define NMAX 100000
//#define KMAX 17 // 2^17 = 131072
//
//vector<pair<int, int>> tree[NMAX + 1];
//int dist[NMAX + 1];
//int dp[NMAX + 1][KMAX + 1];
//int DMAX[NMAX + 1][KMAX + 1], DMIN[NMAX + 1][KMAX + 1];
//
//int min(int a, int b) { return a > b ? b : a; }
//int max(int a, int b) { return a > b ? a : b; }
//
//void init_dist(int x, int cnt) {
//    for (int i = 0; i < tree[x].size(); i++) {
//        int nx = tree[x][i].first;
//        int len = tree[x][i].second;
//
//        if (dist[nx] == -1) {
//            dist[nx] = cnt + 1;
//            dp[nx][0] = x;
//            DMAX[nx][0] = len;
//            DMIN[nx][0] = len;
//
//            init_dist(nx, cnt + 1);
//        }
//    }
//}
//
//int main(void) {
//    int N;
//
//    scanf("%d", &N);
//
//    for (int i = 0; i < N - 1; i++) {
//        int x, y, c;
//
//        scanf("%d %d %d", &x, &y, &c);
//
//        tree[x].push_back(make_pair(y, c));
//        tree[y].push_back(make_pair(x, c));
//    }
//
//    memset(dist, -1, sizeof(dist));
//    dist[1] = 1;
//    init_dist(1, 1);
//
//    //DMIN--> MAX 값으로 초기화 여기선 안해도는 되는데 신경 쓰도록
//    for (int k = 1; k <= KMAX; k++) {
//        for (int i = 1; i <= N; i++) {
//            dp[i][k] = dp[dp[i][k - 1]][k - 1];
//            DMIN[i][k] = min(DMIN[i][k - 1], DMIN[dp[i][k - 1]][k - 1]);
//            DMAX[i][k] = max(DMAX[i][k - 1], DMAX[dp[i][k - 1]][k - 1]);
//        }
//    }
//
//    int K;
//
//    scanf("%d", &K);
//
//    for (int i = 0; i < K; i++) {
//        int from, to;
//
//        scanf("%d %d", &from, &to);
//
//        int ans_min = 2000000;
//        int ans_max = -1;
//
//        if (dist[from] < dist[to]) {
//            for (int k = KMAX; k >= 0; k--) {
//                if (from != to && dist[dp[to][k]] >= dist[from]) {
//                    ans_min = min(ans_min, DMIN[to][k]);
//                    ans_max = max(ans_max, DMAX[to][k]);
//                    to = dp[to][k];
//                }
//            }
//        }
//        else if (dist[from] > dist[to]) {
//            for (int k = KMAX; k >= 0; k--) {
//                if (from != to && dist[dp[from][k]] >= dist[to]) {
//                    ans_min = min(ans_min, DMIN[from][k]);
//                    ans_max = max(ans_max, DMAX[from][k]);
//                    from = dp[from][k];
//                }
//            }
//        }
//
//        for (int k = KMAX; k >= 0; k--) {
//            if (from != to && dp[from][k] != dp[to][k]) {
//                ans_min = min(ans_min, min(DMIN[to][k], DMIN[from][k]));
//                ans_max = max(ans_max, max(DMAX[to][k], DMAX[from][k]));
//
//                from = dp[from][k];
//                to = dp[to][k];
//            }
//        }
//
//        if (from != to) {
//            ans_min = min(ans_min, min(DMIN[to][0], DMIN[from][0]));
//            ans_max = max(ans_max, max(DMAX[to][0], DMAX[from][0]));
//        }
//
//        printf("%d %d\n", ans_min, ans_max);
//    }
//
//    return 0;
//}