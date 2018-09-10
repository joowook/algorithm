//#include <iostream>
//using namespace std;
//
//long long gcd(long long a, long long b) {
//    if (b == 0) {
//        return a;
//    }
//    else {
//        return gcd(b, a%b);
//    }
//}
//
//int main(void) {
//    long long A, B;
//    
//    scanf("%lld %lld", &A, &B);
//
//    printf("%lld\n", A*B / (long long)gcd(A, B));
//
//    return 0;
//}