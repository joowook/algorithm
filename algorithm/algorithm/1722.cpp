//#include <iostream>
//#include <vector>
//using namespace std;
//
//bool c[21];
//int main(void) {
//    long long fact[21] = { 1 };
//    
//
//    for (int i = 1; i <= 20; i++) {
//        fact[i] = fact[i-1] * i;
//    }
//
//    int n;
//    scanf("%d", &n);
//    vector<int> a(n);
//    int what;
//    scanf("%d", &what);
//
//    switch (what) {
//    case 1:
//        long long k;
//        scanf("%lld", &k);
//
//
//        for (int i = 0; i < n; i++) {
//            for (int j = 1; j <= n; j++) {
//                if (c[j] == false) {
//                    if (k > fact[n - i - 1]) {
//                        k -= fact[n - i - 1];
//                    }
//                    else {
//                        a[i] = j;
//                        c[a[i]] = true;
//                        break;
//                    }
//                }
//            }
//            printf("%d ", a[i]);
//        }
//
//        break;
//
//    case 2:
//        for (int i = 0; i < n; i++) {
//            scanf("%d", &a[i]);
//        }
//        long long ans = 0;
//        for (int i = 0; i < n; i++) {
//            for (int j = 1; j < a[i]; j++) {
//                if (c[j] == false) {
//                    ans += fact[n - i - 1];
//                }
//            }
//            c[a[i]] = true;
//        }
//
//        printf("%lld", ans + 1);
//        break;
//
//    }
//
//    return 0;
//}