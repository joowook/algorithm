//#include <iostream>
//#include <deque>
//#include <queue>
//#include <vector>
//using namespace std;
//
//int main(void) {
//    int N, M;
//
//    scanf("%d %d", &N, &M);
//    
//    deque<int> dq;
//
//    for (int i = 1; i <= N; i++) {
//        dq.push_back(i);
//    }
//
//    queue<int> q;
// 
//    for (int i = 0; i < M; i++) {
//        int input;
//
//        scanf("%d", &input);
//
//        q.push(input);
//    }
//
//    int ans = 0;
//    while (!q.empty()) {
//        if (dq.front() == q.front()) {
//            dq.pop_front();
//            q.pop();
//        }
//        else {
//            int cnt = 0;
//
//            while (dq.front() != q.front()) {
//                cnt++;
//                dq.push_back(dq.front());
//                dq.pop_front();
//            }
//
//            if (dq.size() / 2 < cnt) {
//                for (int i = 0; i < dq.size(); i++) {
//                    dq.push_front(dq.back());
//                    dq.pop_back();
//                }
//
//                ans += dq.size() - cnt;
//            }
//            else {
//                ans += cnt;
//            }
//
//            dq.pop_front();
//            q.pop();
//        }
//    }
//
//    printf("%d\n", ans);
//    
//    return 0;
//}