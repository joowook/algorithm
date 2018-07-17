//#include <iostream>
//#include <cstring>
//#include <algorithm>
//using namespace std;
//
//int n, m, a[101], b[101];
//int dp[101][101];
//
//const long long MIN = -20000000000;
//
//int go(int indexA, int indexB) {
//    int &ret = dp[indexA + 1][indexB + 1];
//
//    if (ret != -1) return ret;
//
//    ret = 0;
//
//    long long ma = (indexA == -1 ? MIN : a[indexA]);
//    long long mb = (indexB == -1 ? MIN : b[indexB]);
//    long long Max = max(ma, mb);
//
//    for (int i = indexA + 1; i < n; i++) {
//        if (Max < a[i]) {
//            ret = max(ret, go(i, indexB) + 1);
//        }
//    }
//
//    for (int i = indexB + 1; i < m; i++) {
//        if (Max < b[i]) {
//            ret = max(ret, go(indexA, i) + 1);
//        }
//    }
//
//    return ret;
//}
//int main(void) {
//    int C;
//
//    scanf("%d", &C);
//    while (C--) {
//        scanf("%d %d", &n, &m);
//
//        memset(dp, -1, sizeof(dp));
//
//        for (int i = 0; i < n; i++) scanf("%d", &a[i]);
//        for (int i = 0; i < m; i++) scanf("%d", &b[i]);
//        
//        printf("%d\n", go(-1, -1));
//    }
//
//    return 0;
//}