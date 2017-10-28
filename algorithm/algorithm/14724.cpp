//#include <iostream>
//#include <string>
//using namespace std;
//
//int a[9][101];
//string s[9] = { "PROBRAIN", "GROW", "ARGOS", "ADMIN", "ANT", "MOTION", "SPG", "COMON", "ALMIGHTY" };
//int main(void) {
//    int N;
//
//    scanf("%d", &N);
//
//    for (int i = 0; i < 9; i++) {
//        for (int j = 0; j < N; j++) {
//            scanf("%d", &a[i][j]);
//        }
//    }
//    int max = 0;
//    int ans_i = 0;
//
//    for (int i = 0; i < 9; i++) {
//        for (int j = 0; j < N; j++) {
//            if (max < a[i][j]) {
//                max = a[i][j];
//                ans_i = i;
//            }
//        }
//    }
//
//    cout << s[ans_i];
//
//    return 0;
//}