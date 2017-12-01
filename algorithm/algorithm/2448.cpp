//#include <iostream>
//#include <cstring>
//using namespace std;
//
//#define BLANK 0
//#define STAR 1
//
//char a[3072][6150];// 3073
//
//void go(int x, int y, int n, int flag) {
//    if (flag == BLANK) {
//        n = n * 2 - 1;
//        for (int i = x; i < x + n; i++) {
//            for (int j = y+i-x; j < y + n-(i-x); j++) {
//                a[i][j] = ' ';
//            }
//        }
//        
//    }
//    else {
//        if (n == 3) {
//            a[x][y] = ' ';
//            a[x][y + 1] = ' ';
//            a[x][y + 2] = '*';
//            a[x][y + 3] = ' ';
//            a[x][y + 4] = ' ';
//
//            a[x + 1][y] = ' ';
//            a[x + 1][y + 1] = '*';
//            a[x + 1][y + 2] = ' ';
//            a[x + 1][y + 3] = '*';
//            a[x + 1][y + 4] = ' ';
//
//            a[x + 2][y] = '*';
//            a[x + 2][y + 1] = '*';
//            a[x + 2][y + 2] = '*';
//            a[x + 2][y + 3] = '*';
//            a[x + 2][y + 4] = '*';
//        }
//        else {
//            int m = n / 2;
//            go(x, y+m, m, STAR);
//            for (int i = 0; i < 3; i++) {
//                if (i == 1) {
//                    go(x + m, y + m, m, BLANK);
//                }
//                else {
//                    go(x + m, y + m*i, m, STAR);
//                }
//            }
//        }
//    }
//}
//int main(void) {
//    int n;
//    scanf("%d", &n);
//    memset(a, ' ', sizeof(a));
//    go(0,0,n,STAR);
//
//    for (int i = 0; i < n; i++) {
//        a[i][2 * n - 1] = '\0';
//    }
//
//    for (int i = 0; i < n; i++) {
//        printf("%s\n", a[i]);
//    }
//
//    return 0;
//}