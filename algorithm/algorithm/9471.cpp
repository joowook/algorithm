//#include <iostream>
//using namespace std;
//int main(void) {
//    int t, a, b;
//
//    scanf("%d", &t);
//
//    for (int i = 1; i <= t; i++) {
//        int m;
//        scanf("%d %d", &i, &m);
//        a = 1;
//        b = 1;
//        int cnt = 0;
//        do { 
//            
//            int temp = b;
//            b = (a + b)%m;
//            a = temp;
//            
//            cnt++;
//        } while (!(a == 1 && b == 1));
//        printf("%d %d\n", i, cnt);
//    }
//
//    return 0;
//}