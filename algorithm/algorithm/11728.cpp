//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//
//int main(void) {
//    int n, m;
//
//    scanf("%d %d", &n, &m);
//
//    int *a = (int*)malloc(sizeof(int)*n);
//    int *b = (int*)malloc(sizeof(int)*m);
//    int *c = (int*)malloc(sizeof(int)*(n + m));
//
//    for (int i = 0; i < n; i++) {
//        scanf("%d", &a[i]);
//    }
//    for (int i = 0; i < m; i++) {
//        scanf("%d", &b[i]);
//    }
//
//    int cnt_a = 0;
//    int cnt_b = 0;
//    for (int i = 0; i < m+n; i++) {
//        if (cnt_a == n) {
//            for (int j = cnt_a + cnt_b; j < m + n; j++) {
//                c[j] = b[cnt_b++];
//            }
//            break;
//        }
//        else if (cnt_b == m) {
//            for (int j = cnt_a + cnt_b; j < m + n; j++) {
//                c[j] = a[cnt_a++];
//            }
//            break;
//        }
//        if (a[cnt_a] < b[cnt_b]) {
//            c[i] = a[cnt_a++];
//        }
//        else {
//            c[i] = b[cnt_b++];
//        }
//    }
//
//    for (int i = 0; i < m + n; i++) {
//        printf("%d ", c[i]);
//    }
//
//    return 0;
//}