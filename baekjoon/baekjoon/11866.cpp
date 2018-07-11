//#include <iostream>
//#include <queue>
//using namespace std;
//
//int main(void) {
//    int N, M;
//
//    scanf("%d %d", &N, &M);
//
//    queue<int> q;
//
//    for (int i = 1; i <= N; i++) {
//        q.push(i);
//    }
//
//    printf("<");
//    while (!q.empty()) {
//        for (int i = 0; i < M; i++) {
//            int t = q.front();
//            
//            q.pop();
//            
//            if (i == M - 1) {
//                if (!q.empty()) {
//                    printf("%d, ", t);
//                }
//                else {
//                    printf("%d", t);
//                }
//                break;
//            }
//            q.push(t);
//        }
//    }
//
//    printf(">\n");
//
//    return 0;
//}