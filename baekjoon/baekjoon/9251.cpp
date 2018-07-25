//#include <iostream>
//#include <string>
//#include <cstring>
//#include <algorithm>
//using namespace std;
//
//int dp[1001][1001];
//int N, M;
//
//int go(string &s1, string &s2, int n, int m) {
//    int &ret = dp[n][m];
//
//    if (ret != -1) return ret;
//
//    if (n == N || m == M) {
//        return ret = 0;
//    }
//
//    if (s1[n] == s2[m]) {
//        ret = go(s1, s2, n + 1, m + 1) + 1;
//    }
//    else {
//        ret = go(s1, s2, n, m + 1);
//        ret = max(ret, go(s1, s2, n + 1, m));
//    }
//
//    return ret;
//}
//
//int main(void) {
//    string s1, s2;
//
//    cin >> s1 >> s2;
//    N = s1.size();
//    M = s2.size();
//
//    memset(dp, -1, sizeof(dp));
//
//    printf("%d\n", go(s1, s2, 0, 0));
//
//    return 0;
//}