//#include <iostream>
//#include <queue>
//using namespace std;
//
//
//int main(void) {
//    int N, K;
//
//    scanf("%d %d", &N, &K);
//
//    queue<int> q[100];
//
//    for (int i = 0; i < N; i++) {
//        int x;
//        scanf("%d", &x);
//
//        for (int j = 0; j < K; j++) {
//            if (q[j].empty()) {
//                q[j].push(x);
//                    
//                break;
//            }
//            else if(q[j].back() < x) {
//                q[j].push(x);
//                
//                break;
//            }
//
//            if (j == K - 1) {
//                printf("NO\n");
//
//                return 0;
//            }
//        }
//    }
//
//    printf("YES\n");
//
//    return 0;
//}