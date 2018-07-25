//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//
//int main(void) {
//    int T;
//
//    scanf("%d", &T);
//
//    for (int test_case = 1; test_case <= T; test_case++) {
//        int N;
//
//        scanf("%d", &N);
//
//        priority_queue<long long> q;
//
//        for (int i = 0; i < N; i++) {
//            int x;
//            scanf("%d", &x);
//            
//            q.push(-x);
//        }
//
//        long long ans = 0;
//
//        while (q.size() != 1) {
//            long long x, y;
//
//            x = -q.top();
//            q.pop();
//            y = -q.top();
//            q.pop();
//
//            ans += x + y;
//            q.push(-x - y);
//        }
//
//        printf("#%d %lld\n", test_case, ans);
//    }
//
//    return 0;
//}