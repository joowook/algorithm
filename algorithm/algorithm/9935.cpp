//#include <iostream>
//#include <string>
//#include <stack>
//using namespace std;
//
//bool check[1000001];
//
//int main(void) {
//    string T, A;
//
//    cin >> T >> A;
//
//    int m = T.size();
//    int n = A.size();
//
//    if (n == 1) {
//        for (int i = 0; i < m; i++) {
//            if (T[i] == A[0]) {
//                check[i] = true;
//            }
//        }
//    }
//    else {
//        stack<pair<int, int>> s;
//        for (int i = 0; i < m; i++) {
//            if (T[i] == A[0]) {
//                s.push(make_pair(i, 0));
//            }
//            else {
//                if (!s.empty()) {
//                    int ni = s.top().second;
//
//                    if (T[i] == A[ni + 1]) {
//                        s.push(make_pair(i, ni + 1));
//
//                        if (ni + 1 == n - 1) {
//                            for (int j = 0; j < n; j++) {
//                                check[s.top().first] = true;
//                                s.pop();
//                            }
//                        }
//                    }
//                    else {
//                        while (!s.empty()) {
//                            s.pop();
//                        }
//                    }
//                }
//            }
//        }
//    }
//
//    bool flag = false;
//    for (int i = 0; i < m; i++) {
//        if (!check[i]) {
//            cout << T[i];
//            flag = true;
//        }
//    }
//
//    if (!flag) {
//        cout << "FRULA";
//    }
//
//    return 0;
//}
//
////#include <iostream>
////#include <string>
////using namespace std;
////
////char s[1000001];
////int sn;
////int m, n;
////string T, A;
////
////void check() {
////
////    if (sn < n) {
////        return;
////    }
////
////    for (int i = 0; i < n; i++) {
////        if (s[sn - i - 1] != A[n - i - 1]) {
////            return;
////        }
////    }
////
////    sn -= n;
////}
////
////int main(void) {
////    cin >> T >> A;
////    
////    m = T.size();
////    n = A.size();
////
////    for (int i = 0; i < m; i++) {
////        s[sn++] = T[i];
////
////        check();
////    }
////
////    if (sn == 0) {
////        cout << "FRULA" ;
////    }
////    for (int i = 0; i < sn; i++) {
////        cout << s[i];
////    }
////
////    return 0;
////}