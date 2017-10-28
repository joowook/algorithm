//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//bool cmp(const pair<int, int> &u, const pair<int, int> &v) {
//    if (u.second == v.second) {
//        return u.first < v.first;
//    }
//    else {
//        return u.second < v.second;
//    }
//}
//
//int main(void) {
//    int n;
//    scanf("%d", &n);
//
//    vector<pair<int, int>> a(n);
//
//    for (int i = 0; i < n; i++) {
//        scanf("%d %d", &a[i].first, &a[i].second);
//    }
//    
//    sort(a.begin(), a.end(), cmp);
//
//    for (int i = 0; i < n; i++) {
//        printf("%d %d\n", a[i].first, a[i].second);
//    }
//
//    return 0;
//}
//
//
//
//
////#include <iostream>
////#include <vector>
////#include <algorithm>
////using namespace std;
////int main() {
////    int n;
////    scanf("%d", &n);
////
////    vector<pair<int, int>> a(n);
////
////    for (int i = 0; i < n; i++) {
////        scanf("%d %d", &a[i].second, &a[i].first);
////    }
////    sort(a.begin(), a.end());
////
////    for (int i = 0; i < n; i++) {
////        printf("%d %d\n", a[i].second, a[i].first);
////    }
////
////    return 0;
////}
//////#include <iostream>
//////#include <algorithm>
//////#include <vector>
//////using namespace std;
//////
//////struct Point {
//////    int x;
//////    int y;
//////};
//////
//////bool cmp(const Point &u, const Point &v) {
//////    if (u.y < v.y) {
//////        return true;
//////    }
//////    else if (u.y == v.y) {
//////        return u.x < u.y;
//////    }
//////    else {
//////        return false;
//////    }
//////}
//////
//////int main(void) {
//////    int n;
//////    scanf("%d", &n);
//////
//////    vector<Point> a(n);
//////
//////    for (int i = 0; i < n; i++) {
//////        scanf("%d %d", &a[i].x, &a[i].y);
//////    }
//////    sort(a.begin(), a.end(), cmp);
//////
//////    for (int i = 0; i < n; i++) {
//////        printf("%d %d\n", a[i].x, a[i].y);
//////    }
//////
//////    return 0;
//////}