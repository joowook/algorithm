//#include <iostream>
//using namespace std;
//
//int gcd(int a, int b) {
//    if (a%b == 0) {
//        return b;
//    }
//    else {
//        return gcd(b, a%b);
//    }
//}
//
//int main(void) {
//    int x1, y1, x2, y2;
//
//    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
//
//    int x3, y3;
//
//    y3 = y1*y2;
//    x3 = x1*y2 + x2*y1;
//
//    int g = gcd(x3, y3);
//
//    printf("%d %d\n", x3 / g, y3 / g);
//
//    return 0;
//}