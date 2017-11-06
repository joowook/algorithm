//#include <iostream>
//using namespace std;
//
//int r[51];
//struct point {
//    int x;
//    int y;
//};
//
//point a[51];
//int main(void) {
//    int n;
//    
//    scanf("%d", &n);
//    for (int i = 0; i < n; i++) {
//        scanf("%d %d", &a[i].x, &a[i].y);
//    }
//
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            if (a[i].x < a[j].x && a[i].y < a[j].y) {
//                r[i]++;
//            }
//        }
//    }
//
//    for (int i = 0; i < n; i++) {
//        printf("%d ", r[i] + 1);
//    }
//
//    getchar();
//    getchar();
//
//    return 0;
//}