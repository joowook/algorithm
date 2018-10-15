//#include <iostream>
//#include <vector>
//#include <cstring>
//using namespace std;
//#define MAX 2000000000
//#define MIN (-2000000000)
//int min(int a, int b) { return a > b ? b : a; }
//int max(int a, int b) { return a > b ? a : b; }
//int N;
//int Min = MAX, Max = MIN;
//int cal[4];// +, -, *, /
//
//void go(vector<int> &a, int index, int val) {
//    if (index == N) {
//        Min = min(Min, val);
//        Max = max(Max, val);
//
//        return;
//    }
//
//    for (int i = 0; i < 4; i++) {
//        if (cal[i] > 0) {
//            cal[i]--;
//            int tmp = 0;
//            if (i == 0) { // µ¡¼À
//                tmp = val + a[index];
//            }
//            else if (i == 1) { // »¬¼À
//                tmp = val - a[index];
//            }
//            else if (i == 2) { // °ö¼À
//                tmp = val * a[index];
//            }
//            else { // ³ª´°¼À
//                tmp = val / a[index];
//            }
//
//            go(a, index + 1, tmp);
//            cal[i]++;
//        }
//
//
//    }
//
//}
//
//int main(void) {
//    scanf("%d", &N);
//
//    vector<int> a(N);
//
//    for (int i = 0; i < N; i++) {
//        scanf("%d", &a[i]);
//    }
//
//    for (int i = 0; i < 4; i++) {
//        scanf("%d", &cal[i]);
//    }
//
//    go(a, 1, a[0]);
//
//    printf("%d\n", Max);
//    printf("%d\n", Min);
//
//    return 0;
//}