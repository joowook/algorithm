//#include <iostream>
//using namespace std;
//
//int check[10001];
//int main(void) {
//    int m, n;
//
//    scanf("%d %d", &m, &n);
//    check[1] = 1;
//    for (int i = 2; i*i <= n; i++) {
//        for (int j = 2 *i; j <= n; j+=i) {
//            check[j] = 1;
//        }
//    }
//    int sum = 0;
//    int ans = 20000;
//    for (int i = m; i <= n; i++) {
//        if (!check[i]) {
//            sum += i;
//            if(ans>i)
//                ans = i;
//        }
//    }
//
//    if (sum != 0) {
//        printf("%d\n", sum);
//        printf("%d\n", ans);
//    }
//    else {
//        printf("-1");
//    }
//
//    return 0;
//}