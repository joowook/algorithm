//#include <iostream>
//using namespace std;
//
//int n, m;
//long long a[1000000];
//
//bool check(long long x) {
//    long long cnt = 0;
//
//    for (int i = 0; i < n; i++) {
//        if (a[i] - x > 0)
//            cnt += a[i] - x;
//    }
//
//    return cnt >= m;
//}
//
//int main(void) {
//    scanf("%d %d", &n, &m);
//
//    long long Max = 0;
//
//    for (int i = 0; i < n; i++) {
//        scanf("%lld", &a[i]);
//        if (Max < a[i]) {
//            Max = a[i];
//        }
//    }
//    long long left = 0;
//    long long right = Max;
//    long long ans = 0;
//
//    while (left <= right) {
//        long long mid = left + (right - left) / 2;
//
//        if (check(mid)) {
//            if (ans <= mid) // if¹® ¾ø¾îµµ µÊ
//                ans = mid;
//            left = mid + 1;
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