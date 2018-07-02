////#include <iostream>
////#include <vector>
////#include <string>
////#include <cstring>
////using namespace std;
////
////
////
////void go(int N, int a, int b, int c) {
////    if (N == 1) {
////        printf("%d %d\n", a, c);
////
////        return;
////    }
////
////    go(N - 1, a, c, b);
////    printf("%d %d\n", a, c);
////    go(N - 1, b, a, c);
////}
////
////
////int main(void) {
////    int N;
////
////    scanf("%d", &N);
////
////    long double ans = 1.0;
////
////    for (int i = 0; i < N; i++) {
////        ans *= 2;
////    }
////
////    char s[10000];
////
////    sprintf(s, "%0.Lf", ans);
////    int n = 0;
////
////    for (int i = 0; s[i] != '\0'; i++) {
////        n = i + 1;
////    }
////
////    s[n - 1] -= 1;
////
////    printf("%s\n", s);
////
////    if (N <= 20) {
////        go(N, 1, 2, 3);
////    }
////
////    return 0;
////}
////
//////#include <iostream>
//////#include <vector>
//////using namespace std;
//////
//////void go(int N, int start, int end, int nam) {
//////    if (N == 3) {
//////        printf("%d %d\n", start, end);
//////        printf("%d %d\n", start, nam);
//////        printf("%d %d\n", end, nam);
//////        printf("%d %d\n", start, end);
//////        printf("%d %d\n", nam, start);
//////        printf("%d %d\n", nam, end);
//////        printf("%d %d\n", start, end);
//////
//////        return;
//////    }
//////
//////    go(N - 1, start, nam, end);
//////
//////    printf("%d %d\n", start, end);
//////
//////    go(N - 1, nam, end, start);
//////}
//////
//////
//////int main(void) {
//////    int N;
//////
//////    scanf("%d", &N);
//////
//////    char s[10000];
//////
//////    long double ans = 1.0;
//////
//////    for (int i = 0; i < N; i++) {
//////        ans *= 2;
//////    }
//////
//////    sprintf(s, "%0.Lf", ans);
//////    int n = 0;
//////
//////    for (int i = 0; s[i] != '\0'; i++) {
//////        n = i + 1;
//////    }
//////
//////    s[n - 1] -= 1;
//////
//////    printf("%s\n", s);
//////
//////    if (N <= 20) {
//////        go(N, 1, 3, 2);
//////    }
//////
//////    return 0;
//////}