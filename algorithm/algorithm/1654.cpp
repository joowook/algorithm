//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int n, k;
//
//bool check(vector<int> a, long long mid) {
//    int cnt = 0;
//    for (int i = 0; i < k; i++) {
//        cnt += a[i] / mid;
//    }
//    return cnt >= n;
//}
//
//int main(void) {
//    scanf("%d %d", &k, &n);
//
//    vector<int> a(k);
//    long long Max = 0;
//    for (int i = 0; i < k; i++) {
//        scanf("%d", &a[i]); 
//        if (Max < a[i]) {
//            Max = a[i];
//        }
//    }
//
//    long long left = 1;
//    long long right = Max;
//    long long ans = 0;
//    while (left <= right) {
//        long long mid = left + (right - left) / 2;
//
//        if (check(a, mid)) {
//            if (ans < mid) { //  if문 없애도 되더라
//                ans = mid;
//            }
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