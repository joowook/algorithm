//#include <iostream>
//#include <cstring>
//using namespace std;
//
//int coin[21];
//int dp[10001];
//
//int main(void) {
//    int T;
//
//    scanf("%d", &T);
//
//    while (T--) {
//        memset(dp, 0, sizeof(dp));
//       int N;
//        scanf("%d", &N);
//        
//        for (int i = 0; i < N; i++) {
//            scanf("%d", &coin[i]);
//        }
//        int M;
//        scanf("%d", &M);
//        dp[0] = 1;
//        for (int i = 0; i < N; i++) { //for문 두개 바뀌면 순서 상관 o 순열. 지금은 조합
//            for (int j = coin[i]; j <= M; j++) {
//                    dp[j] += dp[j - coin[i]];
//            }
//        }
//        printf("%d\n", dp[M]);
//    }
//
//    return 0;
//}