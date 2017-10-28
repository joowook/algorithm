//#include <iostream>
//#include <queue>
//using namespace std;
//
//int group[250][250];
//int a[250][250];
//int X, Y;
//int cnt = 0;
//int dx[8] = { -1,0,1,-1,1,-1,0,1 };
//int dy[8] = { 1,1,1,0,0,-1,-1,-1 };
//void bfs(int x, int y, int cnt) {
//    group[y][x] = cnt;
//    queue<pair<int, int>> q;
//    q.push(make_pair(x, y));
//
//    while (!q.empty()) {
//        x = q.front().first;
//        y = q.front().second;
//        q.pop();
//        for (int i = 0; i < 8; i++) {
//            int nx = x + dx[i];
//            int ny = y + dy[i];
//            if (nx >= 0 && nx < X && ny >= 0 && ny < Y) {
//                if (group[ny][nx] == 0 && a[ny][nx] == 1) {
//                    group[ny][nx] = cnt;
//                    q.push(make_pair(nx, ny));
//                }
//            }
//        }
//    }
//}
//int main(void) {
//    scanf("%d %d", &Y, &X);
//
//    for (int i = 0; i < Y; i++) {
//        for (int j = 0; j < X; j++) {
//            scanf("%d", &a[i][j]);
//        }
//    }
//    for (int i = 0; i < Y; i++) {
//        for (int j = 0; j < X; j++) {
//            if(group[i][j] == 0 && a[i][j] ==1)
//                bfs(j, i, ++cnt);
//        }
//    }
//
//    printf("%d", cnt);
//
//    return 0;
//}