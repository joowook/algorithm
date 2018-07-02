//#include <iostream>
//using namespace std;
//
//void go(int N, int a, int b, int c) {
//    if (N == 1) {
//        printf("%d %d\n", a, c);
//
//        return;
//    }
//
//    go(N - 1, a, c, b);
//    printf("%d %d\n", a, c);
//    go(N - 1, b, a, c);
//}
//
//int main(void) {
//    int N;
//
//    scanf("%d", &N);
//
//    printf("%d\n", (1 << N) - 1);
//
//    go(N, 1, 2, 3);
//
//    return 0;
//}