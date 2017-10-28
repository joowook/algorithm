//#include <iostream>
//#include <queue>
//using namespace std;
//
//int a[1001][1001];
//int dist[1001][1001];
//int dx[4] = { -1,1,0,0 };
//int dy[4] = { 0,0,1,-1 };
//
//struct point {
//    int x, y;
//    point(int x2, int y2) {
//        x = x2;
//        y = y2;
//    }
//};
//
//int main(void) {
//    int count = 0;
//    int X, Y;
//    scanf("%d %d", &X, &Y);
//    queue<point> q;
//    for (int i = 0; i < Y; i++) {
//        for (int j = 0; j < X; j++) {
//            scanf("%d", &a[i][j]);
//            if (a[i][j] == 1) {
//                dist[i][j] = 1;
//                q.push(point(j, i));
//                count++;
//            }
//        }
//    }
//    
//    if (count == X*Y) {
//        printf("0");
//    }
//    else {
//        while (!q.empty()) {
//            int x = q.front().x;
//            int y = q.front().y;
//            q.pop();
//            for (int i = 0; i < 4; i++) {
//                int nx = x + dx[i];
//                int ny = y + dy[i];
//
//                if (nx >= 0 && nx < X && ny >= 0 && ny < Y) {
//                    if (dist[ny][nx]==0 && a[ny][nx] == 0) {
//                        dist[ny][nx] = dist[y][x] + 1;
//                        a[ny][nx] = 1;
//                        q.push(point(nx, ny));
//                    }
//                }
//
//            }
//
//        }
//        int ans = 0;
//
//        for (int i = 0; i < Y; i++) {
//            for (int j = 0; j < X; j++) {
//                if (ans < dist[i][j]) {
//                    ans = dist[i][j];
//                }
//            }
//        }
//        for (int i = 0; i < Y; i++) {
//            for (int j = 0; j < X; j++) {
//                if (a[i][j] == 0 && dist[i][j] == 0) {
//                    ans = 0;
//                }
//            }
//        }
//
//        printf("%d", ans-1);
//    }
//
//    return 0;
//}