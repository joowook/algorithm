//#include <iostream>
//#include <vector>
//#include <queue>
//#include <cstring>
//using namespace std;
//
//int check[100001];
//vector <pair<int, int>> a[100001];
//int dis[100001];
//void bfs(int n) {
//    memset(dis, false, sizeof(dis));
//    memset(check, false, sizeof(check));
//    queue <int> q;
//    
//    check[n] = true;
//    q.push(n);
//
//    while (!q.empty()) {
//        int n = q.front();
//        q.pop();
//
//        for (int i = 0; i < a[n].size(); i++) {
//            int next = a[n][i].first;
//            if (!check[next]) {
//                q.push(a[n][i].first);
//                check[next] = true;
//                dis[next] += (dis[n] +a[n][i].second);
//            }
//        }
//    }
//}
//int main(void) {
//    int n;
//    scanf("%d", &n);
//
//    for (int i = 0; i < n; i++) {
//        int t1,t2,t3;
//        scanf("%d %d %d", &t1, &t2, &t3);
//        a[t1].push_back(make_pair(t2, t3));
//        a[t2].push_back(make_pair(t1, t3));
//
//        for (int j = 0; j < n; j++) {
//            scanf("%d", &t2); 
//            if (t2 == -1)
//                break;
//            scanf("%d", &t3);
//            a[t1].push_back(make_pair(t2, t3));
//        }
//    }
//
//    bfs(1);
//    int max = 0;
//    int max_i = 0;
//    for (int i = 1; i <= n; i++) {
//        if(max<dis[i]) {
//            max = dis[i];
//            max_i = i;
//        }
//    }
//
//    bfs(max_i);
//
//    max = 0;
//
//    for (int i = 1; i <= n; i++) {
//        if (max<dis[i]) {
//            max = dis[i];
//        }
//    }
//
//    printf("%d", max);
//    
//    return 0;
//}