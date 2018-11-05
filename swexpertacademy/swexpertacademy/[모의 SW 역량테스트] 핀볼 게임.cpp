//#include<iostream>
//#include <cstring>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//int map[105][105];
//bool check[105][105];
//int sy, sx;
//int dy[4] = { -1,0,0,1 };
//int dx[4] = { 0,-1,1,0 };
//
//struct Point {
//    int y, x;
//
//    Point(int y2, int x2) {
//        y = y2;
//        x = x2;
//    }
//
//    Point() {}
//};
//
//vector<Point> hall[12];
//
//
//int go(int y, int x, int dir) {
//    int ret = 0;
//
//    if (y == sy && x == sx) {
//        if (!check[y][x]) {
//            check[y][x] = true;
//        }
//        else {
//            return 0;
//        }
//    }
//
//    ret = 0;
//    int ny = y + dy[dir];
//    int nx = x + dx[dir];
//
//    if (map[ny][nx] == -1) {
//        return ret = 0;
//    }
//
//    if (map[ny][nx] == -2 || (map[ny][nx] >= 1 && map[ny][nx] <= 5)) {
//        if (map[ny][nx] == -2 || map[ny][nx] == 5) {
//            return ret = 1 + go(ny, nx, 3 - dir);
//        }
//        else if (map[ny][nx] == 1) {
//            if (dir == 0 || dir == 2) {
//                return ret = 1 + go(ny, nx, 3 - dir);
//            }
//            else {
//                return ret = 1 + go(ny, nx, dir - 1);
//            }
//        }
//        else if (map[ny][nx] == 2) {
//            if (dir == 2 || dir == 3) {
//                return ret = 1 + go(ny, nx, 3 - dir);
//            }
//            else {
//                return ret = 1 + go(ny, nx, dir + 2);
//            }
//        }
//        else if (map[ny][nx] == 3) {
//            if (dir == 1 || dir == 3) {
//                return ret = 1 + go(ny, nx, 3 - dir);
//            }
//            else {
//                return ret = 1 + go(ny, nx, dir + 1);
//            }
//        }
//        else if (map[ny][nx] == 4) {
//            if (dir == 0 || dir == 1) {
//                return ret = 1 + go(ny, nx, 3 - dir);
//            }
//            else {
//                return ret = 1 + go(ny, nx, dir - 2);
//            }
//        }
//    }
//    else if (map[ny][nx] >= 6 && map[ny][nx] <= 10) {
//        if (hall[map[ny][nx]][0].y == ny && hall[map[ny][nx]][0].x == nx) {
//            return ret = go(hall[map[ny][nx]][1].y, hall[map[ny][nx]][1].x, dir);
//        }
//        else {
//            return ret = go(hall[map[ny][nx]][0].y, hall[map[ny][nx]][0].x, dir);
//        }
//    }
//    else {
//       while (map[ny][nx] == 0) {
//            ny = ny + dy[dir];
//            nx = nx + dx[dir];
//
//            if (y == sy && x == sx) {
//                if (!check[y][x]) {
//                    check[y][x] = true;
//                }
//                else {
//                    return 0;
//                }
//            }
//        }
//
//        ny = ny - dy[dir];
//        nx = nx - dx[dir];
//
//        return ret = go(ny, nx, dir);
//    }
//
//    return ret = go(ny, nx, dir);
//}
//
//int main(int argc, char** argv)
//{
//    int test_case;
//    int T;
//  
//    scanf("%d", &T);
//
//    for (test_case = 1; test_case <= T; ++test_case)
//    {
//        int N;
//        
//        scanf("%d", &N);
//
//        for (int i = 0; i < 11; i++) {
//            hall[i].clear();
//        }
//
//        //memset(map,0,sizeof(map));
//        for (int i = 0; i <= N + 1; i++) {
//            for (int j = 0; j <= N + 1; j++) {
//                if (i == 0 || j == 0 || i == N + 1 || j == N + 1) {
//                    map[i][j] = -2;
//                    continue;
//                }
//
//                scanf("%d", &map[i][j]);
//
//                if (map[i][j] >= 6 && map[i][j] <= 10) {
//                    hall[map[i][j]].push_back(Point(i, j));
//                }
//            }
//        }
//
//        int ans = 0;
//
//        for (int i = 1; i <= N; i++) {
//            for (int j = 1; j <= N; j++) {
//                for (int k = 0; k < 4; k++) {
//                    if (map[i][j] == 0) {
//                        sy = i;
//                        sx = j;
//                        //printf("%d %d\n", i, j);
//                        ans = max(ans, go(i, j, k));
//                        check[i][j] = false;
//                    }
//                }
//            }
//        }
//
//        printf("%d\n", ans==0?ans:ans - 1);
//      
//    }
//    return 0;
//}