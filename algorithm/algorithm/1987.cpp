//#include <iostream>
//using namespace std;
//
//char a[22][22];
//bool check[26];
//int dx[4] = { -1,1,0, 0 };
//int dy[4] = { 0,0,1,-1 };
//int R, C;
//int ans;
//
//void go(int x, int y, int cnt) {
//    if (ans < cnt) {
//        ans = cnt;
//    }
//    for (int i = 0; i < 4; i++) {
//        int nx = x + dx[i];
//        int ny = y + dy[i];
//        if (nx >= 0 && ny >= 0 && nx < R && ny < C) {
//            if (check[a[nx][ny] - 'A'] == false) {
//                check[a[nx][ny] - 'A'] = true;
//                go(nx, ny, cnt + 1);
//                check[a[nx][ny] - 'A'] = false;
//            }
//        }
//    }
//}
//int main(void) {
//    scanf("%d %d", &R, &C);
//
//    for (int i = 0; i < R; i++) {
//        scanf("%s", &a[i]);
//    }
//    check[a[0][0] - 'A'] = true;
//    go(0, 0, 1);
//
//    printf("%d\n", ans);
//
//    return 0;
//}