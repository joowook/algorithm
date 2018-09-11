//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//struct Point {
//    int from, to, cost;
//
//    Point(int f, int t, int c) :from(f), to(t), cost(c) {}
//    Point() {}
//
//    bool operator<(Point &u) const {
//        return cost < u.cost;
//    }
//};
//
//int p[100001];
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
//int main(void) {
//
//    ios::sync_with_stdio(false);
//    cin.tie(0);
//
//    int N, M;
//
//    cin >> N >> M;
//
//    vector<Point> tree(M);
//    for (int i = 0; i < M; i++) {
//        cin >> tree[i].from >> tree[i].to >> tree[i].cost;
//    }
//
//    for (int i = 1; i <= N; i++) {
//        p[i] = i;
//    }
//
//    sort(tree.begin(), tree.end());
//
//    int ans = 0;
//    int last = 0;
//    int cnt = 0;
//
//    for (int i = 0; i < tree.size(); i++) {
//        int from = tree[i].from;
//        int to = tree[i].to;
//        int cost = tree[i].cost;
//
//        if (_find(from) != _find(to)) {
//            ans += cost;
//            _union(from, to);
//            last = cost;
//            cnt++;
//            if (cnt == N) break;
//        }
//    }
//
//    cout << ans - last << '\n';
//
//    return 0;
//}