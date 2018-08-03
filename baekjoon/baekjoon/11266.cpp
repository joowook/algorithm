//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <cstring>
//using namespace std;
//#define MAX 1000000000
//vector<int> a[10001];
//int visit[10001];
//int ans[10001];
//int cnt = 0;
//
//vector<int> Answer;
//
//int go(int x, int parent) {
//    visit[x] = ++cnt;
//    int ret = visit[x];
//    int child = 0;
//
//    for (int i = 0; i < a[x].size(); i++) {
//        int nx = a[x][i];
//
//        if (visit[nx] == MAX) {
//            int low = go(nx, x);
//            child++;
//            if (parent != -1 && low >= visit[x]) {
//                ans[x] = 1;
//            }
//
//            ret = min(ret, low);
//        }
//        else {
//            ret = min(ret, visit[nx]);
//        }
//    }
//
//    if (parent == -1 && child > 1) {
//        ans[x] = 1;
//    }
//
//    return ret;
//}
//
//int main(void) {
//    int V, E;
//
//    scanf("%d %d", &V, &E);
//
//    for (int i = 1; i <= V; i++) {
//        visit[i] = MAX;
//    }
//
//    for (int i = 0; i < E; i++) {
//        int A, B;
//
//        scanf("%d %d", &A, &B);
//
//        a[A].push_back(B);
//        a[B].push_back(A);
//    }
//
//    for (int i = 1; i <= V; i++) {
//        if (visit[i] == MAX) {
//            go(i, -1);
//        }
//    }
//
//    for (int i = 1; i <= V; i++) {
//        if (ans[i] == 1) {
//            Answer.push_back(i);
//        }
//    }
//
//    int n = Answer.size();
//
//    printf("%d\n", n);
//
//    for (int i = 0; i < n; i++) {
//        printf("%d ", Answer[i]);
//    }
//
//    printf("\n");
//
//    return 0;
//}