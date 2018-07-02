//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int Answer;
//
//int check[10001], n;
//int test_case;
//
//int go() {
//    for (int i = 1; i <= n; i++) {
//        if (check[i] == 1) {
//            for (int j = 1; j <= n / 3; j++) {
//                if (check[j] == 1 && check[n - i - j] == 1) {
//                    int v[3] = { i,j,n - i - j };
//            
//                    sort(v, v+3);
//
//                    cout << "Case #" << test_case + 1 << '\n';
//                    cout << "3 " << v[2] << " " << v[1] << " " << v[0] << '\n';
//
//                    return true;
//                }
//            }
//        }
//    }
//
//    return false;
//}
//
//void init() {
//    for (int i = 1; i < 10; i++) { // 1
//        check[i] = 1;
//    }
//    for (int i = 11; i < 100; i += 11) { // 10
//        check[i] = 1;
//    }
//
//    for (int j = 0; j < 9; j++) { //100
//        for (int i = 101 + 101 * j; i < 200 + j * 100; i += 10) {
//            check[i] = 1;
//        }
//    }
//
//    for (int j = 0; j < 9; j++) {
//        for (int i = 1001 + 1001 * j; i < 2000 + j * 1000; i += 110) {
//            check[i] = 1;
//        }
//    }
//}
//
//int main(int argc, char** argv)
//{
//    int T;
//    
//    init();
//
//    cin >> T;
//    for (test_case = 0; test_case < T; test_case++)
//    {
//        Answer = 0;
//        bool flag = false;
//        cin >> n;
//
//        if (check[n] == 1) {
//            
//            cout << "Case #" << test_case + 1 << '\n';
//            cout << "1 " << n << '\n';
//
//            continue;
//        }
//        else {
//            for (int i = 1; i <= n; i++) {
//                if (check[i] == 1 && check[n - i] == 1) {
//                    cout << "Case #" << test_case + 1 << '\n';
//                  
//                    if (i < n - i) {
//                        cout << "2 " << n - i << " ";
//                        cout << i << '\n';
//                        flag = true;
//                    }
//                    else {
//                        cout << "2 " << i <<" ";
//                        cout << n - i << '\n';
//                        flag = true;
//                    }
//                    
//                    break;
//                }
//            }
//        }
//
//        if (!flag) { // 3°³
//            if (!go()) {
//                cout << "Case #" << test_case + 1 << '\n';
//                cout << 0 << '\n';
//            }
//        }
//        
//    }
//
//    return 0;
//}