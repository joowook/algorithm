//#include <iostream>
//using namespace std;
//
//int p[1000001];
//
//int _find(int x) {
//    if (p[x] == x) {
//        return p[x] = x;
//    }
//    else {
//        return p[x] = _find(p[x]);
//    }
//}
//
//void _union(int x, int y) {
//    x = _find(x);
//    y = _find(y);
//    p[x] = y;
//}
//
//int main(void) {
//    int n, m;
//
//    scanf("%d %d", &n, &m);
//
//    for (int i = 1; i <= n; i++) {
//        p[i] = i;
//    }
//
//    for (int i = 0; i < m; i++) {
//        int flag, x, y;
//
//        scanf("%d %d %d", &flag, &x, &y);
//
//        if (flag == 0) {
//            _union(x, y);
//        }
//        else {
//            if (_find(x) == _find(y)) {
//                printf("YES\n");
//            }
//            else {
//                printf("NO\n");
//            }
//        }
//    }
//
//    return 0;
//}