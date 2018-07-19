//#include <iostream>
//#include <algorithm>
//#include <cstring>
//using namespace std;
//
//int N;
//int dp[101][101], cnt[101][101];
//int a[101][101];
//
//int go(int y, int x) {
//    if (y == N - 1) {
//        return a[y][x];
//    }
//
//    int &ret = dp[y][x];
//    if (ret != -1) return ret;
//    ret = max(go(y + 1, x), go(y + 1, x + 1)) + a[y][x];
//
//    return ret;
//}
//
//int go2(int y, int x) {
//    if (y == N - 1) {
//        return 1;
//    }
//
//    int &ret = cnt[y][x];
//    if (ret != -1) return ret;
//
//    ret = 0;
//    if (go(y + 1, x + 1) >= go(y + 1, x)) ret += go2(y + 1, x + 1);
//    if (go(y + 1, x + 1) <= go(y + 1, x)) ret += go2(y + 1, x);
//
//    return ret;
//}
//int main(void) {
//    int C;
//    
//    scanf("%d", &C);
//    
//    while (C--) {
//        scanf("%d", &N);
//    
//        memset(dp, -1, sizeof(dp));
//        memset(cnt, -1, sizeof(cnt));
//        for (int i = 0; i < N; i++) {
//            for (int j = 0; j <= i; j++) {
//                scanf("%d", &a[i][j]);
//            }
//        }
//
//        printf("%d\n", go2(0, 0));
//    }
//    
//    return 0;
//}
//
////#include <iostream>
////#include <algorithm>
////#include <cstring>
////using namespace std;
////
////struct Point {
////    int val;
////    int cnt;
////
////    Point(int val2, int cnt2) {
////        val = val2;
////        cnt = cnt2;
////    }
////
////    Point() {}
////};
////int a[101][101];
////Point dp[101][101];
////int N;
////
////Point go(int y, int x) {
////    if (y == N - 1) return Point(0, 1);
////    
////    Point &ret = dp[y][x];
////
////    if (ret.val != -1) return ret;
//// 
////    Point val1 = go(y + 1, x);
////    Point val2 = go(y + 1, x + 1);
////    val1.val += a[y + 1][x];
////    val2.val += a[y + 1][x + 1];
////
////    if (val1.val == val2.val) {
////        val1.cnt += val2.cnt;
////
////        ret = val1;
////    }
////    else {
////        if (val1.val > val2.val) {
////            ret = val1;
////        }
////        else {
////            ret = val2;
////        }
////    }
////
////    return ret;
////}
////
////int main(void) {
////    int C;
////
////    scanf("%d", &C);
////
////    while (C--) {
////        scanf("%d", &N);
////
////        memset(dp, -1, sizeof(dp));
////
////        for (int i = 0; i < N; i++) {
////            for (int j = 0; j <= i; j++) {
////                scanf("%d", &a[i][j]);
////            }
////        }
////        
////        Point ans = go(0, 0);
////        ans.val += a[0][0];
////
////        printf("%d\n", ans.cnt);
////    }
////
////    return 0;
////}