//#include <iostream>
//using namespace std;
//
//int main(void) {
//    int n;
//    cin >> n;
//    int moc = n / 10;
//    int nam = n % 10;
//    int ans = n;
//    int count = 0;
//    do {
//        moc = ans / 10;
//        nam = ans % 10;
//        ans = nam * 10 + (moc + nam)%10;
//        count++;
//    } while (ans != n);
//
//    cout << count;
//
//    return 0;
//}