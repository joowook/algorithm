//#include <iostream>
//using namespace std;
//
//int a[51][51], b[51][51];
//
//void flip(int x, int y) {
//    for (int i = x; i < x + 3; i++) {
//        for (int j = y; j < y + 3; j++) {
//            a[i][j] = 1 - a[i][j];
//        }
//    }
//}
//int main(void) {
//    int n, m;
//    int cnt = 0;
//    scanf("%d %d", &n, &m);
//
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//            scanf("%1d", &a[i][j]);
//        }
//    }
//
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//            scanf("%1d", &b[i][j]);
//        }
//    }
//
//    for (int i = 0; i < n - 2; i++) {
//        for (int j = 0; j < m - 2; j++) {
//            if (a[i][j] != b[i][j]) {
//                flip(i, j);
//                cnt++;
//            }
//        }
//    }
//
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//            if (a[i][j] != b[i][j]) {
//                printf("-1");
//
//                return 0;
//            }
//        }
//    }
//
//    printf("%d", cnt);
//
//    return 0;
//}