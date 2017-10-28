//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//
//int check[500000];
//
//vector <int> a[1001];
//
//void dfs(int n, int &cnt) {
//    check[n] = cnt;
//
//    for (int i = 0; i < a[n].size(); i++) {
//        int next = a[n][i];
//        if (!check[next]) {
//            check[next] = cnt;
//            dfs(next, cnt);
//        }
//    }
//}
//
//void bfs(int n, int &cnt) {
//    queue <int> q;
//    check[n] = cnt;
//    q.push(n);
//    while (!q.empty()) {
//        int v = q.front();
//        q.pop();
//
//        for (int i = 0; i < a[v].size(); i++) {
//            int next = a[v][i];
//            if (!check[next]) {
//                q.push(next);
//                check[next] = cnt;
//            }
//        }
//    }
//}
//int main(void) {
//    int n, m, cnt=0;
//    scanf("%d %d", &n, &m);
//
//    for (int i = 0; i < m; i++) {
//        int u, v;
//        scanf("%d %d", &u, &v);
//        a[u].push_back(v);
//        a[v].push_back(u);
//    }
//
//    for (int i = 1; i <= n; i++) {
//        if (!check[i]) {
//            dfs(i, ++cnt);
//            //bfs(i, ++cnt);
//        }
//    }
//    
//    printf("%d", cnt);
//
//    return 0;
//}