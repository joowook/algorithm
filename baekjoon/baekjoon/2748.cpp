//#include <iostream>
//#include <cstring>
//using namespace std;
//
//long long dp[91];
//long long fibo(int n) {
//    if (n == 1 || n == 2) {
//        return 1;
//    }
//
//    long long &ret = dp[n];
//
//    if (ret != -1) {
//        return ret;
//    }
//    else {
//        return ret = fibo(n - 1) + fibo(n - 2);
//        // return dp[n] = fibo(n-1) + fibo(n-2);
//    }
//}
//
//int main(void) {
//    int n;
//
//    scanf("%d", &n);
//
//    memset(dp, -1, sizeof(dp));
//
//    printf("%lld\n", fibo(n));
//
//    return 0;
//}