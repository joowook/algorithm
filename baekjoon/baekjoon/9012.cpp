//#include <iostream>
//#include <stack>
//using namespace std;
//
//char input[52];
//
//int main(void) {
//    int T;
//
//    scanf("%d", &T);
//    stack<char> s;
//    
//    while (T--) {
//        while (!s.empty()) {
//            s.pop();
//        }
//
//        bool flag = true;
//
//        scanf("%s", input);
//
//        for (int i = 0; input[i] != '\0'; i++) {
//            if (input[i] == '(') {
//                s.push(input[i]);
//            }
//            else {
//                if (!s.empty()) {
//                    char tmp = s.top();
//                    if (tmp == ')') {
//                        flag = false;
//
//                        break;
//                    }
//                    s.pop();
//                }
//                else{
//                    flag = false;
//
//                    break;
//                }
//            }
//        }
//
//        if (!flag || s.size() != 0) {
//            printf("NO\n");
//        }
//        else if(flag) {
//            printf("YES\n");
//        }
//    }
//
//    return 0;
//}