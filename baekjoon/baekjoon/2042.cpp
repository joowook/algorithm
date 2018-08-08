//#include <iostream>
//using namespace std;
//#define MAX 1000000
//long long tree[MAX * 4 + 1];
//
//int Max = 1;
//
//long long init(int x) {
//    if (x > Max) {
//        return tree[x];
//    }
//
//    return tree[x] = init(x * 2) + init(x * 2 + 1);
//}
//
//long long print(int from, int to) {
//    long long ret = 0;
//
//    while (from <= to) {
//        if (from % 2 == 1) {
//            ret += tree[from];
//        }
//
//        if (to % 2 == 0) {
//            ret += tree[to];
//        }
//
//        from = (from + 1) / 2;
//        to = (to - 1) / 2;
//    }
//
//    return ret;
//}
//
//void update(int from, long long to) {
//    for (int i = from; i >= 1; i /= 2) {
//        tree[i] += to;
//    }
//}
//
//int main(void) {
//    int N, M, K;
//
//    scanf("%d %d %d", &N, &M, &K);
//
//    while (N > Max) {
//        Max <<=1;
//    }
//
//    Max--;
//
//    for (int i = 1; i <= N; i++) {
//        scanf("%lld", &tree[Max + i]);
//    }
//
//    init(1);
//
//    for (int i = 0; i < M + K; i++) {
//        int flag, from, to;
//
//        scanf("%d %d %d", &flag, &from, &to);
//
//        if (flag == 1) {
//            update(Max + from, (long long)to - tree[Max + from]);
//        }
//        else {
//            printf("%lld\n", print(Max + from, Max + to));
//        }
//    }
//
//    return 0;
//}