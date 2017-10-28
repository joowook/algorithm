//#include <iostream>
//using namespace std;
//
//int main(void) {
//    long long d[31] = { 0 };
//
//    int N;
//
//    scanf("%d", &N);
//
//    d[0] = 1;
//
//    for (int i = 2; i <= N; i++) {
//        d[i] = 3 * d[i - 2];
//        for (int j = 4; j <= i; j+=2) {
//            d[i] = d[i] + 2 * d[i - j];
//        }
//    }
//
//    printf("%lld", d[N]);
//
//    return 0;
//}