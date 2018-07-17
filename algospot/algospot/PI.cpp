//#include <iostream>
//#include <string>
//#include <cstring>
//#include <algorithm>
//#include <cmath>
//using namespace std;
//string s;
//
//#define MAX 2000000000
//int dp[20000];
//int sn;
//
//int score(int left, int right) {
//    // 1. 모든 숫자 같을 때
//    int cnt = 0;
//    for (int i = left; i < right; i++) {
//        if (s[i] == s[i + 1]) {
//            cnt++;
//        }
//    }
//    if (cnt == right - left) {
//        return 1;
//    }
//
//    // 4. 등차 수열 
//    bool progress = true;
//    for (int i = left; i < right; i++) {
//        if (s[i] - s[i + 1] != s[left] - s[left + 1]) {
//            progress = false;
//        }
//    }
//
//    // 2. 단조 증가, 감소
//    if (progress) {
//        if (abs(s[left] - s[left + 1]) == 1) {
//            return 2;
//        }
//    }
//
//    bool alternating = true;
//    for (int i = 0; i <= right - left; i++) {
//        if (s[left + i] != s[left + (i %  2)]) {
//            alternating = false;
//        }
//    }
//
//    if (alternating) return 4;
//
//    if (progress) return 5;
//
//    return 10;
//}
//
//int go(int n) {
//    if (n == sn) {
//        return 0;
//    }
//
//    int &ret = dp[n];
//
//    if (ret != -1) return ret;
//
//    ret = MAX;
//
//    for (int i = 3; i <= 5; i++) {
//        if (n + i <= sn) {
//            ret = min(ret, go(n + i) + score(n, n + i - 1));
//        }
//    }
//
//    return ret;
//}
//
//int main(void) {
//    int C;
//        
//    scanf("%d", &C);
//
//    while (C--) {
//        cin >> s;
//        
//        memset(dp, -1, sizeof(dp));
//        sn = s.size();
//
//        printf("%d\n", go(0));
//    }
//
//    return 0;
//}
//
////#include <iostream>
////#include <string>
////#include <cstring>
////#include <algorithm>
////using namespace std;
////string s;
////
////int dp[20000];
////int sn;
////
////int go(int n) {
////    int &ret = dp[n];
////
////    if (ret != -1) return ret;
////
////    if (n == sn) return ret = 0;
////
////    ret = 20000000;
////
////    //bool flag = false; 이거 해서 틀림
////    //1. 전부 같다.
////    if (n + 2 < sn && s[n] == s[n + 1] && s[n + 1] == s[n + 2]) {
////        ret = min(ret, go(n + 3) + 1);
////
////        if (n + 3 < sn && s[n + 2] == s[n + 3]) {
////            ret = min(ret, go(n + 4) + 1);
////
////            if (n + 4 < sn && s[n + 3] == s[n + 4]) {
////                ret = min(ret, go(n + 5) + 1);
////            }
////        }
////    }
////
////    //2. 1개씩 감소
////    if (n + 2 < sn && s[n] == s[n + 1] + 1 && s[n + 1] + 1 == s[n + 2] + 2) {
////        ret = min(ret, go(n + 3) + 2);
////
////        if (n + 3 < sn && s[n + 2] == s[n + 3] + 1) {
////            ret = min(ret, go(n + 4) + 2);
////
////            if (n + 4 < sn && s[n + 3] == s[n + 4] + 1) {
////                ret = min(ret, go(n + 5) + 2);
////            }
////        }
////    }
////
////    //2. 1개씩 증가
////    if (n + 2 < sn && s[n] == s[n + 1] - 1 && s[n + 1 ] - 1 == s[n + 2] - 2) {
////        ret = min(ret, go(n + 3) + 2);
////
////        if (n + 3 < sn && s[n + 2] == s[n + 3] - 1) {
////            ret = min(ret, go(n + 4) + 2);
////
////            if (n + 4 < sn && s[n + 3] == s[n + 4] - 1) {
////                ret = min(ret, go(n + 5) + 2);
////            }
////        }
////    }
////
////    //3. 번갈아 가며 출현
////    if (n + 2 < sn && s[n] == s[n + 2] && s[n] != s[n + 1]) {
////        ret = min(ret, go(n + 3) + 4);
////
////        if (n + 3 < sn && s[n + 1] == s[n + 3]) {
////            ret = min(ret, go(n + 4) + 4);
////
////            if (n + 4 < sn && s[n + 2] == s[n + 4]) {
////                ret = min(ret, go(n + 5) + 4);
////            }
////        }
////    }
////
////    //4. 등차 수열
////    if (n + 2 < sn && s[n] - s[n + 1] == s[n + 1] - s[n + 2]) {
////        ret = min(ret, go(n + 3) + 5);
////
////        if (n + 3 < sn && s[n + 1] - s[n + 2] == s[n + 2] - s[n + 3]) {
////            ret = min(ret, go(n + 4) + 5);
////
////            if (n + 4 < sn && s[n + 2] - s[n + 3] == s[n + 3] - s[n + 4]) {
////                ret = min(ret, go(n + 5) + 5);
////            }
////        }
////    }
////
////    //5. 그 외의 경우 
////        for (int i = 2; i <= 4; i++) {
////            if (n + i < sn) {
////                ret = min(ret, go(n + i + 1) + 10);
////            }
////        }
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
////        cin >> s;
////        
////        memset(dp, -1, sizeof(dp));
////        sn = s.size();
////
////        printf("%d\n", go(0));
////    }
////
////    return 0;
////}