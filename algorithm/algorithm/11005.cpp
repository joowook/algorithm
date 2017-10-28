//#include <iostream>
//#include <stack>
//using namespace std;
//
//int main(void) {
//    int N, ex;
//    int moc, nam;
//    stack <char> s;
//
//    cin >> N >> ex;
//
//    while (N != 0) {
//        char ch;
//        moc = N / ex;
//        nam = N % ex;
//        if (nam >= 10) { 
//            ch = nam - 10 + 'A';
//        }
//        else {
//            ch = nam + '0';
//        }
//        s.push(ch);
//        N = moc;
//    }
//    while (!s.empty()) {
//        cout << s.top();
//        s.pop();
//    }
//
//    return 0;
//}