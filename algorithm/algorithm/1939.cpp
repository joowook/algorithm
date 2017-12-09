//#include <iostream>
//#include <vector>
//#include <cstring>
//using namespace std;
//vector<pair<int, int>> a[10001];
//
//int start, ed, n, m;
//bool check[10001];
//bool go(int node, int limit) {
//    if (check[node]) {
//        return false;
//    }
//    check[node] = true;
//    if (node == ed) {
//        return true;
//    }
//
//    for (int i = 0; i < a[node].size(); i++) {
//        int next = a[node][i].first;
//        int cost = a[node][i].second;
//
//        if (cost >= limit) {
//            if (go(next, limit))
//                return true;
//        }
//    }
//
//    return false;
//}
//int main(void) {
//    scanf("%d %d", &n, &m);
//    int Max = 0;
//    for (int i = 0; i < m; i++) {
//        int x, y, z;
//        scanf("%d %d %d", &x, &y, &z);
//        a[x].push_back(make_pair(y, z));
//        a[y].push_back(make_pair(x, z));
//        Max = Max >= z ? Max : z;
//    }
//    scanf("%d %d", &start, &ed);
//
//    int left = 1;
//    int right = Max;
//    int ans = 0;
//    while (left <= right) {
//        memset(check, 0, sizeof(check));
//        int mid = left + (right - left) / 2;
//        if (go(start, mid)) {
//            ans = mid;
//            left = mid + 1;
//        }
//        else {
//            right = mid - 1;
//        }
//    }
//
//    printf("%d", ans);
//    return 0;
//}