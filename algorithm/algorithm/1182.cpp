//#include <iostream> //비트마스크
//using namespace std;
//
//int a[20];
//int main(void) {
//    int N, S;
//
//    scanf("%d %d", &N, &S);
//
//    for (int i = 0; i < N; i++) {
//        scanf("%d", &a[i]);
//    }
//
//    int ans = 0;
//
//    int n = (1 << N);
//    for (int i = 1; i < n; i++) {
//        int sum = 0;
//        for (int j = 0; j < N; j++) {
//            if (i&(1 << j)) {
//                sum += a[j];
//            }
//        }
//
//        if (sum == S) {
//            ans += 1;
//        }
//    }
//
//    printf("%d\n", ans);
//
//    return 0;
//}
//
////#include <iostream>
////using namespace std;
////
////int N, S;
////int a[20];
////int ans;
////
////void go(int index, int sum) {
////    if (index == N) {
////        if (sum == S) {
////            ans += 1;
////        }
////        return;
////    }
////
////    go(index + 1, sum + a[index]);
////    go(index + 1, sum);
////
////}
////int main(void) {
////    scanf("%d %d", &N, &S);
////
////    for (int i = 0; i < N; i++) {
////        scanf("%d", &a[i]);
////    }
////
////    go(0, 0);
////
////    if (S == 0) {
////        ans -= 1;
////    }
////
////    printf("%d\n", ans);
////
////    return 0;
////}