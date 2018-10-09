//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//bool check[10];
//int input[10];
//
//bool go(int sum, int cnt) {
//    if (sum == 100 && cnt == 7) {
//        for (int i = 0; i < 9; i++) {
//            if (check[i]) {
//                printf("%d\n", input[i]);
//            }
//        }
//
//        return true;
//    }
//
//    if (sum>100 || cnt == 7) return false;
//
//    for (int i = 0; i < 9; i++) {
//        if (!check[i]) {
//            check[i] = true;
//            if (go(sum + input[i], cnt + 1)) {
//                return true;
//            }
//
//            check[i] = false;
//        }
//    }
//
//    return false;
//}
//
//int main(void) {
//    for (int i = 0; i < 9; i++) {
//        scanf("%d", &input[i]);
//    }
//    sort(input, input + 9);
//
//    go(0, 0);
//
//    return 0;
//}