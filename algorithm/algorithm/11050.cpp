//#include <iostream>
//using namespace std;
//
//int dfs(int n) {
//    if (n == 0)
//        return 1;
//    if (n == 1)
//        return 1;
//    return n*dfs(n - 1);
//}
//int main(void) {
//    int n, k;
//
//    scanf("%d %d", &n, &k);
//
//    int ans = dfs(n) / (dfs(n - k)*dfs(k));
//
//    printf("%d", ans);
//
//    getchar();
//    getchar();
//
//    return 0;
//}