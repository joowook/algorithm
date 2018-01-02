//#include <iostream>
//#include <queue>
//#include <string>
//#include <cstring>
//using namespace std;
//#define MAX 10000
//int check[MAX + 1];
//int s[MAX + 1];
//int dist[MAX + 1];
//
//int main(void) {
//    int T;
//
//    scanf("%d", &T);
//
//    for (int i = 2; i <= MAX; i++) {
//        if (check[i] == 0) {
//            s[i] = 1;
//
//            for (int j = i*i; j <= MAX; j += i) {
//                if (check[j] == 0) {
//                    check[j] = 1;
//                }
//            }
//        }
//    }
//
//    while (T--) {
//        int A, B;
//        scanf("%d %d", &A, &B);
//        memset(check, 0, sizeof(check));
//        memset(dist, 0, sizeof(dist));
//        queue<string>q;
//        q.push(to_string(A));
//        check[A] = 1;
//
//        while (!q.empty()) {
//            string n = q.front();
//            string temp = n;
//            q.pop();
//
//            for (int i = 0; i < 4; i++) {
//                temp = n;
//                for (int j = 0; j < 10; j++) {
//                    temp[i] = j+'0';
//                    int nx = stoi(temp);
//                    int t = 0;
//                    if (nx >= 1000 && check[nx] == 0 && s[nx] == 1) {
//                        q.push(to_string(nx));
//                        check[nx] = 1;
//                        dist[nx] = dist[stoi(n)] + 1;
//                        t = dist[nx];
//                    }
//                }
//            }
//
//        }
//        if (dist[B] == 0 && A != B) {
//            printf("Impossible\n");
//        }
//        else {
//            printf("%d\n", dist[B]);
//        }
//    }
//    
//    return 0;
//}