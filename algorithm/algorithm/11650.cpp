//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//struct Point {
//    int x;
//    int y;
//};
//
//bool cmp(const Point &u, const Point &v) {
//    if (u.x < v.x) {
//        return true;
//    }
//    else if (u.x == v.x) {
//        return u.y < v.y;
//    }
//    else {
//        return false;
//    }
//}
//
//int main(void) {
//    int n;
//
//    scanf("%d", &n);
//    vector<Point> a(n);
//    for (int i = 0; i < n; i++) {
//        scanf("%d %d", &a[i].x, &a[i].y);
//    }
//    
//    sort(a.begin(), a.end(), cmp);
//    for (int i = 0; i < n; i++) {
//        printf("%d %d\n", a[i].x, a[i].y);
//    }
//
//    return 0;
//}
//
//
//
//
//
//
//
//
//
////#include <iostream>
////#include <algorithm>
////#include <vector>
////using namespace std;
////
////int main(void) {
////    int n;
////
////    scanf("%d", &n);
////
////    vector<pair<int, int>> v(n);
////
////    for (int i = 0; i < n; i++) {
////        scanf("%d %d", &v[i].first, &v[i].second);
////    }
////
////    sort(v.begin(), v.end());
////
////    for (int i = 0; i < n; i++) {
////        printf("%d %d\n", v[i]., v[i].second);
////    }
////
////    return 0;
////}
