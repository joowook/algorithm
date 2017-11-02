//#include <iostream>
//#include <string>
//using namespace std;
//
//int map[65][65];
//string s;
//void dfs(int x, int y, int n) {
//    int count = 0;
//    for (int i = x; i < x + n; i++) {
//        for (int j = y; j < y + n; j++) {
//            count += map[i][j];
//        }
//    }
//
//    if (count == 0) {
//        s += (count + '0');
//    }
//    else if (count == n*n) {
//        s += (1 + '0');
//    }
//    else {
//        s += '(';
//        dfs(x, y, n / 2);
//        dfs(x, y + n / 2, n / 2);
//        dfs(x + n / 2, y, n / 2);
//        dfs(x + n / 2, y + n / 2, n / 2);
//        s += ')';
//    }
//}
//int main(void) {
//    int N;
//    scanf("%d", &N);
//
//    for (int i = 0; i < N; i++) {
//        for (int j = 0; j < N; j++) {
//            scanf("%1d", &map[i][j]);
//        }
//    }
//
//    dfs(0, 0, N);
//
//
//    cout << s;
//
//    return 0;
//}