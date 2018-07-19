//#include <iostream>
//#include <vector>
//#include <queue>
//#include <cstring>
//using namespace std;
//
//bool check[1001];
//int N, M, K;
//
//int bfs(vector<int> a[1001]) {
//    queue<pair<int,int>> q;
//    q.push(make_pair(1, 0));
//
//    while (!q.empty()) {
//        int x = q.front().first;
//        int k = q.front().second;
//
//        q.pop();
//
//        for (int i = 0; i < a[x].size(); i++) {
//            int nx = a[x][i];
//            if(!check[nx]) {
//                check[nx] = true;
//                if (k + 1 <= K) {
//                    if (nx == N) {
//                        
//                        return k+1;
//                    }
//                    q.push(make_pair(nx, k + 1));
//                }
//                else {
//                    return -1;
//                }
//            }
//        }
//    }
//
//    return -1;
//}
//
//int main(void) {
//    int T;
//
//    scanf("%d", &T);
//
//    for (int test_case = 1; test_case <= T; test_case++) {
//        memset(check, false, sizeof(check));
//        vector<int> a[1001];
//
//        scanf("%d %d %d", &N, &M, &K);
//
//        for (int i = 0; i < M; i++) {
//            int A, B;
//            scanf("%d %d", &A, &B);
//            a[A].push_back(B);
//        }
//
//        printf("#%d %d\n", test_case, bfs(a));
//    }
//
//    return 0;
//}