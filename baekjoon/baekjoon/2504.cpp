//#include <iostream>
//#include <string>
//#include <stack>
//using namespace std;
//
//int n;
//
//stack <char> st;
//string s;
//int index = 0;
//
//int go() {
//    int ans = 0;
//    
//    while (index<n) {
//        if (s[index] == '(') {
//            st.push(s[index++]);
//            ans += 2 * go();
//        }
//        else if (s[index] == '[') {
//            st.push(s[index++]);
//            ans += 3 * go();
//        }
//        else if (s[index] == ')') {
//            if (st.top() == '(') {
//                st.pop();
//                if (ans == 0) {
//                    ans = 1;
//                }
//
//                index++;
//
//                break;
//            }
//            else {
//                printf("0\n");
//
//                exit(0);
//            }
//        }
//        else if (s[index] == ']') {
//            if (st.top() == '[') {
//                st.pop();
//                if (ans == 0) {
//                    ans = 1;
//                }
//
//                index++;
//
//                break;
//            }
//            else {
//                printf("0\n");
//
//                exit(0);
//            }
//        }
//    }
//
//    return ans;
//}
//
//
//int main(void) {
//
//    cin >> s;
//
//    n = s.size();
//
//    if (n % 2 == 1 || s[0] == ')' || s[0] == ']') { //예외 처리
//        printf("0\n");
//
//        return 0;
//    }
//
//    int ans = 0;
//   
//    while (index<n) {
//        st.push(s[index]);
//
//        if (s[index] == '(') {
//            index++;
//
//            ans += 2 * go();
//        }
//        else if (s[index] == '[') {
//            index++;
//
//            ans += 3 * go();
//        }
//        else {
//            printf("0\n");
//
//            return 0;
//        }
//    }
//
//    printf("%d\n", ans);
//
//    return 0;
//}