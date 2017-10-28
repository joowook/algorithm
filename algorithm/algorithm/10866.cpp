//#include <iostream>
//#include <deque>
//#include <string>
//
//using namespace std;
//
//int main(void) {
//    int T;
//
//    cin >> T;
//    string cmd;
//    deque <int> dq;
//    while (T--) {
//        cin >> cmd;
//
//        if (cmd == "push_front") {
//            int num;
//            cin >> num;
//            dq.push_front(num);
//        }
//        else if (cmd == "push_back") {
//            int num;
//            cin >> num;
//            dq.push_back(num);
//        }
//        else if (cmd == "empty") {
//            cout << dq.empty() << endl;
//        }
//        else if (cmd == "front") {
//            if (!dq.empty())
//                cout << dq.front() << endl;
//            else
//                cout << -1 << endl;
//        }
//        else if (cmd == "back") {
//            if (!dq.empty())
//                cout << dq.back() << endl;
//            else
//                cout << -1 << endl;
//        }
//        else if (cmd == "pop_front") {
//            if (!dq.empty()) {
//                cout << dq.front() << endl;
//                dq.pop_front();
//            }
//            else
//                cout << -1 << endl;
//        }
//        else if (cmd == "pop_back") {
//            if (!dq.empty()) {
//                cout << dq.back() << endl;
//                dq.pop_back();
//            }
//            else
//                cout << -1 << endl;
//        }
//        else if (cmd == "size") {
//            cout << dq.size() << endl;
//        }
//    }
//
//    return 0;
//}
