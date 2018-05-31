//#include <iostream>
//#include <string>
//#include <queue>
//using namespace std;
//
//int a[26] = { 3, 2, 1, 2, 3, 3, 2, 3, 3, 2, 2, 1, 2, 2, 1, 2, 2, 2, 1, 2, 1, 1, 1, 2, 2, 1 };
//queue <int >q[2];
//bool sw;
//int tmp[2];
//int main(void) {
//    string A, B;
//
//    cin >> A >> B;
//    
//    string s;
//    
//    for (int i = 0; i < A.size(); i++) {
//        q[sw].push(a[A[i]-'A']);
//        q[sw].push(a[B[i]-'A']);
//    }
//    int n = A.size();
//    
//    while (q[sw].size()>2) {
//        int len = q[sw].size();
//        for (int i = 0; i < len; i++) {
//            tmp[i%2] = q[sw].front();
//            q[sw].pop();
//            if (i != 0) {
//                q[!sw].push((tmp[0]+tmp[1])%10);
//
//            }
//        }
//        sw = !sw;
//    }
//
//    int x = q[sw].front();
//    q[sw].pop();
//    int y = q[sw].front();
//    q[sw].pop();
//
//    printf("%d%d\n", x, y);
//
//    return 0;
//}