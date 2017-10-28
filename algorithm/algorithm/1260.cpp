//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <queue>
//#include <cstring>
//#include <stack>
//using namespace std;
//
//vector <int> a[1001];
//bool check[1001];
//
////void dfs(int v) {
////    stack <pair< int, int>> s;
////    
////    s.push(make_pair(v,0));
////    check[v] = true;
////    printf("%d ", v);
////
////    while (!s.empty()) {
////        int v = s.top().first;
////        int start = s.top().second;
////        s.pop();
////
////        for (int i = start; i < a[v].size(); i++) {
////            int next = a[v][i];
////            if (!check[next]) {
////                printf("%d ", next);
////                check[next] = true;
////                s.push(make_pair(v, i + 1));
////                s.push(make_pair(next,0));
////                break;
////            }
////        }
////    }
////}
////
//
//void dfs(int v) {
//    if (!check[v]) {
//        check[v] = true;
//
//        printf("%d ", v);
//        for (int i = 0; i < a[v].size(); i++) {
//            dfs(a[v][i]);
//        }
//    }
//}
//
//void bfs(int v) {
//    queue <int> q;
//
//    q.push(v);
//    check[v] = true;
//    
//    while (!q.empty()) {
//        int node = q.front();
//        q.pop();
//        printf("%d ", node);
//        for (int i = 0; i < a[node].size(); i++) {
//            int next = a[node][i];
//            if (!check[next]) {
//                q.push(next);
//                check[next] = true;
//            }
//        }
//    }
//}
//int main(void) {
//    int N, M, V;
//
//    cin >> N >> M >> V;
//    
//    for (int i = 0; i < M; i++) {
//        int t1, t2;
//        scanf("%d %d", &t1, &t2);
//        a[t1].push_back(t2);
//        a[t2].push_back(t1);
//    }
//
//    for (int i = 1; i <= N; i++) {
//        sort(a[i].begin(), a[i].end());
//    }
//    dfs(V);
//    printf("\n");
//    memset(check, 0, sizeof(check));
//    bfs(V);
//
//
//    return 0;
//}
