//#include <iostream>
//using namespace std;
//
//int main(void) {
//    int card[11][11] = { 0 };
//    int count = 0;
//    
//    for (int i = 1; i <= 10; i++) {
//        for (int j = 1; j <= 10; j++) {
//            if (i == j) { //¶¯
//                card[i][j] = i + j + 100;
//            }
//            else { //³¡
//                if (i + j < 10)
//                    card[i][j] = i + j;
//                else
//                    card[i][j] = (i+j) %10;
//            }
//        }
//    }
//
//    int c1, c2;
//    cin >> c1 >> c2;
//    int cmp = card[c1][c2];
//
//    for (int i = 1; i <= 10; i++) {
//        for (int j = 1; j <= 10; j++) {
//            if (c1 == i || c2 == j) {
//                continue;
//            }
//            if (cmp > card[i][j]) {
//                if (i == j)
//                    count++;
//                else
//                    count += 2;
//            }
//            
//        }
//    }
//
//    printf("%.3f", ((float)count / 153));
//
//    return 0;
//}