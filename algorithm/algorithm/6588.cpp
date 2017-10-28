//#include <iostream>
//using namespace std;
//const int MAX = 1000000;
//bool check[MAX + 1];
//int arr[MAX + 1];
//
//int main(void) {
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//
//    int ct = 0;
//    int n;
//
//    check[0] = check[1] = true;
//
//    for (int i = 2; i*i <= MAX; i++) {
//        if (check[i] == false) {
//            arr[ct++] = i;
//            
//            for (int j = 2*i; j <= MAX; j += i) {
//                check[j] = true;
//            }
//        }
//    }
//    while (1) {
//        cin >> n;
//
//        if (n == 0)
//            break;
//
//        for (int i = 0; i < ct; i++) {
//            if (!check[n - arr[i]]) {
//                cout << n << " = " << arr[i] << " + " << n - arr[i] << '\n';
//                break;
//            }
//        }
//
//    }
//
//    return 0;
//}