//#include <iostream>
//#include <stack>
//using namespace std;
//
//int main(void) {
//    int x;
//    stack <int> s;
//
//    scanf("%d", &x);
//    if (x == 64) {
//        printf("1\n");
//
//        return 0;
//    }
//
//    int t = 64;
//        
//    while (t != x) {
//        t /= 2;
//        if (t <= x) {
//            s.push(t);      
//            if (t == x) break;
//            x -= t;
//            
//        }
//    }
//
//    printf("%d\n", s.size());
//
//    return 0;
//}