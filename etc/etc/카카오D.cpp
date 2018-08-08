//#include <iostream>
//#include <vector>
//#include <cmath>
//#include <algorithm>
//using namespace std;
//
//vector<pair<int, int>> v;
//vector<pair<int, int>> tmp;
//
//
//bool go(int x, int y, int nx, int ny, int hp) {
//    if (pow(nx - x, 2) + pow(ny - y, 2) <= pow(hp, 2)) {
//        return true;
//    }
//    else if(nx - x <= hp || ny - y <= hp) {
//        return true;
//    }
//    else {
//        for (int i = 0; i < tmp.size(); i++) {
//            if (x >= tmp[i].first) {
//
//            }
//        }
//    }
//
//
//}
//int main(void) {
//    int N, Q;
//
//    scanf("%d %d", &N, &Q);
//    
//    v.resize(N + 1);
//    tmp.resize(N + 1);
//    
//    for (int i = 0; i < N; i++) {
//        scanf("%d %d", v[i].first, v[i].second);
//        tmp[i].first = v[i].first;
//        tmp[i].second = v[i].second;
//    }
//
//    sort(tmp.begin(), tmp.end());
//
//    for(int i=0; i<Q; i++) {
//        int from, to, hp;
//        scanf("%d %d %d", &from, &to, &hp);
//
//        int x = v[from].first;
//        int y = v[from].second;
//        int nx = v[to].first;
//        int ny = v[to].second;
//
//        if (go(x, y, nx, ny, hp)) {
//            printf("YES\n");
//        }
//        else {
//            printf("NO\n");
//        }
//    }
//
//
//}