//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//vector<int> a;
//vector<int> b;
//
//int merge(int left, int right, int x) {
//    int mid = 0;
//    while (left <= right) {
//        mid = left + (right - left) / 2;
//        if (a[mid] == x) {
//            return 1;
//        }
//        else if (a[mid] < x) {
//            left = mid + 1;
//        }
//        else {
//            right = mid - 1;
//        }
//    }
//    return 0;
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
//        int ans = merge(0, n - 1, b[i]);
//        printf("%d ", ans);
//    }
//
//    return 0;
//}a