//#include <iostream>
//using namespace std;
//#define MAX 2*123456
//int flag[MAX + 1];
//int main(void) {
//    int n = 1;
//
//    for (int i = 2; i*i <= MAX; i++) {
//        for (int j = 2*i; j <= MAX; j+=i) {
//            flag[j] = 1;
//        }
//    }
//
//
//    while (1) {
//        int count = 0;
//        scanf("%d", &n);
//        if (n == 0)
//            break;
//        for (int i = n+1; i <= 2 * n; i++) {
//            if (flag[i] == 0)
//                count++;
//        }
//        printf("%d\n", count);
//    }
//
//    return 0;
//}