//#include <iostream>
//#include <vector>
//using namespace std;
//#define MAX 1000000000L
//int a[1001], b[1001];
//
//int gcd(int x, int y) {
//    if (x%y == 0) {
//        return y;
//    }
//    else {
//        return gcd(y, x%y);
//    }
//}
//
//int main(void) {
//    int N, M;
//    scanf("%d", &N);
//    
//    for (int i = 0; i < N; i++) {
//        scanf("%d", &a[i]);
//    }
//
//    scanf("%d", &M);
//
//    for (int i = 0; i < M; i++) {
//        scanf("%d", &b[i]);
//    }
//
//    vector<int> v;
//
//    for (int i = 0; i < N; i++) {
//        for (int j = 0; j < M; j++) {
//            int x = gcd(a[i], b[j]);
//
//            if (x != 1) {
//                v.push_back(x);
//                a[i] /= x;
//                b[j] /= x;
//            }
//        }
//    }
//
//    long long ans = 1;
//    bool flag = false;
//
//    for (int i = 0; i < v.size(); i++) {
//        ans *= v[i];
//        if (ans >= MAX) {
//            ans %= MAX;
//            flag = true;
//        }
//    }
//
//    if (flag) {
//        printf("%09lld\n", ans);
//    }
//    else {
//        printf("%lld\n", ans);
//    }
//
//    return 0;
//}