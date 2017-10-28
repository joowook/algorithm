//#include <iostream>
//#include <queue>
//using namespace std;
//
//int a[101][101];
//int dist[101][101];
//int check[101][101];
//int dx[4] = { -1,1,0,0 };
//int dy[4] = { 0,0,1,-1 };
//int Y, X;
//
//struct Point {
//    int x;
//    int y;
//    Point(int x1, int y1) {
//        x = x1;
//        y = y1;
//    }
//};
//void bfs(int x, int y) {
//    check[y][x] = 1;
//    dist[1][1] = 1;
//    queue<Point> q;
//    q.push(Point(x, y));
//
//    while (!q.empty()) {
//        x = q.front().x;
//        y = q.front().y;
//        q.pop();
//
//        for (int i = 0; i < 4; i++) {
//            int nx = x + dx[i];
//            int ny = y + dy[i];
//
//            if (nx > 0 && nx <= X && ny > 0 && ny <= Y) {
//                if (!check[ny][nx] && a[ny][nx] == 1) {
//                    q.push(Point(nx,ny));
//                    check[ny][nx] = 1;
//                    dist[ny][nx] = dist[y][x] + 1;
//                }
//            }
//        }
//    }
//
//}
//int main(void) {
//    scanf("%d %d", &Y, &X);
//
//    for (int i = 1; i <= Y; i++) {
//        for (int j = 1; j <= X; j++) {
//            scanf("%1d", &a[i][j]);
//        }
//    }
//
//    bfs(1, 1);
//
//    printf("%d", dist[Y][X]);
//    
//    return 0;
//}