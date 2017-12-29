//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//vector<int> a;
//vector<int> b;
//int ans = 0;
//void binary(int left, int right, int x) {
//    while (left <= right) {
//        int mid = right + (left - right) / 2;
//        if (a[mid] == x) {
//            int L = 0, R = 0;
//            int temp_left = left;
//            int temp_right = right;
//            while (left <= right) {
//                mid = right + (left - right) / 2;
//                if (a[mid] < x)
//                    left = mid + 1;
//                else
//                    right = mid - 1;
//            }
//            L = right;
//            left = temp_left;
//            right = temp_right;
//
//            while (left <= right) {
//                mid = right + (left - right) / 2;
//                if (a[mid] <= x)
//                    left = mid + 1;
//                else
//                    right = mid - 1;
//            }
//            R = left;
//
//            ans = R - L - 1;
//
//            return;
//        }
//        else if (a[mid] > x) {
//            right = mid - 1;
//        }
//        else {
//            left = mid + 1;
//        }
//    }
//
//    return;
//}
//int main(void) {
//    int n, m;
//
//    scanf("%d", &n);
//
//    for (int i = 0; i < n; i++) {
//        int input;
//        scanf("%d", &input);
//        a.push_back(input);
//    }
//
//    scanf("%d", &m);
//
//    for (int i = 0; i < m; i++) {
//        int input;
//        scanf("%d", &input);
//        b.push_back(input);
//    }
//
//    sort(a.begin(), a.end());
//
//    for (int i = 0; i < m; i++) {
//        binary(0, n - 1, b[i]);
//        printf("%d ", ans);
//        ans = 0;
//    }
//
//    return 0;
//}