//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//int ans = 0;
//
//int main(void) {
//    int n, m;
//
//    vector<int> a;
//
//    scanf("%d", &n);
//    a.resize(n);
//
//    for (int i = 0; i < n; i++) {
//        scanf("%d", &a[i]);
//    }
//
//    scanf("%d", &m);
//
//    sort(a.begin(), a.end());
//
//    for (int i = 0; i < m; i++) {
//        int input;
//        scanf("%d", &input);
//        auto p = equal_range(a.begin(), a.end(), input);
//        printf("%d ", p.second - p.first);
//        //auto left = lower_bound(a.begin(), a.end(), input);
//        ////int l = distance(a.begin(), left); int r = distance(a.begin(), right); ÀÎµ¦½º
//        //auto right = upper_bound(a.begin(), a.end(), input);
//        //printf("%d ", right - left);
//    }
//
//    return 0;
//}