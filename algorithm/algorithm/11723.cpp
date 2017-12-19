//#include <iostream>
//#include <cstring>
//using namespace std;
//
//int main(void) {
//    int m;
//
//    scanf("%d", &m);
//    int n = 0;
//    while (m--) {
//        char ch[10];
//        scanf("%s", ch);
//        if (strcmp(ch, "all") && strcmp(ch, "empty")) {
//            int input;
//            scanf("%d", &input);
//
//            if (!strcmp(ch, "add")) {
//                n = n | (1 << input);
//            }
//            else if (!strcmp(ch, "check")) {
//                int res = n&(1 << input);
//                if (res) {
//                    printf("1\n");
//                }
//                else {
//                    printf("0\n");
//                }
//            }
//            else if (!strcmp(ch, "remove")) {
//                n = n & ~(1 << input);
//            }
//            else if (!strcmp(ch, "toggle")) {
//                n = n ^ (1 << input);
//            }
//        }
//        else {
//            if (!strcmp(ch, "all")) {
//                for (int i = 1; i <= 20; i++) {
//                    n = n | (1 << i);
//                }
//            }
//            else if (!strcmp(ch, "empty")) {
//                for (int i = 1; i <= 20; i++) {
//                    n = n & ~(1 << i);
//                }
//            }
//        }
//    }
//
//    return 0;
//}