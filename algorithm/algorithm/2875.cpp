//#include <iostream>
//using namespace std;
//
//int main(void) {
//    int n, m, k, rest;
//    int contest = 0;
//    scanf("%d %d %d", &n, &m, &k);
//    rest = m + n;
//    int ans = 0;
//    
//    if (n / 2 - m >= 0) {
//        contest = m;
//    }
//    else {
//        contest = n / 2;
//    }
//
//    rest -= 3 * contest;
//
//    k -= rest;
//
//    if (k > 0) {
//        contest -= (k / 3);
//        k %= 3;
//        if (k > 0)
//            contest--; 
//    }
//    printf("%d", contest);
//     
//    return 0;
//}