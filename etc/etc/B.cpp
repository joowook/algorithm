//#include <iostream>
//using namespace std;
//
//int main() {
//    int a, b, n, w;
//    int x = 0, y = 0, cnt = 0;
//    cin >> a >> b >> n >> w;
//
//    for (int i = 1; i <= n; i++) {
//        for (int j = 1; j <= n; j++) {
//            if (i + j == n) {
//                if ((a*i) + (b*j) == w) {
//                    x = i;
//                    y = j;
//                    cnt++;
//                }
//            }
//        }
//    }
//
//    if (cnt != 1 || cnt > 1) {
//        cout << "-1" << '\n';
//    }
//    else {
//        cout << x << ' ' << y << '\n';
//    }
//
//    return 0;
//}