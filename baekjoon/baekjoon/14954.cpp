//#include <iostream>
//using namespace std;
//
//int main(void) {
//    int n;
//
//    scanf("%d", &n);
//    
//    for (int i = 0; i < 6; i++) {
//        int nx = 0;
//
//        while (n != 0) {
//            int x = n % 10;
//            n /= 10;
//            nx += x*x;
//        }
//        n = nx;
//        if (n == 1) {
//            printf("HAPPY\n");
//
//            return 0;
//        }
//    }
//
//    printf("UNHAPPY\n");
//
//    return 0;
//}