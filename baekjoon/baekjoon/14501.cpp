//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <cstring>
//using namespace std;
//
//#define MIN -2000000000
//vector<pair<int, int>> a;
//int N;
//int dp[16];
//
//int go(int n) {
//    if (n > N) {
//        return MIN;
//    }
//
//    if (n == N) {
//        return 0;
//    }
//    int &ret = dp[n];
//
//    if (ret != -1) return ret;
//
//    ret = max(go(n + 1), go(n + a[n].first) + a[n].second);
//
//    return ret;
//}
//
//int main(void) {
//    scanf("%d", &N);
//
//    a.resize(N);
//    memset(dp, -1, sizeof(dp));
//
//    for (int i = 0; i < N; i++) {
//        scanf("%d %d", &a[i].first, &a[i].second);
//    }
//
//    printf("%d\n", go(0));
//
//    return 0;
//}