//#include <iostream>
//#include <vector>
//using namespace std;
//int n, m;
//vector<long long> a;
//
//bool check(long long x) {
//    long long cnt = 0;
//    for (int i = 0; i < m; i++) {
//        if (x%a[i] == 0) {
//            cnt += x / a[i];
//        }
//        else {
//            cnt += x / a[i] + 1;
//        }
//    }
//
//    return cnt >= n;
//}
//int main(void) {
//    scanf("%d %d", &n, &m);
//    a.resize(m);
//
//    for (int i = 0; i < m; i++) {
//        scanf("%lld", &a[i]);
//    }
//
//    long long left = 1;
//    long long right = 60000000000;
//    long long x = 0;
//    while (left <= right) {
//        long long mid = (left + right) / 2;
//
//        if (check(mid)) {
//            right = mid - 1;
//            x = mid;
//        }
//        else {
//            left = mid + 1;
//        }
//    }
//
//    x--;
//    vector<long long> x1(m);
//    vector<long long> x2(m);
//
//    long long cnt = 0;
//    for (int i = 0; i < m; i++) {
//        if (x%a[i] == 0) {
//            x1[i] = x / a[i];
//        }
//        else {
//            x1[i] = x / a[i] + 1;
//        }
//        cnt += x1[i];
//    }
//    long long tmp = n - cnt;
//    x++;
//    cnt = 0;
//    for (int i = 0; i < m; i++) {
//        if (x%a[i] == 0) {
//            x2[i] = x / a[i];
//        }
//        else {
//            x2[i] = x / a[i] + 1;
//        }
//        cnt += x2[i];
//    }
//    int ans = 0;
//    for (int i = 0; i < m; i++) {
//        if (x1[i] < x2[i]) {
//            tmp--;
//        }
//
//        if (tmp == 0) {
//            ans = i + 1;
//            break;
//        }
//    }
//
//    printf("%d\n", ans);
//
//    return 0;
//}