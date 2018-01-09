//#include <iostream>
//#include <vector>
//#include <stack>
//using namespace std;
//
//int main(void) {
//    int n;
//
//    while (1) {
//        scanf("%d", &n);
//
//        if (n == 0) {
//            break;
//        }
//
//        vector <long long> a(n);
//
//        for (int i = 0; i < n; i++) {
//            scanf("%lld", &a[i]);
//        }
//
//        stack<int> s;
//
//        long long ans = 0;
//        for (int i = 0; i < n; i++) {
//            while (!s.empty() && a[s.top()] > a[i]) {
//                long long  x = a[s.top()];
//                s.pop();
//                long long right = i - 1;
//                long long left = -1;
//                if (!s.empty()) {
//                    left = s.top();
//                }
//
//                ans = ans >= x * (right - left) ? ans : x * (right - left); // long long ans = int x * (int right - int left) 는 ans에 넣기 전에 이미 오버플로우가 발생해서 오답! ㅇㅋ?
//            }
//            s.push(i);
//
//            if (i == n - 1) {
//                while (!s.empty()) {
//                    long long x = a[s.top()];
//                    s.pop();
//                    long long right = n - 1;
//                    long long left = -1;
//                    if (!s.empty()) {
//                        left = s.top();
//                    }
//
//                    ans = ans >= x * (right - left) ? ans : x * (right - left);
//                }
//            }
//        }
//
//        printf("%lld\n", ans);
//    }
//
//    return 0;
//}