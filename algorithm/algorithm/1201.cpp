//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//int main(void) {
//    int n, m, k;
//
//    scanf("%d %d %d", &n, &m, &k);
//    vector<int> v(n);
//
//    if (m + k - 1 <= n && m*k >= n) {
//        int moc = 0, temp = 0, cnt = 0;
//
//        for (int i = 0; i < n; i++) {
//            v[i] = i + 1;
//        }
//
//        reverse(v.begin(), v.begin() + k);
//        temp = k;
//        moc = (n - k) / m;
//        cnt++;
//
//        while (cnt != m) {
//            cnt++;
//
//            if (cnt == m) {
//                reverse(v.begin() + temp, v.end());
//                break;
//            }
//            else if (m*k == n) {
//                reverse(v.begin() + temp, v.begin() + temp + k);
//                temp += k;
//            }
//            else {
//                reverse(v.begin() + temp, v.begin() + temp + moc + 1);
//                temp += moc + 1;
//            }
//
//            if (n - temp + cnt == m) {
//                break;
//            }
//
//        }
//
//        for (int i = 0; i < n; i++) {
//            printf("%d ", v[i]);
//        }
//    }
//    else {
//        printf("-1");
//    }
//
//    return 0;
//}