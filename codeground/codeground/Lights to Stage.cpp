//#include <iostream>
//#include <vector>
//
//#define PLUS true
//#define MINUS false
//#define MIN 2200000000
//using namespace std;
//
//double Answer;
//int Answer1, Answer2;
//
//struct Point {
//    long long x, y;
//
//  /*  Point(int x2, int y2) {
//        x = x2;
//        y = y2;
//    }*/
//};
//
//bool go(vector<Point> &a) {
//    if (a[0].y < a[1].y) {
//        return PLUS;
//    }
//    else {
//        return MINUS;
//    }
//}
//
//int main(int argc, char** argv)
//{
//    setbuf(stdout, NULL);
//
//    int T, test_case;
//
//    scanf("%d", &T);
//    for (test_case = 0; test_case < T; test_case++)
//    {
//
//        Answer = MIN;
//
//        long long N;
//        int M, L;
//        scanf("%lld %d %d", &N, &M, &L);
//        vector<Point> a(M + 1);
//
//        for (int i = 0; i < M + 1; i++) {
//            scanf("%lld %lld", &a[i].x, &a[i].y);
//        }
//
//        bool flag = go(a);
//
//        if (L == 1) {
//            long long x;
//            long long y;
//            long long b, c, left, right;
//
//            if (!flag) { // 내리막으로 시작이면
//                x = a[0].x;
//                y = a[0].y;
//
//                left = -x;
//                right = x;
//                c = x + y;
//
//                if (left <= 0 && right >= N) {
//                    if (Answer > N / 2) {
//                        Answer = (double)N / 2;
//                        Answer1 = N;
//                        Answer2 = 2;
//                    }
//                }
//            }
//
//            for (int i = 0; i < M + 1; i++) {
//                
//                
//                if (b <= 0 && c >= N) {
//
//                }
//                else {
//
//                }
//
//
//
//            }
//        }
//        else {
//
//        }
//
//
//        printf("Case #%d\n", test_case + 1);
//        printf("%d\n", Answer);
//    }
//
//    return 0;
//}