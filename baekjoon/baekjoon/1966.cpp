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
//    while (T--) {
//        int N, M;
//
//        scanf("%d %d", &N, &M);
//
//        queue <pair<int, int>> q;
//        priority_queue<int> pq;
//
//        for (int i = 0; i < N; i++) {
//            int input;
//            scanf("%d", &input);
//            q.push(make_pair(i, input));
//            pq.push(input);
//        }
//
//        int ans = 0;
//
//        while (1) {
//            if (q.front().second == pq.top()) {
//                ans++;
//
//                if (q.front().first == M) {
//                    printf("%d\n", ans);
//
//                    break;
//                }
//
//                q.pop();
//                pq.pop();
//            }
//            else {
//                q.push(q.front());
//                q.pop();
//            }
//        }
//    }
//
//    return 0;
//}