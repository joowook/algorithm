//#include <iostream>
//using namespace std;
//
//bool prime(int n) {
//    if (n < 2)
//        return false;
//    else {
//        for (int i = 2; i*i <= n; i++) {
//            if (n% i == 0)
//                return false;
//        }
//    }
//
//    return true;
//}
//
//int main(void) {
//    int T;
//    int count = 0;
//    cin >> T;
//
//    while (T--) {
//        int n;
//        cin >> n;
//        if (prime(n)) {
//            count++;
//        }
//
//    }
//
//    cout << count;
//
//    getchar();
//    getchar();
//
//    return 0;
//}