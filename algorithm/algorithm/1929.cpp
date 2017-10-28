//#include <iostream>
//using namespace std;
//
//const int MAX = 1000000;
//bool check[MAX+1];
//int main(void) {
//    int a, b;
//
//    cin >> a >> b;
//
//    check[0] = check[1] = true;
//
//    for (int i = 2; i*i <= MAX; i++) {
//        if (check[i] == false) {
//            
//            for (int j = 2*i; j <=MAX; j += i) {
//                check[j] = true;
//            }
//        }
//    }
//    for (int i = a; i <= b; i++) {
//        if (check[i] == false) {
//            cout << i << endl;
//        }
//    }
//
//    return 0;
//}