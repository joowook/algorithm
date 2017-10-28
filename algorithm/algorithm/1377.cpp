//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main(void) {
//    int n;
//
//    scanf("%d", &n);
//
//    vector<pair <int, int>> a(n+1);
//
//    for (int i = 1; i <= n; i++) {
//        scanf("%d", &a[i].first);
//        a[i].second = i;
//    }
//    int ans = 0;
//
//    sort(a.begin()+1, a.end());
//
//    for (int i = 1; i <= n; i++) {
//        if (ans < a[i].second - i)
//            ans = a[i].second - i;
//    }
//
//    printf("%d", ans+1);
//
//    return 0;
//}