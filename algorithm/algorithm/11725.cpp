//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//
//vector <int> a[100001];
//
//int check[100001];
//int parent[100001];
//
//void dfs(int n) {
//    check[n] = true;
//    for (int i = 0; i < a[n].size(); i++) {
//        int next = a[n][i];
//        if (!check[next]) {
//            check[next] = true;
//            parent[next] = n;
//            dfs(next);
//        }
//    }
//}
////void bfs(int n) {
////    queue <int> q;
////    
////    check[n] = true;
////    q.push(1);
////
////    while (!q.empty()) {
////        int n = q.front();
////        q.pop();
////
////        for (int i = 0; i < a[n].size(); i++) {
////            int next = a[n][i];
////            if (!check[next]) {
////                q.push(a[n][i]);
////                check[next] = true;
////                parent[next] = n;
////            }
////        }
////    }
////}
//int main(void) {
//    int n;
//    
//    cin >> n;
//
//    for (int i = 0; i < n-1; i++) {
//        int t1, t2;
//        cin >> t1 >> t2;
//
//        a[t1].push_back(t2);
//        a[t2].push_back(t1);
//    }
//
//    dfs(1);
//    //bfs(1);
//
//    for (int i = 2; i <= n; i++) {
//        printf("%d\n", parent[i]);
//    }
//
//    getchar();
//    getchar();
//
//    return 0;
//}