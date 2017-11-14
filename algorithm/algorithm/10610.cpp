//#include <iostream>
//#include <algorithm>
//#include <string>
//using namespace std;
//
//int main(void) {
//    string s;
//    bool flag = false;
//    cin >> s;
//    int cnt = 0;
//    if (s.size() == 1 && s[0] == '0') {
//        cout << "-1";
//        return 0;
//    }
//    for (int i = 0; i < s.size(); i++) {
//        cnt += s[i] - '0';
//        if (s[i] == '0') {
//            flag = true;
//        }
//    }
//
//    if (flag && !(cnt % 3)) {
//        sort(s.begin(), s.end());
//        reverse(s.begin(), s.end());
//        cout << s;
//    }
//    else {
//        cout << "-1";
//    }
//
//    return 0;    
//}