//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main(void) {
//    int N;
//    scanf("%d", &N);
//
//    vector<int> v(N + 1);
//    int k = 0;
//
//    for (int i = 1; i <= N; i++) {
//        scanf("%d", &v[i]);
//    }
//    int num = 0;
//   
//    for (int i = 1; i <= N; i++) {
//        if (num % 3 == v[i]) {
//            num++;
//        }
//    }
//
//    printf("%d", num);
//
//    return 0;
//}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int dp[1001][3];
//int main(void) {
//    int N;
//    scanf("%d", &N);
//
//    vector<int> v(N+1);
//    int k = 0;
//
//    for (int i = 1; i <= N; i++) {
//        scanf("%d", &v[i]);
//    }
//
//    for (int i = 1; i <= N; i++) {
//        if (v[i] == 0) {
//            dp[i][0] = 1;
//            k = i;
//            break;
//        }
//    }
//    //dp[0]=딸기우유
//    //dp[1]=초코우유
//    //dp[2]=바나나우유
//
//    for (int i = k+1; i <= N; i++) {
//        int milk = v[i];
//
//        if (milk == 0 && dp[i-1][1] <= dp[i-1][2]) {
//            dp[i][0] = dp[i - 1][2] + 1;
//        }
//        else {
//            dp[i][0] = dp[i - 1][0];
//        }
//
//        if (milk == 1 && dp[i-1][2] <= dp[i-1][0]) {
//            dp[i][1] = dp[i - 1][0] + 1;
//        }
//        else {
//            dp[i][1] = dp[i-1][1];
//        }
//
//        if (milk == 2 && dp[i-1][0] <= dp[i][1]) {
//            dp[i][2] = dp[i - 1][1] + 1;
//        }
//        else {
//            dp[i][2] = dp[i-1][2];
//        }
//    }
//        
//    int ans = max(max(dp[N][0], dp[N][1]), dp[N][2]);
//
//    printf("%d", ans);
//
//    return 0;
//}