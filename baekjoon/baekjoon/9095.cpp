//#include <iostream>
//#include <cstring>
//using namespace std;
//int dp[11];
//
//int go(int n) {
//    if (n <= 2) return n;
//    if (n == 3) return 4;
//
//    int &ret = dp[n];
//
//    if (ret != -1) return ret;
//
//    return ret = go(n - 1) + go(n - 2) + go(n - 3);
//}
//
//int main(void) {
//    int T;
//    
//    scanf("%d", &T);
//
//    while (T--) {
//        int n;
//
//        scanf("%d", &n);
//
//        memset(dp, -1, sizeof(dp));
//        printf("%d\n", go(n));
//    }
//
//    return 0;
//}