//#include <iostream>
//using namespace std;
//
//int gcd(int a, int b) {
//    while (b != 0) {
//        int tmp;
//        tmp = a;
//        a = b;
//        b = tmp%b;
//    }
//
//    return a;
//}
//int main(void) {
//    int T, N;
//    int tc[100];
//
//    cin >> T;
//    while (T--) {
//        int total = 0;
//        cin >> N;
//        for (int i = 0; i < N; i++) {
//            cin >> tc[i];
//        }
//
//        for (int j = 0; j < N - 1; j++) {
//            for (int i = j + 1; i < N; i++) {
//                total += gcd(tc[j], tc[i]);
//            }
//        }
//
//        cout << total << endl;
//
//    }
//
//    return 0;
//}