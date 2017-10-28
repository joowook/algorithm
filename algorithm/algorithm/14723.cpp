//#include <iostream>
//using namespace std;
//
//int a[1001];
//int b[1001];
//
//int main(void) {
//    int N;
//    scanf("%d", &N);
//    b[1] = 1;
//    for (int i = 1; i < N; i++) {
//        a[i] = i*(i + 1) / 2;
//        b[i+1] = a[i] + 1;
//    }
//    int i = 0;
//    for (i = 1; i < N; i++) {
//        if (b[i] <= N && a[i] >= N) {
//            break;
//        }
//    }
//
//    int ans = N - b[i];
//    int x = 0, y = 0;
//
//    x = i - ans;
//    y = 1 + ans;
//
//    printf("%d %d", x, y);
//
//    return 0;
//}