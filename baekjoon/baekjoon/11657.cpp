//#include <iostream>
//#include <vector>
//using namespace std;
//#define MAX 2000000000
//
//int tree[6001][3];
//int dist[501];
//
//int main(void) {
//    int N, M;
//
//    scanf("%d %d", &N, &M);
//
//    for (int i = 0; i < M; i++) {
//        scanf("%d %d %d", &tree[i][0], &tree[i][1], &tree[i][2]);
//    }
//
//    for (int i = 1; i <= N; i++) {
//        dist[i] = MAX;
//    }
//
//    dist[1] = 0;
//
//    for (int i = 0; i < N; i++) {
//        for (int j = 0; j < M; j++) {
//            int from = tree[j][0];
//            int to = tree[j][1];
//            int cost = tree[j][2];
//
//            if (dist[from] != MAX && dist[to] > dist[from] + cost) {
//                dist[to] = dist[from] + cost;
//            }
//        }
//    }
//
//    bool flag = false;
//
//    for (int j = 0; j < M; j++) {
//        int from = tree[j][0];
//        int to = tree[j][1];
//        int cost = tree[j][2];
//
//        if (dist[from] != MAX && dist[to] > dist[from] + cost) {
//            flag = true;
//
//            break;
//        }
//    }
//
//    if (flag) {
//        printf("-1\n");
//    }
//    else {
//        for (int i = 2; i <= N; i++) {
//            if (dist[i] == MAX) {
//                printf("-1\n");
//            }
//            else {
//                printf("%d\n", dist[i]);
//            }
//        }
//    }
//
//    return 0;
//}