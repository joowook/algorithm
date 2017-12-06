//#include <iostream>
//#include <vector>
//using namespace std;
//vector<int> a;
//vector<int> b;
//
//long long solve(int left, int right) {
//    if (left == right)
//        return 0;
//
//    int mid = left + (right - left) / 2;
//
//    long long ans = solve(left, mid) + solve(mid + 1, right);
//
//    int i = left;
//    int j = mid + 1;
//    int k = 0;
//
//    while (i <= mid && j <= right) {
//        if (a[i] > a[j]) {
//            ans += mid - i + 1;
//            b[k++] = a[j++];
//        }
//        else {
//            b[k++] = a[i++];
//        }
//    }
//    while (i > mid && j <= right) {
//        b[k++] = a[j++];
//    }
//    while (j > right && i <= mid) {
//        b[k++] = a[i++];
//    }
//    for (int i = left; i <= right; i++) {
//        a[i] = b[i - left];
//    }
//
//   /* while (i <= mid || j <= right) {
//        if (i <= mid && (j > right || a[i] <= a[j])) {
//            b[k++] = a[i++];
//        }
//        else {
//            ans += mid - i + 1;
//            b[k++] = a[j++];
//        }
//    }
//    for (int i = left; i <= right; i++) {
//        a[i] = b[i - left];
//    }*/
//
//    return ans;
//}
//int main(void) {
//    int n;
//
//    scanf("%d", &n);
//
//    a.resize(n);
//    b.resize(n);
//
//    for (int i = 0; i < n; i++) {
//        scanf("%d", &a[i]);
//    }
//
//    long long ans = solve(0, n - 1);
//
//    printf("%lld", ans);
//
//    return 0;
//}