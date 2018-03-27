//#include <iostream>
//#include <queue>
//using namespace std;
//bool check[200001];
//
//int bfs(int n, int k) {
//	queue<pair<int, int>> q;
//	q.push(make_pair(n, 0));
//
//	while (!q.empty()) {
//		int x = q.front().first;
//		int cnt = q.front().second;
//		q.pop();
//
//		if (x == k) {
//			return cnt;
//		}
//		if (x - 1 >= 0 && !check[x - 1]) {
//			q.push(make_pair(x - 1, cnt + 1));
//			check[x - 1] = true;
//		}
//
//		if (x + 1 <= 100000 && !check[x + 1]) {
//			q.push(make_pair(x + 1, cnt + 1));
//			check[x + 1] = true;
//		}
//		if (2 * x <= 200000 && !check[2 * x]) {
//			q.push(make_pair(2 * x, cnt + 1));
//			check[2 * x] = true;
//		}
//
//	}
//
//	return 0;
//}
//
//int main(void) {
//	int n, k;
//
//	scanf("%d %d", &n, &k);
//
//	int ans = bfs(n, k);
//
//	printf("%d\n", ans);
//
//	return 0;
//}
//
////#include <iostream>
////#include <queue>
////using namespace std;
////#define MAX 200000
////bool check[MAX + 1];
////int dist[MAX + 1];
////
////int main(void) {
////    int N, K;
////
////    scanf("%d %d", &N, &K);
////
////    queue <int> q;
////
////    q.push(N);
////    check[N] = true;
////    
////    while (!q.empty()) {
////        int n = q.front();
////        q.pop();
////
////        int nx = n - 1;
////        if (nx >= 0) {
////            if (!check[nx]) {
////                q.push(nx);
////                check[nx] = true;
////                dist[nx] = dist[n] + 1;
////            }
////        }
////        nx = n + 1;
////        if (nx <= MAX) {
////            if (!check[nx]) {
////                q.push(nx);
////                check[nx] = true;
////                dist[nx] = dist[n] + 1;
////            }
////        }
////        nx = 2 * n;
////        if (nx <= MAX) {
////            if (!check[nx]) {
////                q.push(nx);
////                check[nx] = true;
////                dist[nx] = dist[n] + 1;
////            }
////        }
////    }
////
////    printf("%d\n", dist[K]);
////
////    return 0;
////}