//#include <iostream>
//using namespace std;
//
//#define STAR 1
//#define BLANK 0
//
//char a[6562][6562]; // a[3^8+1][3^8+1]
//
//void go(int x, int y, int n, int flag) {
//    if (flag == BLANK) {
//        for (int i = x; i < x + n; i++) {
//            for (int j = y; j < y + n; j++) {
//                a[i][j] = ' ';
//            }
//        }
//    }
//    else {
//        if (n == 1) {
//            a[x][y] = '*';
//        }
//        else {
//            int m = n / 3;
//            for (int i = 0; i < 3; i++) {
//                for (int j = 0; j < 3; j++) {
//                    if (i == 1 && j == 1) {
//                        go(x + m, y + m, m, BLANK);
//                    }
//                    else {
//                        go(x + m*i, y + m*j, m, STAR);
//                    }
//                }
//            }
//        }
//    }
//}
//
//int main(void) {
//    int n;
//
//    scanf("%d", &n);
//
//    go(0, 0, n, STAR);
//
//    for (int i = 0; i < n; i++) {
//        printf("%s\n", a[i]);
//    }
//
//    return 0;
//}