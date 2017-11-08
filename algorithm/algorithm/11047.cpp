//#include <iostream>
//using namespace std;
//
//int main(void) {
//    int n, k;
//    int a[11];
//
//    scanf("%d %d", &n, &k);
//
//    for (int i = 0; i < n; i++) {
//        scanf("%d", &a[i]);
//    }
//
//    int count = 0;
//    for (int i = n - 1; i >= 0; i--) {
//        count += k / a[i];
//        k %= a[i];
//        
//        /*while(a[i]<=k) {
//            k -= a[i];
//            count++;
//        }
//        if (k == 0)
//            break;*/
//    }
//
//    printf("%d", count);
//
//    return 0;
//}