//#include <iostream>
//
//using namespace std;
//
//int main(void) {
//    int input;
//    int a, b, c, d;
//    int count = 0;
//    cin >> input;
//    d = input;
//
//    for (int i = 1; i <= input; i++) {
//        if (i >= 1 && i < 100) {
//            count++;
//        }
//        else {
//            //110  d=110
//            d %= 1000;
//            b = d / 100; //b=1
//            d %= 100; //d=10
//            c = d / 10; //c=1
//            d %= 10; // d = 0
//
//            if ((d - c) == (c - b))
//            {
//                count++;
//            }
//
//        }
//    }
//    cout << count <<'\n';
//    return 0;
//}