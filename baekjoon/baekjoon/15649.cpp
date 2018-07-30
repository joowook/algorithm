//#include <iostream>
//using namespace std;
//
//bool check[9];
//int ans[9];
//int N, M;
//
//void go(int cnt) {
//    if (cnt == M + 1) {
//        for (int i = 1; i <= M; i++) {
//            printf("%d ", ans[i]);
//        }
//        printf("\n");
//
//        return;
//    }
//
//    for (int i = 1; i <= N; i++) {
//        if (!check[i]) {
//            check[i] = true;
//            ans[cnt] = i;
//            go(cnt + 1);
//            check[i] = false;
//        }
//    }
//}
//
//int main(void) {
//    
//    scanf("%d %d", &N, &M);
//
//    int cnt = 1;
//
//    for (int i = 1; i <= N; i++) {
//        check[i] = true;
//        ans[cnt] = i;
//        go(cnt + 1);
//        check[i] = false;
//    }
//
//    return 0;
//}