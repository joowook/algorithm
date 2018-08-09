//#include <iostream>
//using namespace std;
//
//bool check[1001];
//
//int main(void) {
//    int N, K;
//    scanf("%d %d", &N, &K);
//
//    int cnt = 0;
//    for (int i = 2; i <= N; i++) {
//        if (!check[i]) {
//            cnt++;
//            if (cnt == K) {
//                printf("%d\n", i);
//
//                return 0;
//            }
//
//            for (int j = i * 2; j <= N; j += i) {
//                if (!check[j]) {
//                    cnt++;
//
//                    if (cnt == K) {
//                        printf("%d\n", j);
//
//                        return 0;
//                    }
//
//                    check[j] = true;
//                }
//                
//            }
//        }
//    }
//
//    return 0;
//}