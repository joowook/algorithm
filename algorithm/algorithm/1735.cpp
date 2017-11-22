//#include <iostream>
//using namespace std;
//
//int gcd(int b1, int b2) {
//    if (b2 != 0) {
//        return gcd(b2, b1 % b2);
//
//    }
//    else
//        return b1;
//}
//int main(void) {
//    int a1, b1, a2, b2, a3, b3;
//
//    scanf("%d %d", &a1, &b1);
//    scanf("%d %d", &a2, &b2);
//
//    b3 = b1*b2;
//    a3 = a1*b2 + a2*b1;
//    
//    int g = gcd(a3, b3);
//
//    a3 /= g;
//    b3 /= g;
//
//    printf("%d %d", a3, b3);
//
//    return 0;
//}