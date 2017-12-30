//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//int calculate(vector <int> &a) {
//    int tmp = 0;
//    for (int i = 1; i < (int)a.size(); i++) {
//        tmp += abs(a[i-1] - a[i]);
//    }
//
//    return tmp;
//}
//int main(void) {
//    int n;
//
//    scanf("%d", &n);
//    vector <int> a(n);
//
//    for (int i = 0; i < n; i++) {
//        scanf("%d", &a[i]);
//    }
//
//    sort(a.begin(), a.end());
//    int ans = 0;
//
//    do {
//        int tmp = calculate(a);
//        if (ans < tmp) {
//            ans = tmp;
//        }
//    } while (next_permutation(a.begin(), a.end()));
//
//    printf("%d\n", ans);
//
//    return 0;
//}