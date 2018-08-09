//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//#define MAX 2000000000
//
//struct Point {
//    int node, cost;
//
//    Point(int n, int c) {
//        node = n;
//        cost = c;
//    }
//
//    bool operator < (const Point x) const {
//        return cost > x.cost;
//    }
//};
//
//vector<Point> tree[20001];
//int dist[20001];
//
//int main(void) {
//    int V, E;
//    scanf("%d %d", &V, &E);
//
//    int K;
//    scanf("%d", &K);
//
//    int u, v, w;
//
//    for (int i = 0; i < E; i++) {
//        scanf("%d %d %d", &u, &v, &w);
//    
//        tree[u].push_back(Point(v, w));
//    }
//
//    for (int i = 1; i <= V; i++) {
//        dist[i] = MAX;
//    }
//
//    priority_queue<Point> q;
//
//    q.push(Point(K, 0));
//    dist[K] = 0;
//
//    while (!q.empty()) {
//        Point x = q.top();
//        q.pop();
//        
//        int node = x.node;
//        int cost = x.cost;
//
//        for (int i = 0; i < tree[node].size(); i++) {
//            Point nx = tree[node][i];
//            int nnode = nx.node;
//            int ncost = nx.cost;
//
//            if (dist[nnode] > dist[node] + ncost) {
//                dist[nnode] = dist[node] + ncost;
//
//                q.push(Point(nnode, dist[nnode]));
//            }
//        }
//    }
//
//    for (int i = 1; i <= V; i++) {
//        if (dist[i] == MAX) {
//            printf("INF\n");
//        }
//        else {
//
//            printf("%d\n", dist[i]);
//        }
//    }
//
//    return 0;
//}