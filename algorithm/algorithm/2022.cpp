//#include <iostream>
//#include <algorithm>
//#include <cmath>
//using namespace std;
//
//int main(void) {
//    double x, y, c;
//    while (scanf("%lf %lf %lf", &x, &y, &c) == 3) {
//        double left = 0;
//        double right = min(x, y);
//        double mid = 0;
//        while ((right - left) > 1e-6) {
//            mid = (left + right) / 2.0;
//            double h1 = sqrt(x*x - mid*mid);
//            double h2 = sqrt(y*y - mid*mid);
//            double h = h1*h2 / (h1 + h2);
//            if (h >= c) {
//                left = mid;
//            }
//            else {
//                right = mid;
//            }
//        }
//
//        printf("%.3lf\n", mid);
//    }
//
//    return 0;
//}