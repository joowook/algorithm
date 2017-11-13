//#include <iostream>
//using namespace std;
//
//int a[1001];
//int dp[1001];
//int main(void) {
//    int n;
//    scanf("%d", &n);
//
//    for (int i = 0; i < n; i++) {
//        scanf("%d", &a[i]);
//    }
//
//    if (n == 1) {
//        printf("0");
//        return 0;
//    }
//
//    for (int i = 0; i < n; i++) {
//        if (dp[i] == 0 && i != 0)
//            continue;
//        for (int j = 1; j <= a[i]; j++) {
//            if (i + j < n) {
//                if (dp[i + j] > dp[i] + 1 || dp[i + j] == 0) {
//                    dp[i + j] = dp[i] + 1;
//                }
//            }
//
//        }
//    }
//
//    if (dp[n - 1] == 0)
//        printf("-1");
//    else
//        printf("%d", dp[n-1]);
//
//    return 0;
//}