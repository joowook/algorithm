//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//#include <cstring>
//using namespace std;
//
//string w, s;
//int dp[101][101];
//
//int go(int ws, int ss) {
//    int &ret = dp[ws][ss];
//
//    if (ret != -1) {
//        return ret;
//    }
//
//    if (ws < w.size() && ss < s.size() && (w[ws] == '?' || w[ws] == s[ss])) {
//        return ret = go(ws + 1, ss + 1);
//    }
//
//    if (ws == w.size()) {
//        return ret = (ss == s.size());
//    }
//
//    if (w[ws] == '*') {
//        if (go(ws + 1, ss) || (ss < s.size() && go(ws, ss + 1))) {
//            return ret = 1;
//        }
//    }
//
//    return ret = 0;
//}
//
//int main(void) {
//    int C;
//
//    cin >> C;
//
//    while (C--) {
//        cin >> w;
//
//        int N;
//        cin >> N;
//
//        vector<string> v;
//
//        for (int i = 0; i < N; i++) {
//            cin >> s;
//
//            memset(dp, -1, sizeof(dp));
//
//            if (go(0, 0)) {
//                v.push_back(s);
//            }
//        }
//
//        sort(v.begin(), v.end());
//
//        for (int i = 0; i < v.size(); i++) {
//            cout << v[i] << '\n';
//        }
//    }
//
//    return 0;
//}