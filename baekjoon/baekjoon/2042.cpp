//#include <iostream>
//using namespace std;
//#define MAX 1000000
//long long tree[MAX * 4 + 1];
//int Nindex;
//
//long long init(int x) {
//    if (x > Nindex) {
//        return tree[x];
//    }
//    return tree[x] = init(x * 2) + init(x * 2 + 1);
//}
//
//void update(int b, long long tmp) {
//    for (int i = b; i >= 1; i /= 2) {
//        tree[i] += tmp;
//    }
//}
//
//long long sum(int start, int end) {
//    long long ret = 0;
//
//    while (start <= end) {
//        if (start % 2 == 1) {
//            ret += tree[start];
//        }
//
//        if (end % 2 == 0) {
//            ret += tree[end];
//        }
//
//        start = (start + 1) / 2;
//        end = (end - 1) / 2;
//    }
//
//    return ret;
//}
//
//int main(void) {
//    int N, M, K;
//
//    scanf("%d %d %d", &N, &M, &K);
//
//    Nindex = 1;
//
//    while (Nindex < N) {
//        Nindex = Nindex << 1;
//    }
//
//    Nindex--;
//
//    for (int i = 1; i <= N; i++) {
//        scanf("%lld", &tree[Nindex + i]);
//    }
//
//    init(1);
//
//    for (int i = 1; i <= M + K; i++) {
//        int a, b, c;
//
//        scanf("%d %d %d", &a, &b, &c);
//
//        if (a == 1) {
//            update(Nindex + b, (long long)c - tree[Nindex + b]);
//        }
//        else {
//            printf("%lld\n", sum(Nindex + b, Nindex + c));
//        }
//    }
//
//    return 0;
//}