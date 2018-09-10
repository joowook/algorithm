//#include <iostream>
//#include <string>
//#include <cstring>
//using namespace std;
//
//int dp[1010][1010];
//int N, M;
//
//int max(int a, int b) { return a > b ? a : b; }
//
//int go(string &s1, string &s2, int n, int m) {
//    int &ret = dp[n][m];
//    if (ret != -1) return ret;
//
//    if (n >= N || m >= M) return ret = 0;
//
//    if (s1[n] == s2[m]) {
//        return ret = go(s1, s2, n + 1, m + 1) + 1;
//    }
//    else {
//        return ret = max(go(s1, s2, n + 1, m), go(s1, s2, n, m + 1));
//    }
//}
//
//int main(void) {
//    string s1, s2;
//
//    cin >> s1 >> s2;
//
//    N = s1.size();
//    M = s2.size();
//
//    memset(dp, -1, sizeof(dp));
//
//    printf("%d\n", go(s1, s2, 0, 0));
//
//    return 0;
//}