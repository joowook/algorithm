//#include<iostream>
//#include <cstring>
//#include <algorithm>
//using namespace std;
//
//#define WHITE 0
//#define BLUE 1
//#define RED 2
//#define MAX 2000000000
//
//char a[51][51];
//int color[51][3];
//int sum[51];
//
//int N, M;
//int Answer;
//
//void init() {
//    memset(color, 0, sizeof(color));
//    memset(sum, 0, sizeof(sum));
//    Answer = MAX;
//
//    for (int i = 0; i < N; i++) {
//        int W = 0, B = 0, R = 0;
//
//        for (int j = 0; j < M; j++) {
//            if (a[i][j] == 'W') {
//                W++;
//            }
//            else if (a[i][j] == 'R') {
//                R++;
//            }
//            else {
//                B++;
//            }
//        }
//        color[i][WHITE] = W;
//        color[i][BLUE] = B;
//        color[i][RED] = R;
//    }
//
//    for (int i = 2; i < N; i++) {
//        for (int j = i; j < N; j++) {
//            sum[i] += (M - color[j][RED]);
//        }
//    }
//}
//
//void go(int n, int C, int cnt) {
//    int tmp = 0;
//
//    for (int i = n; i < N; i++) {
//        if (C == RED) {
//            Answer = min(Answer, cnt + sum[n]);
//
//            return;
//        }
//
//        tmp += (M - color[i][C]);
//        
//        go(i + 1, C + 1, cnt + tmp);
//
//        if (i == N - 1 && C == WHITE) {
//            break;
//        }
//        else if (i == N - 2 && C == BLUE) {
//            break;
//        }
//    }
//}
//
//
//int main(int argc, char** argv)
//{
//    int test_case;
//    int T;
//    
//    cin >> T;
//
//    for (test_case = 1; test_case <= T; ++test_case)
//    {
//        cin >> N >> M;
//
//        for (int i = 0; i < N; i++) {
//            for (int j = 0; j < M; j++) {
//                cin >> a[i][j];
//            }
//        }
//        init();
//
//        go(0, WHITE, 0);
//
//        cout << "#" << test_case << " " << Answer << '\n';
//    }
//    return 0;
//}