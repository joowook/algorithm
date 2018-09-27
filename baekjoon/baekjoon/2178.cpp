//#include <iostream>
//#include <queue>
//using namespace std;
//
//int map[101][101];
//int visit[101][101];
//int dy[4] = { 1,-1,0,0 };
//int dx[4] = { 0,0,1,-1 };
//int N, M;
//
//struct Point {
//    int x, y, cnt;
//
//    Point(int x2, int y2, int cnt2) {
//        x = x2;
//        y = y2;
//        cnt = cnt2;
//    }
//};
//
//void bfs(int y, int x) {
//    queue<Point> q;
//
//    q.push(Point(x,y,1));
//
//    while (!q.empty()) {
//        y = q.front().y;
//        x = q.front().x;
//        int cnt = q.front().cnt;
//        q.pop();
//        
//        if (y == N && x == M) {
//            printf("%d\n", cnt);
//
//            return;
//        }
//
//        for (int i = 0; i < 4; i++) {
//            int ny = y + dy[i];
//            int nx = x + dx[i];
//            
//            if (ny >= 1 && ny <= N && nx >= 1 && nx <= M) {
//                if (!visit[ny][nx] && map[ny][nx]==1) {
//                    visit[ny][nx] = true;
//                    q.push(Point(nx, ny, cnt + 1));
//                }
//            }
//        }
//
//    }
//}
//
//int main(void) {
//    scanf("%d %d", &N, &M);
//
//    for (int i = 1; i <= N; i++) {
//        for (int j = 1; j <= M; j++) {
//            scanf("%1d", &map[i][j]);
//        }
//    }
//
//    visit[1][1] = true;
//    bfs(1, 1);
//
//
//    return 0;
//}