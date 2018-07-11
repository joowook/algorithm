//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int Answer, N;
//
//struct Point {
//    int x, y, H;
//
//    Point() {}
//    Point(int x2, int y2, int H2) {
//        x = x2;
//        y = y2;
//        H = H2;
//    }
//};
//
//bool cmp(const Point &u, const Point &v) {
//    return u.y < v.y;
//}
//
//int gogo(vector<Point> &a, int index, int cnt, int Max) {
//    int ans = 0;
//
//    if (index == N - 1) {
//        return cnt;
//    }
//
//    if (a[index + 1].y >= Max && a[index + 1].y <= Max + a[index + 1].H) {
//        Max = max(a[index + 1].y, Max + a[index + 1].H);
//        ans = gogo(a, index + 1, cnt, Max);
//    }
//    else if (a[index + 1].y >= Max + a[index + 1].H) {
//        Max = a[index + 1].y; //위에 까지 붙이기
//        ans = gogo(a, index + 1, cnt, Max);
//        Max = Max + a[index + 1].H;
//        ans = max(ans, gogo(a, index + 1, cnt + 1, Max));
//    }
//    else {
//        Max = max(a[index + 1].y, Max + a[index + 1].H);
//        ans = gogo(a, index + 1, cnt + 1, Max);
//    }
//
//    return ans;
//}
//int go(vector<Point> &a) {
//    int cnt = 0;
//    int ans = 2000000000;
//
//    int Max = a[0].y;
//    ans = gogo(a, 0, cnt, Max);
//
//    return ans;
//}
//int main(int argc, char** argv)
//{
//    int T, test_case;
//
//    cin >> T;
//
//    for (test_case = 0; test_case < T; test_case++)
//    {
//
//        Answer = 1000000000;
//
//        cin >> N;
//
//        vector<Point> a(N);
//
//        for (int i = 0; i < N; i++) {
//            cin >> a[i].x >> a[i].y >> a[i].H;
//        }
//
//        sort(a.begin(), a.end(), cmp);
//
//        Answer = go(a);
//
//        cout << "Case #" << test_case + 1 << endl;
//        cout << Answer << endl;
//    }
//
//    return 0;
//}