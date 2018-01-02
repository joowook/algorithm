//#include <iostream>
//#include <queue>
//using namespace std;
//#define MAX 200000
//bool check[MAX + 1];
//int dist[MAX + 1];
//
//int main(void) {
//    int N, K;
//
//    scanf("%d %d", &N, &K);
//
//    queue <int> q;
//
//    q.push(N);
//    check[N] = true;
//    
//    while (!q.empty()) {
//        int n = q.front();
//        q.pop();
//
//        int nx = n - 1;
//        if (nx >= 0) {
//            if (!check[nx]) {
//                q.push(nx);
//                check[nx] = true;
//                dist[nx] = dist[n] + 1;
//            }
//        }
//        nx = n + 1;
//        if (nx <= MAX) {
//            if (!check[nx]) {
//                q.push(nx);
//                check[nx] = true;
//                dist[nx] = dist[n] + 1;
//            }
//        }
//        nx = 2 * n;
//        if (nx <= MAX) {
//            if (!check[nx]) {
//                q.push(nx);
//                check[nx] = true;
//                dist[nx] = dist[n] + 1;
//            }
//        }
//    }
//
//    printf("%d\n", dist[K]);
//
//    return 0;
//}