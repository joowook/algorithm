//#include <iostream>
//#include <string>
//#include <cstring>
//#include <algorithm>
//#include <cmath>
//using namespace std;
//
//long long Answer;
//long long a[12];
//
//string change(long long num) {
//    string s;
//
//    while (num != 0) {
//        s += (num % 10)+'0';
//        num /= 10;
//    }
//
//    reverse(s.begin(), s.end());
//    
//    return s;
//}
//
//long long go(long long num) {
//    long long ans = 0;
//    
//    string s = change(num);
//
//    int n = s.size();
//    int tmp = n;
//    int zarit = n - 2;
//
//    for (int i = 0; i < n; i++) {
//        int x = s[i] - '0';
//
//        if (i == n - 1) {
//            if (x > 4) {
//                ans++;
//            }
//
//            break;
//        }
//
//        if (x > 4) {
//            ans += (long long)pow(10, --tmp) + (x-1)*a[zarit--];
//        }
//        else {
//            ans += (x)*a[zarit--];
//            --tmp;
//        }
//    }
//    
//    return ans;
//}
//
//int main(void) {
//    int T;
//    
//    scanf("%d", &T);
//    
//    int n = 12;
//    a[0] = 1;
//
//    for (int i = 1; i <n; i++) {
//        a[i] = (long long)pow(10, i) + 9 * a[i - 1];
//    }
//
//    for (int test_case = 1; test_case <= T; test_case++) {
//        long long start, end;
//
//        scanf("%lld %lld", &start, &end);
//
//        Answer = 0;
//
//        if (start > 0) {
//            Answer = (end - go(end)) - (start - go(start));
//        }
//        else if (end > 0) {
//            Answer = (end - go(end)) + (-start - go(-start)) - 1;
//        }
//        else {
//            Answer = (-start - go(-start)) - (-end - go(-end));
//        }
//
//        printf("#%d %lld\n", test_case, Answer);
//    }
//
//    return 0;
//}