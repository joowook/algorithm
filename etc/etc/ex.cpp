//#include <iostream>
//using namespace std;
//int K, N;
//int a[10001];
//
//bool check(long long mid) {
//    long long sum = 0;
//    for (int i = 0; i < K; i++) {
//        sum += a[i] / mid;
//    }
//
//    return sum >= N;
//}
//
//int main(void) {
//    scanf("%d %d", &K, &N);
//    int Max = 0;
//    for (int i = 0; i < K; i++) {
//        scanf("%d", &a[i]);
//        Max = Max >= a[i] ? Max : a[i];
//    }
//
//    long long left = 1;
//    long long right = Max;
//    long long ans = 0;
//
//    while (left <= right) {
//        long long mid = (left + right) / 2;
//
//        if (check(mid)) {
//            left = mid + 1;
//            ans = mid;
//        }
//        else {
//            right = mid - 1;
//        }
//    }
//
//    printf("%lld\n", ans);
//
//    return 0;
//}