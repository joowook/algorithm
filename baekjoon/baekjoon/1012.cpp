//#include <iostream>
//#include <queue>
//using namespace std;
//
//int map[51][51];
//int dx[4] = { -1,1,0,0 };
//int dy[4] = { 0,0,1,-1 };
//int M, N, K;
//
//void bfs(int y, int x, int cnt) {
//    queue<pair<int, int>> q;
//
//    q.push(make_pair(y, x));
//
//    while (!q.empty()) {
//        y = q.front().first;
//        x = q.front().second;
//        q.pop();
//
//        for (int i = 0; i < 4; i++) {
//            int ny = y + dy[i];
//            int nx = x + dx[i];
//
//            if (ny >= 0 && ny < N && nx >= 0 && nx < M) {
//                if (map[ny][nx] == 1) {
//                    map[ny][nx] = cnt;
//                    q.push(make_pair(ny, nx));
//                }
//            }
//        }
//    }
//}
//
//int main(void) {
//    int T;
//
//    scanf("%d", &T);
//
//    while (T--) {
//        scanf("%d %d %d", &M, &N, &K);
//
//        for (int i = 0; i < K; i++) {
//            int x, y;
//            scanf("%d %d", &x, &y);
//            map[y][x] = 1;
//        }
//
//        int cnt = 1;
//        for (int i = 0; i < N; i++) {
//            for (int j = 0; j < M; j++) {
//                if (map[i][j] == 1) {
//                    map[i][j] = ++cnt;
//                    bfs(i, j, cnt);
//                }
//            }
//        }
//
//        printf("%d\n", cnt - 1);
//    }
//
//    return 0;
//}