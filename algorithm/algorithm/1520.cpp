//#include <iostream>
//#include <queue>
//using namespace std;
//
//int a[501][501];
//int dp[501][501];
//int dx[4] = { -1,1,0,0 };
//int dy[4] = { 0,0,1,-1 };
//int X, Y;
//
//int main(void) {
//    scanf("%d %d", &Y, &X);
//
//    for (int i = 1; i <= Y; i++) {
//        for (int j = 1; j <= X; j++) {
//            scanf("%d", &a[i][j]);
//        }
//    }
//    
//    dp[1][1] = 1;
//    for (int i = 1; i <= Y; i++) {
//        for (int j = 1; j <= X; j++) {
//            for (int k = 0; k < 4; k++) {
//                int nx = j + dx[k];
//                int ny = i + dy[k];
//                if (nx > 0 && nx <= X && ny > 0 && ny <= Y) {
//                    if (a[i][j] > a[ny][nx]) {
//                        if (dp[ny][nx] == 0)
//                            dp[ny][nx] = 1;
//                    }
//                }
//            }
//            for (int k = 0; k < 4; k++) {
//                int nx = j + dx[k];
//                int ny = i + dy[k];
//                if (k == 0) {
//                    if(!(i==1 && j==1))
//                    dp[i][j] = 0;
//                }
//                if (nx > 0 && nx <= X && ny > 0 && ny <= Y) {
//                    if (a[i][j] < a[ny][nx]) {
//                        dp[i][j] += dp[ny][nx];
//                    }
//                }
//            }
//        }
//    }
//
//    printf("\n%d", dp[Y][X]);
//
//    getchar();
//    getchar();
//    return 0;
//}