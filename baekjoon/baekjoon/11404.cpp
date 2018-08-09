//#include <iostream>
//#include <vector>
//using namespace std;
//#define MAX 200000000
//vector<pair<int, int>> tree[101];
//
//int dist[101][101];
//
//int min(int a, int b) { return a > b ? b : a; }
//
//int main(void) {
//    int n, m;
//    scanf("%d %d", &n, &m);
//
//    for (int i = 1; i <= n; i++) {
//        for (int j = 1; j <= n; j++) {
//            if (i == j) dist[i][j] = 0;
//            else dist[i][j] = MAX;
//        }
//    }
//
//    for (int i = 0; i < m; i++) {
//        int from, to, cost;
//        scanf("%d %d %d", &from, &to, &cost);
//
//        dist[from][to] = min(dist[from][to], cost);
//    }
//
//    for (int k = 1; k <= n; k++) {
//        for (int i = 1; i <= n; i++) {
//            for (int j = 1; j <= n; j++) {
//                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
//            }
//        }
//    }
//
//    for (int i = 1; i <= n; i++) {
//        for (int j = 1; j <= n; j++) {
//            if (dist[i][j] == MAX) {
//                printf("0 ");
//            }
//            else {
//                printf("%d ", dist[i][j]);
//            }
//        }
//        printf("\n");
//    }
//
//    return 0;
//}