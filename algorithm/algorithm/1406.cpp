//#include <iostream>
//#include <string>
//#include <stack>
//using namespace std;
//
//int main(void) {
//    string cmd;
//    int T;
//    stack <char> s1, s2;
//
//    cin >> cmd;
//    cin >> T;
//
//    int n = cmd.size();
//
//    for (int i = 0; i < n; i++) {
//        s1.push(cmd[i]);
//    }
//
//    while (T--) {
//        cin >> cmd;
//        if (cmd[0] == 'L') {
//            if (!s1.empty()) {
//                s2.push(s1.top());
//                s1.pop();
//            }
//        }
//        else if (cmd[0] == 'D') {
//            if (!s2.empty()) {
//                s1.push(s2.top());
//                s2.pop();
//            }
//        }
//        else  if (cmd[0] == 'B') {
//            if (!s1.empty()) {
//                s1.pop();
//            }
//        }
//        else if (cmd[0] == 'P') {
//            cin >> cmd;
//            s1.push(cmd[0]);
//        }
//    }
//    n = s1.size();
//    for (int i = 0; i < n; i++) {
//        s2.push(s1.top());
//        s1.pop();
//    }
//
//    while (!s2.empty()) {
//        cout << s2.top();
//        s2.pop();
//    }
//
//    return 0;
//
//}