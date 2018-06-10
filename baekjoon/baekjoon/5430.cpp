//#include <iostream>
//#include <string>
//#include <vector>
//#include <deque>
//using namespace std;
//
//int main(void) {
//    int T;
//
//    scanf("%d", &T);
//
//    while (T--) {
//        string s;
//        cin >> s;
//
//        int n;
//
//        scanf("%d", &n);
//        deque<int>a;
//
//        string cmd;
//
//        cin >> cmd;
//
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
//                    printf("error\n");
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
//                printf("[");
//                for (int i = 0; i < an; i++) {
//                    printf("%d", a.front());
//                    if (i != an - 1) {
//                        printf(",");
//                    }
//                    a.pop_front();
//                }
//                printf("]\n");
//            }
//            else {
//                printf("[");
//                for (int i = 0; i < an; i++) {
//                    printf("%d", a.back());
//                    if (i != an - 1) {
//                        printf(",");
//                    }
//
//                    a.pop_back();
//                }
//                printf("]\n");
//            }
//        }
//
//    }
//
//    return 0;
//}