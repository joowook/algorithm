//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int main(void) {
//    int n, m;
//
//    scanf("%d %d", &n, &m);
//    int ans = 0;
//    int cnt = 0;
//
//
//    if (n == 1) {
//        ans = 1;
//    }
//    else if (n == 2) {
//        ans = min(4, (m + 1) / 2);
//    }
//    else if (n >= 3) {
//        if (m >= 7) {
//            ans = m - 2;
//        }
//        else {
//            ans = min(4, m);
//        }
//    }
//
//    printf("%d", ans);
//
//    return 0;
//}