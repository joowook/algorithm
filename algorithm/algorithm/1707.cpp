//#include <iostream>
//#include <vector>
//#include <queue>
//#include <cstring>
//using namespace std;
//
//vector <int> a[20001];
//int check[20001];
//
//void dfs(int n, int cnt) {
//    check[n] = cnt;
//
//    for (int i = 0; i < a[n].size(); i++) {
//        int next = a[n][i];
//        if (!check[next]) {
//            check[next] = 3 - cnt;
//            dfs(next, 3 - cnt);
//        }
//    }
//}
//
//void bfs(int n) {
//    check[n] = 1;
//    queue <pair<int, int>> q;
//    q.push(make_pair(n,1));
//
//    while (!q.empty()) {
//        int v = q.front().first;
//        int cnt = q.front().second;
//        q.pop();
//        for (int i = 0; i < a[v].size(); i++) {
//            int next = a[v][i];
//            if (!check[next]) {
//                check[next] = 3 - cnt;
//                q.push(make_pair(next,3 - cnt));
//            }
//        }
//    }
//}
//
//int main(void) {
//    int k;
//
//    scanf("%d", &k);
//    
//    while (k--) {
//        int v, e;
//        scanf("%d %d", &v, &e);
//        for (int i = 0; i < e; i++) {
//            int v, u;
//            scanf("%d %d", &v, &u);
//            a[v].push_back(u);
//            a[u].push_back(v);
//        }
//        
//        for (int i = 1; i <= v; i++) {
//            if (check[i] == 0) {
//                dfs(i,1);
//                //bfs(i);
//            }
//        }
//
//        bool ok = true;
//
//        for (int i = 1; i <= v; i++) {
//            for (int j = 0; j < a[i].size(); j++) {
//                int k = a[i][j];
//                if (check[i] == check[k]) {
//                    ok = false;
//                }
//            }
//        }
//
//        printf("%s\n", ok ? "yes" : "no");
//
//        memset(check, false, sizeof(check));
//        for (int i = 1; i <= v; i++) {
//            a[i].erase(a[i].begin(), a[i].end());
//        }
//    }
//
//    return 0;
//}