//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main(void) {
//    int N;
//
//    cin >> N;
//    vector <int> a(N + 1);
//    vector <int> d(N + 1);
//    vector <int> d2(N + 1);
//    //int a[1001] = { 0 };
//    //int d[1001] = { 0 };
//    //int d2[1001] = { 0 };
//
//    for (int i = 1; i <= N; i++) {
//        cin >> a[i];
//    }
//
//    for (int i = 1; i <= N; i++) {
//        d[i] = 1;
//        for (int j = 1; j < i; j++) {
//            if (a[i] > a[j] && d[i] < d[j] + 1)
//                d[i] = d[j] + 1;
//        }
//    }
//    
//    for (int i = N; i >=1; i--) {
//        d2[i] = 1;
//        for (int j = N; j >i; j--) {
//            if (a[i] > a[j] && d2[i] < d2[j] + 1)
//                d2[i] = d2[j] + 1;
//        }
//    }
//
//    int ans = 0;
//
//    for (int i = 1; i <= N; i++) {
//        if (ans < d[i] + d2[i])
//            ans = d[i] + d2[i];
//    }
//
//    cout << ans - 1;
//
//    return 0;
//}