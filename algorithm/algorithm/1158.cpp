//#include <iostream>
//#include <queue>
//using namespace std;
//
//int main(void) {
//    int N, M;
//
//    cin >> N >> M;
//
//    queue <int> q;
//
//    for (int i = 1; i<=N; i++)
//        q.push(i);
//    cout << "<";
//    while (q.size() != 1) {
//        for(int j=0; j<M-1; j++) {
//            q.push(q.front());
//            q.pop();
//        }
//        cout << q.front() << ", ";
//        q.pop();
//    }
//
//    cout << q.front() << ">" ;
//    q.pop();
//
//    getchar();
//    getchar();
//
//    return 0;
//}