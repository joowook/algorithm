//#include <iostream>
//#include <string>
//using namespace std;
//int main(void) {
//    string s = "";
//    string ans = "";
//    int x = 0;
//    int n = 0, i;
//    int count = 0;
//
//    cin >> s;
//
//    n = s.size() % 3;
// 
//    if (n == 0) {
//        n = 3;
//    }
//
//    for (i = 0; i < n; i++) {
//        x = x * 2 + s[i] - '0';
//    }
//    ans += x + '0';
//    x = 0;
//
//    for (i; i < s.size(); i++) {
//        x = x * 2 + s[i] - '0';
//        count++;
//        if ((count % 3) == 0) {
//            ans += x + '0';
//            x = 0;
//        }
//    }
//
//
//    cout << ans;
//
//    return 0;
//}