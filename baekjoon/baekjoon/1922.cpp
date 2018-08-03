//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//struct Point {
//    int from, to, val;
//
//    Point(int from2, int to2, int val2) {
//        from = from2;
//        to = to2;
//        val = val2;
//    }
//
//    Point() {}
//};
//
//int p[1001];
//
//int _find(int x) {
//    if (x == p[x]) {
//        return x;
//    }
//    else {
//        return p[x] = _find(p[x]);
//    }
//}
//
//void _union(int a, int b) {
//    a = _find(a);
//    b = _find(b);
//    p[a] = b;
//}
//
//bool cmp(const Point &u, const Point &v) {
//    return u.val < v.val;
//}
//
//int main(void) {
//    int N, M;
//
//    scanf("%d %d", &N, &M);
//
//    for (int i = 1; i <= N; i++) {
//        p[i] = i;
//    }
//
//    vector<Point> computer(M);
//
//    for (int i = 0; i < M; i++) {
//        scanf("%d %d %d", &computer[i].from, &computer[i].to, &computer[i].val);
//    }
//
//    sort(computer.begin(), computer.end(), cmp);
//    int ans = 0;
//
//    for (int i = 0; i < M; i++) {
//        int from = computer[i].from;
//        int to = computer[i].to;
//        int val = computer[i].val;
//
//        if (_find(from) != _find(to)) {
//            _union(from, to);
//            ans += val;
//        }
//    }
//
//    printf("%d\n", ans);
//
//    return 0;
//}