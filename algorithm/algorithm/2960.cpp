//#include <iostream>
//using namespace std;
//#define MAX 1000
//int flag[MAX + 1];
//int main(void) {
//    int n, k;
//
//    int count = 0;
//
//    scanf("%d %d", &n, &k);
//    
//    for (int i = 2; i <= n; i++) {
//        for (int j = i; j <= n; j += i) {
//            if (flag[j] == 0) {
//                count++;
//                flag[j] = 1;
//            }
//            if (count == k) {
//                printf("%d", j);
//
//                return 0;
//            }
//        }
//    }
//
//    return 0;
//}