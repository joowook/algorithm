//#include <iostream>
//#include <queue>
//#include <string>
//#include <cstring>
//using namespace std;
//
//int check[10000];
//
//int main(void) {
//    int T;
//
//    scanf("%d", &T);
//
//    while (T--) {
//        int A, B;
//
//        scanf("%d %d", &A, &B);
//        memset(check, 0, sizeof(check));
//        string s[10000];
//        queue <int> q;
//        q.push(A);
//        check[A] = 1;
//
//        while (!q.empty()) {
//            int n = q.front();
//            q.pop();
//            int temp;
//            //D
//            temp = (2 * n) % 10000;
//            if (!check[temp]) {
//                q.push(temp);
//                check[temp] = 1;
//                s[temp] = s[n] + 'D';
//            }
//            //S
//            temp = n == 0 ? 9999 : n - 1;
//            if (!check[temp]) {
//                q.push(temp);
//                check[temp] = 1;
//                s[temp] = s[n] + 'S';
//            }
//            //L
//            temp = (n % 1000) * 10 + n / 1000;
//            if (!check[temp]) {
//                q.push(temp);
//                check[temp] = 1;
//                s[temp] = s[n] + 'L';
//            }
//            //R
//            temp = n / 10 + (n % 10) * 1000;
//            if (!check[temp]) {
//                q.push(temp);
//                check[temp] = 1;
//                s[temp] = s[n] + 'R';
//            }
//        }
//        cout << s[B] << '\n';
//
//    }
//
//}