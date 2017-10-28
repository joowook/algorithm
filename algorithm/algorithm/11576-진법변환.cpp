//#include <iostream>
//#include <string>
//#include <stack>
//#include <algorithm>
//using namespace std;
//
//int main(void) {
//    int A, B, n;
//    int total = 0;
//    int x = 1;
//
//    cin >> A >> B;
//    cin >> n;
//
//    for(int i=0; i<n; i++) {
//        int ex;
//        cin >> ex;
//        total = total * A + ex;
//    }
//    if (n == 1 && total == 0)
//        cout << '0';
//
//    stack <int> s;
//    while (total) {
//         int moc = total / B;
//         int nam = total % B;
//         s.push(nam);
//         total = moc;
//    }
//    while (!s.empty()) {
//        cout << s.top() << " ";
//        s.pop();
//    }
//
//    return 0;
//
//}