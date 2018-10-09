//#include<iostream>
//
//using namespace std;
//
//int ans = 0, N ,M;
//
//int dx[2] = { 1,0}; //0 오른쪽 //1 아래
//int dy[2] = { 0,1};
//
//void go(int y, int x, int flag) {
//    if (y <= M && x <= N) ans++;
//    else return;
//
//    go(y + dy[flag], x + dx[flag], 1 - flag);
//}
//
//void go2(int y, int x, int flag) {
//    if (y <= M && x <= N) ans++;
//    else return;
//
//    go(y + dy[flag], x + dx[flag], 1 - flag);
//}
//
//int main(int argc, char** argv)
//{
//    int test_case;
//    int T;
//
//    scanf("%d", &T);
//
//    for (test_case = 1; test_case <= T; ++test_case)
//    {
//        ans = 0;
//        scanf("%d %d", &N, &M);
//
//        for (int i = 1; i <= N; i += 4) {
//            go(1, i, 0);// o o
//                    //   o
//        }
//
//        for (int i = 4; i <= M; i += 4) {
//            go2(i, 1, 1); // o
//                            // o o
//        }
//        int tmp = ans;
//
//        ans = 0;
//
//        for (int i = 1; i <= M; i += 4) {
//            go2(i, 1, 1); // o
//                            // o o
//        }
//
//        for (int i = 4; i <= N; i += 4) {
//            go(1, i, 0);// o o
//                        //   o
//        }
//        
//        ans = ans > tmp ? ans : tmp;
//
//        printf("#%d %d\n", test_case, ans);
//    }
//    return 0;
//}