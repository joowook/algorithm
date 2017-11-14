//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//
//vector <int> v[51];
//vector <int> vp(51);
//int cnt = 0;
//void bfs(int n) {
//    queue<int> q;
//    q.push(n);
//
//    while (!q.empty()) {
//        n = q.front();
//        q.pop();
//
//        if (v[n].size() == 0 && v[vp[n]].size() != 1) {
//            cnt++;
//        }
//        else {
//            for (int i = 0; i < v[n].size(); i++) {
//                q.push(v[n][i]);
//            }
//        }
//    }
//}
//int main(void) {
//    int n, input;
//    scanf("%d", &n);
//    
//    for (int i = 0; i < n; i++) {
//        scanf("%d", &input);
//        if (input == -1) {
//            continue;
//        }
//        else {
//            v[input].push_back(i);
//            vp[i]=input;
//        }
//    }
//
//    int ans = 0;
//    for (int i = 0; i < n; i++) {
//        if (v[i].size() == 0) {
//            ans++;
//        }
//    }
//
//    scanf("%d", &input);
//
//    bfs(input);
//
//    printf("%d\n", ans - cnt);
//
//    return 0;
//}