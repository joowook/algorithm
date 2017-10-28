//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//
//int check[101];
//int cnt = 0;
//vector<int> a[101];
//
//void bfs(int n) {
//    check[n] = ++cnt;
//
//    queue<int> q;
//
//    q.push(n);
//
//    while (!q.empty()) {
//        n = q.front();
//        q.pop();
//        for (int i = 0; i < a[n].size(); i++) {
//            int nn = a[n][i];
//            if (!check[nn]) {
//                check[nn] = ++cnt;
//                q.push(nn);
//            }
//        }
//    }
//}
//int main(void) {
//    int u, v, n1, n2;
//
//    scanf("%d %d", &u, &v);
//
//    for (int i = 1; i <= v; i++) {
//        scanf("%d %d", &n1, &n2);
//        a[n1].push_back(n2);
//        a[n2].push_back(n1);
//    }
//    bfs(1);
//
//    printf("%d", cnt - 1);
//
//    return 0;
//}