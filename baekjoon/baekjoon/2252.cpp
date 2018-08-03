//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//
//vector<int> person[32001];
//int check[32001];
//
//int main(void) {
//    int N, M;
//
//    scanf("%d %d", &N, &M);
//
//    for (int i = 0; i < M; i++) {
//        int x, y;
//
//        scanf("%d %d", &x, &y);
//
//        person[x].push_back(y);
//        check[y]++;
//    }
//
//    queue<int> q;
//
//    for (int i = 1; i <= N; i++) {
//        if (check[i] == 0) {
//            q.push(i);
//        }
//    }
//    
//    while (!q.empty()) {
//        int x = q.front(); q.pop();
//        printf("%d ", x);
//
//        for (int i = 0; i < person[x].size(); i++) {
//            check[person[x][i]]--;
//
//            if (check[person[x][i]] == 0) {
//                q.push(person[x][i]);
//            }
//        }
//    }
//
//    printf("\n");
//
//    return 0;
//}