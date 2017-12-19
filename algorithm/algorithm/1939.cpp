//#include <iostream>
//#include <vector>
//#include <cstring>
//using namespace std;
//int st, ed;
//vector<pair<int, int>> a[10001];
//bool check[10001];
//
//bool go(int x, int limit) {
//    if (check[x])
//        return false;
//    if (x == ed) {
//        return true;
//    }
//    check[x] = true; 
//
//    for (int i = 0; i < a[x].size(); i++) {
//        int next = a[x][i].first;
//        int cost = a[x][i].second;
//
//        if (cost >= limit) {
//            if (go(next, limit)) {
//                return true;
//            }
//        }
//    }
//
//    return false;
//}
//
//int main(void) {
//    int n, m;
//    int Max = 0;
//
//    scanf("%d %d", &n, &m);
//
//    for (int i = 0; i < m; i++) {
//        int x, y, z;
//        scanf("%d %d %d", &x, &y, &z);
//
//        a[x].push_back(make_pair(y, z));
//        a[y].push_back(make_pair(x, z));
//        Max = Max > z ? Max : z;
//    }
//
//    scanf("%d %d", &st, &ed);
//
//    int left = 1;
//    int right = Max;
//    int ans = 0;
//    while (left <= right) {
//        memset(check, false, sizeof(check));
//        int mid = left + (right - left) / 2;
//
//        if (go(st, mid)) {
//            ans = mid;
//            left = mid + 1;
//        }
//        else {
//            right = mid - 1;
//        }
//    }
//
//    printf("%d\n", ans);
//
//    return 0;
//}