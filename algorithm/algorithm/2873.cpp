//#include <iostream>
//#include <algorithm>
//#include <string>
//using namespace std;
//
//int a[1001][1001];
//int r, c;
//
//void even(){
//    int xr, xc, tr, tc, br, bc;
//    int cnt = 2000;
//    string ans_top, ans_bottom;
//
//
//    for (int i = 0; i < r; i++) {
//        for (int j = 0; j < c; j++) {
//            if (cnt > a[i][j] && ((i + j) % 2) == 1) {
//                cnt = a[i][j];
//                xr = i;
//                xc = j;
//            }
//        }
//    }
//
//    for (int i = 0; i < r; i += 2) {
//        tr = i;
//        if (i + 1 < xr) {
//            for (int j = 0; j < c - 1; j++) {
//                ans_top += 'R';
//            }
//            ans_top += 'D';
//            for (int j = 0; j < c - 1; j++) {
//                ans_top += 'L';
//            }
//            ans_top += 'D';
//        }
//        else
//            break;
//    }
//
//    tc = 0;
//
//    for (int i = r - 1; i >= 0; i -= 2) {
//        br = i;
//        if (i - 1 > xr) {
//            for (int j = 0; j < c - 1; j++) {
//                ans_bottom += 'R';
//            }
//            ans_bottom += 'D';
//            for (int j = 0; j < c - 1; j++) {
//                ans_bottom += 'L';
//            }
//            ans_bottom += 'D';
//        }
//        else
//            break;
//    }
//
//    bc = c - 1;
//
//    for (int i = tc; i < bc; i += 2) {
//        tc = i;
//        if (i + 1 < xc) {
//            ans_top += 'D';
//            ans_top += 'R';
//            ans_top += 'U';
//            ans_top += 'R';
//        }
//        else
//            break;
//    }
//
//    for (int i = bc; i >= tc; i -= 2) {
//        bc = i;
//        if (i - 1 > xc) {
//            ans_bottom += 'D';
//            ans_bottom += 'R';
//            ans_bottom += 'U';
//            ans_bottom += 'R';
//        }
//        else
//            break;
//    }
//
//    if (tr == xr) {
//        ans_top += 'D';
//        ans_top += 'R';
//    }
//    else {
//        ans_bottom += 'D';
//        ans_bottom += 'R';
//    }
//
//    reverse(ans_bottom.begin(), ans_bottom.end());
//
//    ans_top += ans_bottom;
//
//    cout << ans_top;
//}
//
//void odd() {
//    string ans;
//    if (r % 2 == 0 && c % 2 == 1) {
//        for (int i = 0; i < c; i++) {
//            if (i % 2 == 0) {
//                for (int j = 0; j < r - 1; j++) {
//                    ans += 'D';
//                }
//                if(i != c - 1)
//                    ans += 'R';
//            }
//            else {
//                for (int j = 0; j < r - 1; j++) {
//                    ans += 'U';
//                }
//                ans += 'R';
//            }
//        }
//    }
//    else {
//        for (int i = 0; i < r; i++) {
//            if (i % 2 == 0) {
//                for (int j = 0; j < c - 1; j++) {
//                    ans += 'R';
//                }
//                if(i != r-1)
//                    ans += 'D';
//            }
//            else {
//                for (int j = 0; j < c - 1; j++) {
//                    ans += 'L';
//                }
//                ans += 'D';
//            }
//        }
//    }
//
//    cout << ans;
//}
//int main(void) {
// 
//    scanf("%d %d", &r, &c);
//
//    for (int i = 0; i < r; i++) {
//        for (int j = 0; j < c; j++) {
//            scanf("%d", &a[i][j]);
//        }
//    }
//
//    if (r % 2 == 0 && c % 2 == 0) {
//        even();
//    }
//    else {
//        odd();
//    }
//
//    return 0;
//}