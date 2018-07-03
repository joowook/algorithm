//#include <iostream>
//using namespace std;
//
//int a[101][101];
//int b[101][101];
//int N, M, K;
//
//int go(int y, int x) {
//    int sum = 0;
//
//    for (int i = 0; i < M; i++) {
//        sum += a[y][i] * b[i][x];
//    }
//    
//    return sum;
//}
//
//int main(void) {
//    
//    scanf("%d %d\n", &N, &M);
//
//    for (int i = 0; i < N; i++) {
//        for (int j = 0; j < M; j++) {
//            scanf("%d", &a[i][j]);
//        }
//    }
//
//    scanf("%d %d", &M, &K);
//
//    for (int i = 0; i < M; i++) {
//        for (int j = 0; j < K; j++) {
//            scanf("%d", &b[i][j]);
//        }
//    }
//
//    for (int i = 0; i < N; i++) {
//        for (int j = 0; j < K; j++) {
//            printf("%d ", go(i, j));
//
//            if (j == K-1) {
//                printf("\n");
//            }
//        }
//    }
//
//    return 0;
//}