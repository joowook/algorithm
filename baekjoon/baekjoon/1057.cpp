//#include <iostream>
//#include <queue>
//using namespace std;
//
//deque<pair<int, int>>q;
//
//int main(void) {
//    int N, x, y;
//
//    scanf("%d %d %d", &N, &x, &y);
//    
//    if (x > y) {
//        int t = x;
//        x = y;
//        y = t;
//    }
//    int cnt = 0;
//    for (int i = 1; i <= N; i++) {
//        q.push_back(make_pair(i,1));
//    }
//
//    while(!q.empty()) {
//        int nx = q.front().first;
//        int cnt1 = q.front().second;
//        q.pop_front();
//        int ny = q.front().first;
//        int cnt2 = q.front().second;
//        q.pop_front();
//
//        if (cnt1 == cnt2) {
//            if ((nx == x && ny == y) || nx == y && ny == x) {
//                printf("%d\n", cnt1);
//
//                break;
//            }
//            else if (nx == x || nx == y) {
//                q.push_back(make_pair(nx, cnt1 + 1));
//            }
//            else if (ny == y || ny == x) {
//                q.push_back(make_pair(ny, cnt2 + 1));
//            }
//            else {
//                q.push_back(make_pair(nx, cnt1 + 1));
//            }
//        }
//        else {
//            q.push_back(make_pair(nx, cnt1 + 1));
//            q.push_front(make_pair(ny, cnt2));
//        }   
//    }
//
//    return 0;
//}