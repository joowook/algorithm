//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main(void) {
//    int T;
//
//    scanf("%d", &T);
//
//    for (int test_case = 1; test_case <= T; test_case++) {
//        int N, P, M;
//
//        scanf("%d %d %d", &N, &P, &M);
//
//        vector<int> a(N);
//
//        for (int i = 0; i < N; i++) {
//            scanf("%d", &a[i]);
//        }
//
//        sort(a.begin() + 1, a.end());
//
//        long long ans = a[0];
//        int index = M + 1;
//
//        for (int i = 1; i <= M; i++) {
//            ans -= a[i];
//        }
//
//        for (int i = M + 1; i < N; i++) {
//            ans += a[i];
//        }
//
//        printf("#%d %lld\n", test_case, ans);
//    }
//
//    return 0;
//}