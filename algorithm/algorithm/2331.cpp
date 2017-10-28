//#include <iostream>
//#include <math.h>
//using namespace std;
//
//int check[1000000];
//int Next(int n, int p) {
//    int ans = 0;
//    while (n) {
//        int nam = n % 10;
//        n /= 10;
//        ans += (int)pow(nam, p);
//    }
//    return ans;
//}
//int main(void) {
//    int n, p, cnt = 0, ans = 0;
//
//    scanf("%d %d", &n, &p);
//
//    while (1) {
//        if (check[n] == 0) {
//            cnt++;
//            check[n] = cnt;
//            int next = Next(n, p);
//            n = next;
//        
//        }
//        else {
//            ans = check[n]-1;
//            break;
//        }
//    }
//    printf("%d", ans);
//
//    return 0;
//}