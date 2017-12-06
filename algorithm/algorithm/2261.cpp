//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//struct Point {
//    int x, y;
//
//    Point() {};
//    Point(int x2, int y2) {
//        x = x2;
//        y = y2;
//    }
//};
//
//bool cmp(const Point &u, const Point &v) {
//    if (u.x < v.x)
//        return true;
//    else if (u.x == v.x) {
//        return u.y < v.y;
//    }
//    else
//        return false;
//}
//
//bool cmp2(const Point &u, const Point &v) {
//    if (u.y < v.y) {
//        return true;
//    }
//    else if (u.y == v.y) {
//        return u.x < v.x;
//    }
//    else
//        return false;
//}
//
//int length(Point a, Point b) {
//    return (b.x - a.x)*(b.x - a.x) + (b.y - a.y)*(b.y - a.y);
//}
//
//int brute_force(vector<Point> &v, int left, int right) {
//    int ans = 1000000000;
//    for (int i = left; i <= right - 1; i++) {
//        for (int j = i + 1; j <= right; j++) {
//            ans = min(ans, length(v[i], v[j]));
//        }
//    }
//
//    return ans;
//}
//int closet(vector<Point> &v, int left, int right) {
//    /*if (left + 1 == right) {
//        return length(v[left], v[right]);
//    }*/
//    if (right - left + 1 <= 3) {
//        return brute_force(v, left, right);
//    }
//    int mid = left + (right - left) / 2;
//    int Min = min(closet(v, left, mid) ,closet(v, mid+1, right));
//    
//    vector<Point> u;
//    for (int i = left; i < right; i++) {
//        int d = v[mid].x - v[i].x;
//        if (d*d <= Min) {
//            u.push_back(v[i]);
//        }
//    }
//    sort(u.begin(), u.end(), cmp2);
//    int m = u.size();
//
//    for (int i = 0; i < m - 1; i++) {
//        for (int j = i+1; j < m; j++) {
//            int d = u[j].y - u[i].y;
//            
//            if (d*d >= Min) {
//                break;
//            }
//            else {
//                Min = min(Min, length(u[i], u[j]));
//            }
//        }
//    }
//
//    return Min;
//}
//int main(void) {
//    int n;
//
//    scanf("%d", &n);
//    vector <Point> v(n);
//
//    for (int i = 0; i < n; i++) {
//        scanf("%d %d", &v[i].x, &v[i].y);
//    }
//
//    sort(v.begin(), v.end(), cmp);
//
//    printf("%d\n", closet(v, 0, n - 1));
//
//    return 0;
//}