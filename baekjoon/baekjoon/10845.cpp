//#include <iostream>
//#include <queue>
//#include <cstring>
//using namespace std;
//
//int main(void) {
//    int N;
//
//    scanf("%d", &N);
//    queue<int> q;
//
//    while (N--) {
//        char cmd[10];
//
//        scanf("%s", cmd);
//
//        if (!strcmp(cmd, "push")) {
//            int x;
//
//            scanf("%d", &x);
//
//            q.push(x);
//        }
//        else if (!strcmp(cmd, "pop")) {
//            if (!q.empty()) {
//                printf("%d\n", q.front());
//                q.pop();
//            }
//            else {
//                printf("-1\n");
//            }
//        }
//        else if (!strcmp(cmd, "size")) {
//            printf("%d\n", q.size());
//        }
//        else if (!strcmp(cmd, "empty")) {
//            printf("%d\n", q.empty());
//        }
//        else if (!strcmp(cmd, "front")) {
//            if (!q.empty()) {
//                printf("%d\n", q.front());
//            }
//            else {
//                printf("-1\n");
//            }
//        }
//        else if (!strcmp(cmd, "back")) {
//            if (!q.empty()) {
//                printf("%d\n", q.back());
//            }
//            else {
//                printf("-1\n");
//            }
//        }
//    }
//
//    return 0;
//}