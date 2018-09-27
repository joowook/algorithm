//#include <iostream>
//using namespace std;
//
//int main(void) {
//    int N;
//
//    scanf("%d", &N);
//    int cnt = 0;
//    if (N < 100) {
//        cnt = N;
//    }
//    else {
//        cnt = 99;
//        for (int i = 100; i <= N; i++) {
//            int tmp = i;
//            int a = tmp / 100;
//            tmp %= 100;
//            int b = tmp / 10;
//            tmp %= 10;
//            int c = tmp;
//
//            if ((a - b) == (b - c)) {
//                cnt++;
//            }
//
//        }
//    }
//
//    printf("%d\n", cnt);
//
//    return 0;
//
//}