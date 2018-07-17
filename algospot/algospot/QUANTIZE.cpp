//#include <iostream>
//#include <cstring>
//#include <algorithm>
//using namespace std;
//
//#define MAX 2000000000
//
//int a[101];
//int dp[101][11];
//int N, S;
//
//int sum[101], Dsum[101];
//
//void init() {
//    memset(dp, -1, sizeof(dp));
//
//    sort(a, a + N);
//    sum[0] = a[0];
//    Dsum[0] = a[0] * a[0];
//
//    for (int i = 1; i < N; i++) {
//        sum[i] = sum[i - 1] + a[i];
//        Dsum[i] = Dsum[i - 1] + a[i] * a[i];
//    }
//}
//
//int cal(int left, int right) {
//    int s = sum[right] - (left == 0 ? 0 : sum[left - 1]);
//    int ds = Dsum[right] - (left == 0 ? 0 : Dsum[left - 1]);
//    int x = (int)(0.5 + (double)s / (right - left + 1));
//
//    return ds - 2 * s * x + x * x * (right - left + 1);
//}
//int go(int index, int nam) {
//    if (index == N) return 0;
//
//    if (nam == 0) return MAX;
//    
//    int &ret = dp[index][nam];
//
//    if (ret != -1) return ret;
//
//    ret = MAX;
//
//    for (int i = 1; i + index <= N; i++) {
//        ret = min(ret, go(index + i, nam - 1) + cal(index, index + i - 1));
//    }
//
//    return ret;
//}
//int main(void) {
//    int C;
//
//    scanf("%d", &C);
//
//    while (C--) {
//        scanf("%d %d", &N, &S);
//
//        for (int i = 0; i < N; i++) {
//            scanf("%d", &a[i]);
//        }
//
//        init();
//
//        printf("%d\n", go(0, S));
//    }
//
//    return 0;
//}