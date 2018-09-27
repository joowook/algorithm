//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//#include <cmath>
//
//using namespace std;
//
//struct Point {
//    long double fail;
//    int stage;
//
//    Point(double f, int s) :fail(f), stage(s) {}
//    Point() {}
//
//};
//
//int a[510];
//int sum[300000];
//
//bool cmp(Point &u, Point &v) {
//    if (u.fail == v.fail) {
//        return u.stage < v.stage;
//    }
//    else {
//        return u.fail > v.fail;
//    }
//}
//
//int max(int a, int b) { return a > b ? a : b; }
//int min(int a, int  b) { return a < b ? a : b; }
//vector<int> solution(int N, vector<int> stages) {
//    vector<int> answer;
//    vector<Point> tmp;
//
//    int Max = 0;
//    for (int i = 0; i < stages.size(); i++) {
//        a[stages[i]]++;
//        Max = max(Max, stages[i]);
//    }
//
//    for (int i = 1; i <= N + 1; i++) {
//        sum[i] = sum[i - 1] + a[i];
//    }
//
//    for (int i = 1; i <= N; i++) {
//        if (a[i] == 0) {
//            tmp.push_back(Point(0, i));
//        }
//        else {
//            tmp.push_back(Point((double)(a[i]) / (sum[N + 1] - sum[i - 1]), i));
//        }
//    }
//
//    sort(tmp.begin(), tmp.end(), cmp);
//
//    for (int i = 0; i < tmp.size(); i++) {
//        answer.push_back(tmp[i].stage);
//    }
//
//    return answer;
//}