//#include <iostream>
//using namespace std;
//
//int main(void) {
//    int N, K;
//
//    scanf("%d %d", &N, &K);
//
//    int ans = 0;
//
//    for (int i = 0; i < K; i++) {
//        int x;
//        scanf("%d", &x);
//        
//        ans += x / 2;
//        if (x % 2 == 1) {
//            ans++;
//        }
//    }
//
//    if (ans >= N) {
//        printf("YES\n");
//    }
//    else {
//        printf("NO\n");
//    }
//
//    return 0;
//}