//#include <iostream>
//#include <queue>
//using namespace std;
//
//struct point {
//    int x, y;
//    point(int x2, int y2) {
//        x = x2;
//        y = y2;
//    }
//};
//
//int group[100][100];
//int a[100][100];
//int dist[100][100];
//int N;
//int dx[4] = { -1,1,0,0 };
//int dy[4] = { 0,0,1,-1 };
//queue<point> q;
//
//void bfs(int x, int y, int cnt) {
//    group[y][x] = cnt;
//    
//
//    q.push(point(x, y));
//
//    while (!q.empty()) {
//        x = q.front().x;
//        y = q.front().y;
//        q.pop();
//        for (int i = 0; i < 4; i++) {
//            int nx = x + dx[i];
//            int ny = y + dy[i];
//
//            if (nx >= 0 && nx < N && ny >= 0 && ny < N) {
//                if (!group[ny][nx] && a[ny][nx] == 1) {
//                    q.push(point(nx, ny));
//                    group[ny][nx] = cnt;
//                }
//            }
//        }
//    }
//}
//int main(void) {
//    int cnt = 0;
//    scanf("%d", &N);
//    for (int i = 0; i < N; i++) {
//        for (int j = 0; j < N; j++) {
//            scanf("%d", &a[i][j]);
//            if (a[i][j] == 0) {
//                dist[i][j] = -1;
//            }
//        }
//    }
//
//    for (int i = 0; i < N; i++) {
//        for (int j = 0; j < N; j++) {
//            if (group[i][j] == 0 && a[i][j] == 1) {
//                bfs(j, i, ++cnt);
//            }
//        }
//    }
//    for (int i = 0; i < N; i++) {
//        for (int j = 0; j < N; j++) {
//            if (a[i][j] == 1) {
//                q.push(point(j, i));
//            }
//        }
//    }
//
//    while (!q.empty()) {
//        int x = q.front().x;
//        int y = q.front().y;
//        q.pop();
//
//        for (int i = 0; i < 4; i++) {
//            int nx = x + dx[i];
//            int ny = y + dy[i];
//
//            if (nx >= 0 && nx < N && ny >= 0 && ny < N) {
//                if (dist[ny][nx] == -1) { //group[ny][nx] == 0 && a[ny][nx] == 0
//                    dist[ny][nx] = dist[y][x] + 1;
//                    group[ny][nx] = group[y][x];
//                    q.push(point(nx, ny));
//                }    
//            }
//        }
//    }
//
//    int ans = 1000000;
//    for (int i = 0; i < N; i++) {
//        for (int j = 0; j < N; j++) {
//            for (int k = 0; k < 4; k++) {
//                int x = j + dx[k];
//                int y = i + dy[k];
//                if (x >= 0 && x < N && y >= 0 && y < N) {
//                    if (group[i][j] != group[y][x]) {
//                        if (ans > dist[i][j] + dist[y][x]) {
//                            ans = dist[i][j] + dist[y][x];
//                        }
//                    }
//                }
//
//            }
//        }
//    }
//
//    printf("%d", ans);
//
//    return 0;
//}