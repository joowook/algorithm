//#include <iostream>
//using namespace std;
//
//#define MAX 10000
//int check[MAX+1];
//int main(void) {
//    int T;
//    
//    for (int i = 2; i*i <= MAX; i++) {
//        for (int j = 2 * i; j <= MAX; j += i) {
//            check[j] = 1;
//        }
//    }
//
//    scanf("%d", &T);
//    
//    while (T--) {
//        int x = 0, y = 100000;
//        int n;
//        scanf("%d", &n);
//
//        for (int i = 2; i <= n/2; i++) {
//            if (check[i] == 0 && check[n - i] == 0) {
//                if (n - 2 * i < y - x) {
//                    x = i;
//                    y = n - i;
//                }
//            }
//        }
//        printf("%d %d\n", x, y);
//    }
//
//    return 0;
//}