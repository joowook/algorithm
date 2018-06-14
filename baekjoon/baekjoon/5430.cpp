//#include <iostream>
//#include <string>
//#include <vector>
//#include <deque>
//using namespace std;
//
//int main(void) {
//    ios_base::sync_with_stdio(false); 
//    cin.tie(NULL);
//    int T;
//
//    cin >> T;
//
//    while (T--) {
//        string s;
//        cin >> s;
//
//        int n=s.size();
//       /* string tmp = "";
//        s = tmp;
//        for (int i = 0; i < n; i++) {
//            if (i == n - 1) {
//                tmp += s[i];
//                break;
//            }
//
//            if (s[i] == 'R' && s[i + 1] == 'R') {
//                i++;
//            }
//            else {
//                tmp += s[i];
//            }
//
//        }*/
//
//        cin >> n;
//        deque<int>a;
//
//        string cmd;
//
//        cin >> cmd;
//
//        string x = "";
//        for (int i = 1; cmd[i] != ']'; i++) {
//            if (cmd[i] >= '0' && cmd[i] <= '9') {
//                x += cmd[i];
//            }
//            else if (cmd[i] == ',') {
//                a.push_back(stoi(x));
//                x = "";
//            }
//
//            if (cmd[i + 1] == ']') {
//                a.push_back(stoi(x));
//            }
//        }
//
//        int m = s.size();
//
//        bool flag = true;
//        bool check = true;
//
//        for (int i = 0; i < m; i++) {
//            if (s[i] == 'R') {
//                flag = !flag;
//            }
//            else if (s[i] == 'D') {
//                if (a.empty()) {
//                    cout << "error" << '\n';
//                    check = false;
//                    break;
//                }
//                if (flag) {
//                    a.pop_front();
//                }
//                else {
//                    a.pop_back();
//                }
//            }
//        }
//
//        if (check) {
//            int an = a.size();
//            if (flag) {
//                cout << "[";
//                for (int i = 0; i < an; i++) {
//                    cout << a.front();
//                    if (i != an - 1) {
//                        cout << ",";
//                    }
//                    a.pop_front();
//                }
//                cout << "]" << '\n';
//            }
//            else {
//                cout << "[";
//                for (int i = 0; i < an; i++) {
//                    cout << a.back();
//                    if (i != an - 1) {
//                        cout << ",";
//                    }
//
//                    a.pop_back();
//                }
//                cout << "]" << '\n';
//            }
//        }
//
//    }
//
//    return 0;
//}