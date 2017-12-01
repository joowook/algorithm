//#include <iostream>
//using namespace std;
//
//int r, c;
//int ans = 0;
//
//void find(int fr, int fc, int n) {
//    if (n == 1) {
//        return;
//    }
//    int cnt = 0;
//    int m = n / 2;
//    for (int i = 0; i < 2; i++) {
//        for (int j = 0; j < 2; j++) {
//            if ((r>=fr+m*i && r<fr+m*(i+1)) && (c>=fc+m*j && c<fc+m*(j+1))) {
//                ans += cnt*m*m;
//                find(fr + m*i, fc + m*j, m);
//                return;
//            }
//            cnt++;
//        }
//    }
//}
//
//int main(void) {
//    int n;
//    
//    scanf("%d %d %d", &n, &r, &c);
//    int m = 1;
//    for (int i = 0; i < n; i++) {
//        m *= 2;
//    }
//
//    find(0, 0, m);
//    printf("%d", ans);
//
//    return 0;
//}