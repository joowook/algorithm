//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int a[501][501];
//int dp[501][501];
//int dx[4] = { 1,-1,0,0 };
//int dy[4] = { 0,0,1,-1 };
//int n;
//
//int dfs(int x, int y) {
//    if (dp[x][y] > 0)
//        return dp[x][y];
//    else 
//        dp[x][y] = 1;
//    for (int i = 0; i < 4; i++) {
//        int nx = x + dx[i];
//        int ny = y + dy[i];
//
//        if (nx >= 1 && nx <= n && ny >= 1 && ny <= n) {
//            if(a[nx][ny]>a[x][y])
//                dp[x][y] = max(dp[x][y], dfs(nx, ny)+1);
//        }
//    }
//
//    return dp[x][y];
//}
//int main(void) {
//    scanf("%d", &n);
//
//    for (int i = 1; i <= n; i++) {
//        for (int j = 1; j <= n; j++) {
//            scanf("%d", &a[i][j]);
//        }
//    }
//    int ans = 0;
//
//    for (int i = 1; i <= n; i++) {
//        for (int j = 1; j <= n; j++) {
//            ans = max(ans, dfs(i, j));
//        }
//    }
//
//    printf("%d", ans);
//
//    return 0;
//}