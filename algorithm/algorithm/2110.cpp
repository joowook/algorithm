//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int a[200000];
//int n, c;
//
//bool check(int x) {
//    int cnt = 1;
//    int tmp = a[0];
//    for (int i = 1; i < n; i++) {
//        if (a[i] - tmp >= x) {
//            cnt++;
//            tmp = a[i];
//        }
//    }
//
//    return cnt >= c;
//}
//int main(void) {
//    scanf("%d %d", &n, &c);
//
//    for (int i = 0; i < n; i++) {
//        scanf("%d", &a[i]);
//    }
//
//    sort(a, a + n);
//    int left = 1;
//    int right = a[n - 1] - a[0];
//    int ans = 0;
//
//    while (left <= right) {
//        int mid = left + (right - left) / 2;
//        if (check(mid)) {
//            ans = mid;
//            left = mid + 1;
//        }
//        else {
//            right = mid - 1;
//        }
//    }
//
//    printf("%d", ans);
//
//    return 0;
//}