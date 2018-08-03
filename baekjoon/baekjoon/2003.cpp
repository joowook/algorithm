//#include <iostream>
//using namespace std;
//
//int a[10001];
//int main(void) {
//    int N, M;
//
//    scanf("%d %d", &N, &M);
//    for (int i = 0; i < N; i++) {
//        scanf("%d", &a[i]);
//    }
//
//    int s = 0, e = 0;
//    int ans = 0;
//    int sum = 0;
//
//    while (true) {
//        while (sum < M && e < N) {
//            sum += a[e++];
//        }
//
//        if (sum < M) break;
//
//        while (sum > M && s < e) {
//            sum -= a[s++];
//        }
//
//        if (sum == M) {
//            ans++;
//            sum -= a[s++];
//        }
//    }
//
//    printf("%d\n", ans);
//
//    return 0;
//}