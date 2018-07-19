//#include <iostream>
//using namespace std;
//#define N 28
//int _clock[N+1];
//
//int ans[4];
//int t[4][10][28] = { { { 1,1,1,1, 1,1 },{ 0,0,0,0,1,1 },{ 1,0,1,1,0,1,1 },{ 1,0,0,1,1,1,1 },{ 0,1,0,0,1,1,1 },{ 1,1,0,1,1,0,1 },{ 1,1,1,1,1,0,1 },{ 1,0,0,0,1,1 },{ 1,1,1,1,1,1,1 },{ 1,1,0,1,1,1,1 } } };
//
//void init() {
//    for (int i = 1; i <= 3; i++) {
//        for (int j = 0; j < 10; j++) {
//            for (int k = i * 7 - 7; k < i * 7; k++) {
//                if (t[i - 1][j][k] == 1) {
//                    t[i][j][k + 7] = 1;
//                }
//            }
//        }
//    }
//}
//
//bool go(int n, int cnt) {
//    if (n == 4) {
//        return true;
//    }
//
//    int x = n * 7 + 7;
//    int h = 0;
//
//    if (n == 0) {
//        h = 2;
//    }
//    else if (n == 1) {
//        if (ans[0] == 2) h = 3;
//        else h = 9;
//    }
//    else if (n == 2) {
//        h = 5;
//    }
//    else {
//        h = 9;
//    }
//
//    for (int i = 0; i <= h; i++) {
//        int c = 0;
//        for (int j = x - 7; j < x; j++) {
//            int tt = t[n][i][j];
//            if (_clock[j] != t[n][i][j]) {
//                c++;
//            }
//        }
//
//        if (c <= cnt) {
//            ans[n] = i;
//
//            if (go(n + 1, cnt - c)) {
//                return true;
//            }
//            ans[n] = 0;
//        }
//    }
//
//    return false;
//}
//
//int main(void) {
//    int T;
//    
//    scanf("%d", &T);
//
//    init();
//
//    for (int test_case = 1; test_case <= T; test_case++) {
//        for (int i = 0; i < N; i++) {
//            scanf("%d", &_clock[i]);
//        }
//
//        go(0, 2);
//        printf("#%d ", test_case);
//
//        int Ans[2] = { ans[0] * 10 + ans[1], ans[2] * 10 + ans[3] };
//
//        for (int i = 0; i < 2; i++) {
//            printf("%d ", Ans[i]);
//        }
//        printf("\n");
//    }
//
//    return 0;
//}