//#include <iostream>
//#include <string>
//#include <stack>
//using namespace std;
//
//int main(void) {
//    int n;
//    string s;
//
//    for (int test_case = 1; test_case <= 10; test_case++) {
//        cin >> n;
//        cin >> s;
//
//        stack<int> st;
//
//        for (int i = 0; i < n; i++) {
//            if (s[i] == '*') { // *
//                int x = st.top();
//                int y = s[++i] - '0';
//                st.pop();
//                st.push(x*y);
//            }
//
//            else if (s[i] >= '0' && s[i] <= '9') { // ¼ýÀÚ
//                st.push(s[i] - '0');
//            }
//            else { // +
//                st.push(-1);
//            }
//        }
//
//        n = st.size();
//
//      /*  int ans = 0;
//
//        while (!st.empty()) {
//            if (st.top() > 0) {
//                ans += st.top();
//            }
//
//            st.pop();
//        }*/
//        while (st.size() > 1) {
//            int x = st.top();
//            st.pop();
//            int cal = '+';
//            st.pop();
//            int y = st.top();
//            st.pop();
//
//            st.push(x + y);
//        }
//
//        printf("#%d %d\n", test_case, st.top());
//
//    }
//    return 0;
//}