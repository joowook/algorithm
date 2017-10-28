//#include <iostream>
//#include <queue>
//#include <cstring>
//using namespace std;
//
//int a[51][51];
//int group[51][51];
//int dx[8] = { -1,0,1,-1,1,-1,0,1 };
//int dy[8] = { 1,1,1,0,0,-1,-1,-1 };
//int w = 1, h = 1;
//
//void bfs(int y, int x, int cnt) {
//    group[y][x] = cnt;
//    queue <pair<int, int >> q;
//    q.push(make_pair(x, y));
//
//    while (!q.empty()) {
//        int x = q.front().first;
//        int y = q.front().second;
//        q.pop();
//
//        for (int i = 0; i < 8; i++) {
//            int nx = x + dx[i];
//            int ny = y + dy[i];
//            if (nx > 0 && ny > 0 && nx <= w && ny <= h) {
//                if (group[ny][nx] == 0 && a[ny][nx] == 1) {
//                    group[ny][nx] = cnt;
//                    q.push(make_pair(nx, ny));
//                }
//            }
//        }
//    }
//}
//int main(void) {
//    while (1) {
//        scanf("%d %d", &w, &h);
//        if (w == 0 && h == 0)
//            break;
//        memset(a, 0, sizeof(a));
//        memset(group, 0, sizeof(group));
//
//        for (int i = 1; i <= h; i++) {
//            for (int j = 1; j <= w; j++) {
//                scanf("%1d", &a[i][j]);
//            }
//        }
//        int cnt = 0;
//        for (int i = 1; i <= h; i++) {
//            for (int j = 1; j <= w; j++) {
//                if (a[i][j] == 1 && group[i][j] == 0) {
//                    bfs(i, j, ++cnt);
//                }
//            }
//        }
//
//        printf("%d\n", cnt);
//    }
//
//
//    return 0;
//}