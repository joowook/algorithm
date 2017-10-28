//#include <iostream>
//#include <vector>
//#include <cstring>
//#include <queue>
//using namespace std;
//
//vector <int> a[1001];
//int check[1001];
//
//void dfs(int n, int cnt) {
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
//void bfs(int n, int cnt) {
//    check[n] = cnt;
//    queue <int> q;
//    q.push(n);
//
//    while (!q.empty()) {
//        int v = q.front();
//        q.pop();
//        for (int i = 0; i < a[v].size(); i++) {
//            int next = a[v][i];
//            if (!check[next]) {
//                check[next] = cnt;
//                q.push(next);
//            }
//        }
//    }
//}
//int main(void) {
//    int T;
//    scanf("%d", &T);
//    while (T--) {
//        int v;
//        scanf("%d", &v);
//        for (int i = 1; i <= v; i++) {
//            int u;
//            scanf("%d", &u);
//            a[i].push_back(u);
//        }
//        int cnt = 0;
//        for (int i = 1; i <= v; i++) {
//            if (!check[i]) {
//                dfs(i, ++cnt);
//                //bfs(i, ++cnt);
//            }
//        }
//        printf("%d\n", cnt);
//        
//        for (int i = 1; i <= v; i++) {
//            a[i].erase(a[i].begin(), a[i].end());
//        }
//        memset(check, false, sizeof(check));
//    }
//
//    return 0;
//}