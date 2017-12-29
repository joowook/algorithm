//#include <iostream>
//using namespace std;
//bool check[10];
//int possible(int x) {
//    if (x == 0) {
//        if (check[0]) {
//            return 0;
//        }
//        else {
//            return 1;
//        }
//    }
//
//    int len = 0;
//    while (x != 0) {
//        if (check[x % 10]) {
//            return 0;
//        }
//        len++;
//        x /= 10;
//    }
//
//    return len;
//}
//int main(void) {
//    int n, m;
//    scanf("%d %d", &n, &m);
//
//    for (int i = 0; i < m; i++) {
//        int input;
//        scanf("%d", &input);
//
//        check[input] = true;
//    }
//
//    int ans = n > 100 ? n - 100 : 100 - n;
//
//    for (int i = 0; i <= 1000000; i++) {
//        int len = possible(i);
//        if (len > 0) {
//            int press = i > n ? i - n : n - i;
//
//            if (ans > len + press) {
//                ans = len + press;
//            }
//        }
//    }
//
//    printf("%d\n", ans);
//
//    return 0;
//}