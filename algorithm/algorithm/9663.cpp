//#include <iostream>
//using namespace std;
//
//int a[15][15];
//bool check[15][15];
//bool check_col[15];
//bool check_cross1[40];
//bool check_cross2[40];
//
//int ans;
//
//bool checkcheck(int r, int c, int N) {
//    // 열 검사
//    if (check_col[c]) {
//        return false;
//    }
//    // 왼쪽 위로 대각선
//    if (check_cross1[r + c]) {
//        return false;
//    }
//
//    // 오른쪽 위로 대각선
//    if (check_cross2[r - c + N]) {
//        return false;
//    }
//
//    return true;
//}
//
//void go(int r, int N) {
//    if (r == N) {
//        ans++;
//        return;
//    }
//   
//    for (int c = 0; c < N; c++) {
//        if (checkcheck(r, c, N)) {
//            check[r][c] = true;
//            check_col[c] = true;
//            check_cross1[r + c] = true;
//            check_cross2[r - c + N] = true;
//            go(r + 1, N);
//            check[r][c] = false;
//            check_col[c] = false;
//            check_cross1[r + c] = false;
//            check_cross2[r - c + N] = false;
//        }
//    }
//}
//int main(void) {
//    int N;
//
//    scanf("%d", &N);
//    
//    go(0, N);
//
//    printf("%d\n", ans);
//
//    return 0;
//}