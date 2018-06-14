//#include <iostream>
//#include <string>
//#include <stack>
//#include <algorithm>
//using namespace std;
//
//int Answer;
//
//bool check(char x, char y) {
//    if (x == '(') return y == ')';
//    if (x == '[') return y == ']';
//    if (x == '{') return y == '}';
//
//    return false;
//}
//
//int main(int argc, char** argv)
//{
//    int T, test_case;
//
//    cin >> T;
//    for (test_case = 0; test_case < T; test_case++)
//    {
//        Answer = 0;
//
//        string s;
//
//        cin >> s;
//
//        int n = s.size();
//
//        stack<int> st;
//        int sc = -1;
//
//        for (int i = 0; i < n; i++) {
//            if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
//                st.push(i);
//                if (sc == -1) {
//                    sc = i;
//                }
//            }
//            else {
//                if (!st.empty()) {
//                    if (check(s[st.top()], s[i])) {
//                        st.pop();
//
//                        if (st.empty()) {
//                            Answer = max(Answer, i - sc + 1); //  ()(()()() <- 이거 해결하는데 오래 걸림
//                        }
//                        else {
//                            Answer = max(Answer, i - st.top());
//                        }
//                    }
//                    else {
//                        st = stack<int>(); // 스택 초기화
//                        sc = -1;
//                    }
//                }
//                else {
//                    sc = -1;
//                }
//
//            }
//        }
//
//        cout << "Case #" << test_case + 1 << endl;
//        cout << Answer << endl;
//    }
//
//    return 0;
//}