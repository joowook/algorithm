//#include <iostream>
//using namespace std;
//
//int max(int a, int b) { return abs(a) > abs(b) ? abs(a) : abs(b); }
//int abs(int a) { return a > 0 ? a : -a; }
//int gcd(int a, int b) {
//    if (b == 0) {
//        return a;
//    }
//    else {
//        return gcd(b, a%b);
//    }
//}
//int main(void) {
//    int M, N;
//
//    scanf("%d %d", &M, &N);
//
//    if (M == 0 && N == 0) {
//        printf("0\n");
//    }
//    else if (gcd(abs(M), abs(N)) == 1) {
//        printf("1\n");
//    }
//    else {
//        printf("2\n");
//    }
//
//    return 0;
//}