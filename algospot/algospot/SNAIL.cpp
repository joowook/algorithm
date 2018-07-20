//#include <iostream>
//using namespace std;
//#define MAX 1000
//
//double dp[MAX + 1][2 * MAX + 1];
//int N, M;
//
//double go(int n, int dist) {
//    double &ret = dp[n][dist];
//    if (ret != -1) return ret;
//
//    if (n == M) {
//        return ret = dist >= N ? 1 : 0;
//    }
//    
//    return ret = 0.25 * go(n + 1, dist + 1) + 0.75 * go(n + 1, dist + 2);
//}
//int main(void) {
//    int C;
//
//    scanf("%d", &C);
//
//    while (C--) {
//        scanf("%d %d", &N, &M);
//        
//        for (int i = 0; i <= M; i++) {
//            for (int j = 0; j <= 2 * M + 1; j++) {
//                dp[i][j] = -1;
//            }
//        }
//
//        printf("%0.10lf\n", go(0, 0));
//    }
//
//    return 0;
//}