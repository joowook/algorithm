//#include <iostream>
//using namespace std;
//#define n 9
//
//int a[9][9];
//bool c1[10][10];
//bool c2[10][10];
//bool c3[10][10];
//
//int square(int x, int y) {
//    return (x / 3) * 3 + y / 3;
//}
//
//bool go(int z) {
//    if (z == 81) {
//        for (int i = 0; i < n; i++) {
//            for (int j = 0; j < n; j++) {
//                printf("%d ", a[i][j]);
//            }
//            printf("\n");
//        }
//        //exit(0) 하면 return 없이 바로 끝
//        return true;
//    }
//
//    int x = z / 9;
//    int y = z % 9;
//
//    if (a[x][y] != 0) {
//        return go(z + 1);
//    }
//    else {
//        for (int i = 1; i <= n; i++) {
//            if (c1[x][i] == false && c2[y][i] == false && c3[square(x,y)][i] == false) {
//                c1[x][i] = true;
//                c2[y][i] = true;
//                c3[square(x, y)][i] = true;
//                a[x][y] = i;
//                if (go(z + 1)) {
//                    return true;
//                }
//                a[x][y] = 0;
//                c1[x][i] = false;
//                c2[y][i] = false;
//                c3[square(x, y)][i] = false;
//            }
//        }
//    }
//
//    return false;
//}
//int main(void) {
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            scanf("%d", &a[i][j]);
//
//            if (a[i][j] != 0) {
//                c1[i][a[i][j]] = true;
//                c2[j][a[i][j]] = true;
//                c3[square(i, j)][a[i][j]] = true;
//            }
//        }
//    }
//
//    go(0);
//
//    return 0;
//}