//// �ð� �ݴ� �������� �˾Ƽ� �򰥷���, dp�� ����ϳ�? �ð� �ȿ� �ɱ�? ��� ������. ��Ž�� ������� �� �� ��� ������. ���� ����� ���ٴ� ���� ���ݰ� �� �ڿ�  0~3�� �ݺ��ϴ� �ɷ� ������ �ذ�
//
//#include <iostream>
//using namespace std;
//
//#define MAX 2000000000
//int a[4][4];
//int ans;
//int sw[10][6] = { { 0,1,2,-1 }, { 3,7,9,11, -1 }, { 4,10,14,15, -1 }, {0,4,5,6,7, -1}, {6,7,8,10,12, -1}, {0,2,14,15, -1}, {3,14,15, -1}, {4,5,7,14,15, -1}, {1,2,3,4,5,-1},  {3,4,5,9,13,-1} };
//
//void clock(int sw_num) {
//    for (int j = 0; sw[sw_num][j] != -1; j++) {
//        int x = sw[sw_num][j] / 4;
//        int y = sw[sw_num][j] % 4;
//
//        a[x][y] += 3;
//
//        if (a[x][y] == 15) {
//            a[x][y] = 3;
//        }
//    }
//}
//
//bool up() {
//    for (int i = 0; i < 4; i++) {
//        for (int j = 0; j < 4; j++) {
//            if (a[i][j] != 12) {
//                return false;
//            }
//        }
//    }
//
//    return true;
//}
//
//void init() {
//    ans = MAX;
//}
//
//void go(int n, int cnt) {
//    if (ans < cnt) {
//        return;
//    }
//    if (up()) {
//        if (ans > cnt) {
//            ans = cnt;
//        }
//
//        return;
//    }
//
//    if (n == 10) {
//        return;
//    }
//  
//    for (int i = 0; i < 4; i++) { // ���� ���⼭ clock Ƚ����ŭ ȣ���ϰ� go �ڿ� clock �ݴ븸ŭ ȣ�� �߾��µ� �ð�� 4�� �ݺ��ϸ� ���ڸ��̱� ������ �׷������� �ʾƵ� �ȴ�.
//        go(n + 1, cnt + i);
//        clock(n);
//    }
//}
//int main(void) {
//    int tc = 0;
//
//    scanf("%d", &tc);
//
//    while (tc--) {
//        for (int i = 0; i < 16; i++) {
//            init();
//
//            int input;
//            scanf("%d", &input);
//
//            int x = i / 4;
//            int y = i % 4;
//
//            a[x][y] = input;
//        }
//
//        go(0, 0);
//
//        if (ans == MAX) {
//            printf("-1\n");
//        }
//        else {
//            printf("%d\n", ans);
//        }
//    }
//
//    return 0;
//}