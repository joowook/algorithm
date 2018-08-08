//#include <iostream>
//using namespace std;
//#define MAX 500000
//int tree[MAX * 4 + 1];
//
//int Max = 1;
//
//void update(int from, int to) {
//    while (from <= to) {
//        if (from % 2 == 1) {
//            tree[from]++;
//        }
//
//        if (to % 2 == 0) {
//            tree[to]++;
//        }
//
//        from = (from + 1) / 2;
//        to = (to - 1) / 2;
//    }
//}
//
//int sum(int x) {
//    int ret = tree[x];
//
//    if (x == 1) {
//        return ret;
//    }
//
//    ret += sum(x / 2);
//
//    return ret;
//}
//
//int main(void) {
//    int N, H;
//
//    scanf("%d %d", &N, &H);
//
//    while (H > Max) {
//        Max <<= 1;
//    }
//
//    Max--;
//
//    for (int i = 0; i < N; i++) {
//        int x;
//
//        scanf("%d", &x);
//
//        if (i % 2 == 0) {
//            update(Max + 1, Max + x);
//        }
//        else {
//            update(Max + H - x + 1, Max + H);
//        }
//    }
//
//    int Min = 2000000000;
//    int cnt = 0;
//
//    for (int i = 1; i <= H; i++) {
//        int x = sum(Max + i);
//
//        if (Min > x) {
//            Min = x;
//            cnt = 1;
//        }
//        else if (Min == x) {
//            cnt++;
//        }
//    }
//
//    printf("%d %d\n", Min, cnt);
//    
//    return 0;
//}