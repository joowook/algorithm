//#include <iostream>
//#include <queue>
//#include <map>
//#include <string>
//using namespace std;
//
//int dx[4] = { -1,1,0,0 };
//int dy[4] = { 0,0,1,-1 };
//
//int main(void) {
//    int st = 0;
//    for (int i = 0; i < 3; i++) {
//        for (int j = 0; j < 3; j++) {
//            int temp = 0;
//            scanf("%d", &temp);
//            if (temp == 0) {
//                temp = 9;
//            }
//            st = st * 10 + temp;
//        }
//    }
//
//    queue<int> q;
//    q.push(st);
//    map <int, int> dist;
//    dist[st] = 0;
//
//    while (!q.empty()) {
//        int n = q.front();
//        string now = to_string(n);
//        q.pop();
//
//        int z = now.find('9');
//        int x = z / 3;
//        int y = z % 3;
//
//        for (int i = 0; i < 4; i++) {
//            int nx = x + dx[i];
//            int ny = y + dy[i];
//
//            if (nx >= 0 && ny >= 0 && nx < 3 && ny < 3) {
//                string next = now;
//
//                swap(next[x * 3 + y], next[nx * 3 + ny]);
//                int num = stoi(next);
//
//                if (dist.count(num) == 0) {
//                    dist[num] = dist[n] + 1;
//                    q.push(num);
//                }
//            }
//        }
//    }
//
//    if (dist.count(123456789) == 0) {
//        printf("-1\n");
//    }
//    else {
//        printf("%d\n", dist[123456789]);
//    }
//
//    return 0;
//}