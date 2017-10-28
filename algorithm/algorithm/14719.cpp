//#include <iostream>
//using namespace std;
//
//int a[501];
//int main(void) {
//    int x, y;
//
//    scanf("%d %d", &y, &x);
//
//    for (int i = 0; i < x; i++) {
//        scanf("%d", &a[i]);
//    }
//    int t = a[0];
//    int t_i = 0, max_i=0;
//    int ans = 0;
//    int max = a[0];
//    for (int i = 0; i < x; i++) {
//        if (t <= a[i]) {
//            max = 0;
//            for (int j = t_i + 1; j < i; j++) {
//                ans += (t - a[j]);
//            }
//            t = a[i];
//            t_i = i;
//        }
//        else if (max < a[i]) {
//            max = a[i];
//            max_i = i;
//
//            for (int i = t_i + 1; i < max_i; i++) {
//                if (a[i] < max) {
//                    ans += (max - a[i]);
//                    a[i] = max;
//                }
//            }
//            max = 0;
//        }
//    }
//
//    printf("%d", ans);
//    
//    return 0;
//}