//#include <string>
//#include <vector>
//#include <algorithm>
//#include <queue>
//using namespace std;
//
//struct Point {
//    int x, y, v, Max, Min;
//
//    Point(int x2, int y2, int v2, int Max2, int Min2) {
//        x = x2;
//        y = y2;
//        v = v2;
//        Max = Max2;
//        Min = Min2;
//    }
//
//    Point() {}
//};
//
//bool cmp(Point &u, Point &v) {
//    if (u.y == v.y) {
//        return u.x < v.x;
//    }
//    else {
//        return u.y > v.y;
//    }
//}
//
//bool check[10001];
//vector<int> v[10001];
//
//int max(int a, int b) { return a > b ? a : b; }
//int min(int a, int b) { return a > b ? b : a; }
//vector<vector<int>> solution(vector<vector<int>> nodeinfo) {
//    vector<vector<int>> answer;
//    vector<Point> tmp(nodeinfo.size());
//
//    for (int i = 0; i < nodeinfo.size(); i++) {
//        tmp[i] = Point(nodeinfo[i][0], nodeinfo[i][1], i + 1, nodeinfo[i][0], nodeinfo[i][0]);
//    }
//
//    sort(tmp.begin(), tmp.end(), cmp);
//    
//    queue<Point> q;
//    
//    for (int i = 0; i < nodeinfo.size(); i++) {
//        Point now = tmp[i];
//        if (!check[now.v]) {
//            int t = i + 1;
//            while (true) { //left
//                Point next = tmp[t];
//                if (!check[next.v]) {
//                    if (next.x < now.Min) { //yµµ ºñ±³?
//                        v[now.v].push_back(next.v);
//                        next.Min = min(now.Min, next.x);
//                        next.Max = max(next.Max, now.Max);
//                        
//                        break;
//                    }
//                }
//                t++;
//            }
//
//            t = i + 1;
//            while (true) {
//                Point next = tmp[t];
//                if (!check[next.v]) {
//                    if (next.x > now.Max) {
//                        v[now.v].push_back(next.v);
//                        next.Min = min(now.Min, next.Min);
//                        next.Max = max(next.Max, now.Max);
//
//                        break;
//                    }
//                }
//
//                t++;
//            }
//        }
//    }
//
//    /*for (int i = 0; i < v.size(); i++) {
//        printf("%d %d\n", v[i].first, v[i].second);
//    }*/
//
//    return answer;
//}
//
//int main(void) {    
//    vector<vector<int>> nodeinfo;
//    vector<vector<int>> answer;
//
//    nodeinfo[0].push_back(3);
//    
//    answer = solution(nodeinfo);
//
//
//    return 0;
//}