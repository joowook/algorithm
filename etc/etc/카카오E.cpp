//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//#define MAX 100000
//
//int N, K, J;
//
//struct Point {
//    int singer;
//    vector<int> child;
//    int nc;
//};
//
//struct Singer {
//    long long score;
//    int song_cnt, time;
//
//    Singer() {
//        score = song_cnt = time = 0;
//    }
//};
//
//Singer singer[2 * MAX + 1];
//Point tree[2 * MAX + 1];
//bool check[2 * MAX + 1];
//
//struct order {
//    int t, p, s;
//};
//
//order ok[2 * MAX + 1];
//
//bool cmp(const order &u, const order &v) {
//    return u.t < v.t;
//}
//
//void go(int t, int x, int s) {
//    if (!check[tree[x].singer]) {
//        singer[tree[x].singer].score += s;
//        singer[tree[x].singer].time = max(singer[tree[x].singer].time, t);
//    }
//
//    if (!check[tree[x].singer] && (singer[tree[x].singer].score > (long long)J * (long long)singer[tree[x].singer].song_cnt)) {
//        check[tree[x].singer] = true;
//    }
//
//    for (int i = 0; i < tree[x].child.size(); i++) {
//        int nx = tree[x].child[i];
//
//        go(t, nx, s);   
//    }
//}
//
//int init(int x) {
//    int ret = 0;
//    for (int i = 0; i < tree[x].child.size(); i++) {
//        int nx = tree[x].child[i];
//        ret = (tree[x].nc += init(nx));
//    }
//
//    return ret;
//}
//
//int main(void) {
//    scanf("%d %d %d", &N, &K, &J);
//
//    for (int i = 2; i <= N; i++) {
//        int parent;
//
//        scanf("%d", &parent);
//
//        tree[parent].child.push_back(i);
//        tree[parent].nc++;
//    }
//
//    for (int i = 1; i <= N; i++) {
//        scanf("%d", &tree[i].singer);
//        singer[tree[i].singer].song_cnt++;
//    }
//
//    init(1);
//    for (int i = 0; i < K; i++) {
//        scanf("%d %d %d", &ok[i].t, &ok[i].p, &ok[i].s);
//    }
//
//    sort(ok, ok + K, cmp);
//
//    for (int i = 0; i < K; i++) {
//        //printf("%d %d %d\n", ok[i].t, ok[i].p, ok[i].s);
//        go(ok[i].t, ok[i].p, (int)(ok[i].s / (tree[ok[i].p].nc + 1)));
//    }
//
//    for (int i = 1; i <= N; i++) {
//        if (check[tree[i].singer]) {
//            printf("%d\n", singer[tree[i].singer].time);
//        }
//        else {
//            printf("-1\n");
//        }
//    }
//
//    return 0;
//}