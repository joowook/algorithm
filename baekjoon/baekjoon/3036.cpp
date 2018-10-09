//#include <iostream>
//#include <vector>
//using namespace std;
//
//int gcd(int a, int b) {
//    if (a%b == 0) {
//        return b;
//    }
//    else {
//        return gcd(b, a % b);
//    }
//}
//int main(void) {
//    int N;
//
//    scanf("%d", &N);
//
//    vector<int> a(N);
//
//    for (int i = 0; i < N; i++) {
//        scanf("%d", &a[i]);
//    }
//
//    for (int i = 1; i < N; i++) {
//        int g = gcd(a[0], a[i]);
//
//        printf("%d/%d\n", a[0] / g, a[i] / g);
//    }
//
//    return 0;
//}