//#include <iostream>
//#include <cstring>
//using namespace std;
//
//int main(void) {
//    int m;
//
//    scanf("%d", &m);
//    int S = 0;
//    while (m--) {
//        char ch[10];
//        scanf("%s", ch);
//        if (strcmp(ch, "all") && strcmp(ch, "empty")) {
//            int input;
//            scanf("%d", &input);
//
//            if (!strcmp(ch, "add")) {
//                S |= (1 << input);
//            }
//            else if (!strcmp(ch, "check")) {
//                if((S&(1 << input))>0) {
//                    printf("1\n");
//                }
//                else {
//                    printf("0\n");
//                }
//            }
//            else if (!strcmp(ch, "remove")) {
//                S &= ~(1 << input);
//            }
//            else if (!strcmp(ch, "toggle")) {
//                S ^= (1 << input);
//            }
//        }
//        else {
//            if (!strcmp(ch, "all")) {
//                S |= ((1 << 21) - 1);
//            }
//            else if (!strcmp(ch, "empty")) {
//                //S = 0;
//                S &= 0;
//            }
//        }
//    }
//
//    return 0;
//}