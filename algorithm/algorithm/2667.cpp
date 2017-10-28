//#include <iostream>
//#include <queue>
//#include <algorithm>
//using namespace std;
//
//int check[26][26];
//int a[26][26];
//int c[26*26];
//int n=0;
//int direct[4] = { -1,1,0,0 };
//
//void bfs(int x, int y, int cnt) {
//    check[x][y] = cnt;
//    queue<pair<int, int>> q;
//    q.push(make_pair(x, y));
//
//    while (!q.empty()) {
//        int x2 = q.front().first;
//        int y2 = q.front().second;
//        q.pop();
//        for (int i = 0; i < 4; i++) {
//            int next_x = x2 + direct[i];
//            int next_y = y2 + direct[(i + 2) % 4];
//            if (next_x > 0 && next_x <= n && next_y > 0 && next_y <=n) {
//                if (!check[next_x][next_y] && a[next_x][next_y] == 1) {
//                    check[next_x][next_y] = cnt;
//                    q.push(make_pair(next_x, next_y));
//                }
//            }
//        }
//    } 
//}
//int main(void) {
//    int cnt = 0;
//    string s = "";
//    scanf("%d", &n);
//
//    for (int i = 1; i <= n; i++) {
//        for (int j = 1; j <= n; j++) {
//            scanf("%1d", &a[i][j]);
//        }
//    }
//    for (int i = 1; i <= n; i++) {
//        for (int j = 1; j <= n; j++) {
//            if (!check[i][j] && a[i][j] == 1) {
//                bfs(i, j, ++cnt);
//
//            }
//        }
//    }
//
//    for (int i = 1; i <= n; i++) {
//        for (int j = 1; j <= n; j++) {
//            c[check[i][j]]++;
//        }
//    }
//    sort(c+1, c+cnt+1);
//   
//    printf("%d\n", cnt);
//
//    for (int i = 1; i <= cnt; i++) {
//        printf("%d\n", c[i]);
//   }
//
//    return 0;
//}