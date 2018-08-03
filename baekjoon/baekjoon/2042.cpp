//#include <iostream>
//using namespace std;
//#define MAX 1000000
//
//long long tree[MAX * 4 + 1];
//int s = 1;
//
//long long init(int x) {
//    if (x > s) {
//        return tree[x];
//    }
//    else {
//        return tree[x] = init(x * 2) + init(x * 2 + 1);
//    }
//}
//
//void update(int b, long long change) {
//    for (int i = b; i >= 1; i /= 2) {
//        tree[i] += change;
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
//int main(void) {
//    int N, M, K;
//
//    scanf("%d %d %d", &N, &M, &K);
//
//
//    while (N > s) {
//        s = s << 1;
//    }
//
//    s--;
//
//    for (int i = 1; i <= N; i++) {
//        scanf("%lld", &tree[s + i]);
//    }
//
//    init(1);
//
//    for (int i = 0; i < M + K; i++) {
//        int flag, b, c;
//
//        scanf("%d %d %d", &flag, &b, &c);
//
//        if (flag == 1) {
//            update(s + b, (long long)c - tree[s+b]);
//        }
//        else {
//            printf("%lld\n", sum(s + b, s + c));
//        }
//    }
//    return 0;
//}