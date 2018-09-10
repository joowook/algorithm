//#include <iostream>
//#include <cmath>
//using namespace std;
//#define MAX (1<<15)
//
//int dp[MAX + 1];
//
//int min(int a, int b) { return a > b ? b : a; }
//
//int main(void) {
//    while (true) {
//        int n;
//
//        scanf("%d", &n);
//
//        if (n == 0) break;
//        int i = n;
//
//        for (int j = min((int)sqrt(i), i); j >= 0; j--) {
//            for (int k = min((int)sqrt(i - j*j), j); k >= 0; k--) {
//                for (int l = min((int)sqrt(i - j*j - k*k), k); l >= 0; l--) {
//                    for (int m = min((int)sqrt(i - j*j - k*k - l*l), l); m >= 0; m--) {
//                        if (j*j + k*k + l*l + m*m == i) {
//                            dp[i]++;
//                        }
//                    }
//                }
//            }
//        }
//        printf("%d\n", dp[n]);
//    }
//
//    return 0;
//}