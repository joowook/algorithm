//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <cmath>
//using namespace std;
//
//int main(void) {
//    int N, K;
//
//    scanf("%d %d", &N, &K);
//
//    vector<int> a(N + 1);
//
//    for (int i = 0; i < N; i++) {
//        scanf("%d", &a[i]);
//    }
//
//    long long bunsan = 0;
//    double Min = 2000000000;
//
//    for (int i = 0; i < N; i++) {
//        for (int j = i + K; j<= N; j++) {
//            double m = 0;
//
//            for (int k = i; k < j; k++) {
//                m += a[k];
//            }
//
//            m /= j   - i;
//
//            double bunsan = 0;
//            for (int k = i; k < j; k++) {
//                bunsan += pow(a[k] - m, 2);
//            }
//            bunsan /= j-i;
//
//            bunsan = sqrt(bunsan);
//            Min=min(Min, bunsan);
//            /*Min = min(Min, cal(i, k));*/
//        }
//    }
//   
//    printf("%.011lf\n", Min);
//
//    return 0;
//}