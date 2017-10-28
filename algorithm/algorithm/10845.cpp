//
//#include <iostream>
//#include <queue>
//#include <string>
//
//using namespace std;
//
//int main(void) {
//    int T;
//
//    cin >> T;
//
//    string cmd;
//    queue <int> q;
//
//    while (T--) {
//        cin >> cmd;
//        if (cmd == "push") {
//            int num;
//            cin >> num;
//            q.push(num);
//        }
//        else if (cmd == "pop") {
//            if (!q.empty()) {
//                cout << q.front() << endl;
//                q.pop();
//            }
//            else {
//                cout << -1 << endl;
//            }
//        }
//        else if (cmd == "size") {
//            cout << q.size() << endl;
//        }
//        else if (cmd == "empty") {
//            cout << q.empty() << endl;
//        }
//        else if (cmd == "front") {
//            if (!q.empty()) {
//                cout << q.front() << endl;
//            }
//            else {
//                cout << -1 << endl;
//            }
//
//            /*cout << q.empty() ? -1 : q.front() << endl;*/
//        }
//        else if (cmd == "back") {
//            if (!q.empty()) {
//                cout << q.back() << endl;
//            }
//            else {
//                cout << -1 << endl;
//            }
//        }
//    }
//
//    return 0;
//}