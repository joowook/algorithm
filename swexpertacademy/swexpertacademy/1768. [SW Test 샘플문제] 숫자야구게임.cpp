//#define N 4
//
//typedef struct {
//    int strike;
//    int ball;
//} Result;
//
//
//extern Result query(int guess[]);
//
//bool check[20001];
//int cnt[10];
//
//void init() {
//    for (int i = 10123; i <= 19876; i++) {
//        check[i] = false;
//    }
//
//    for (int i = 10123; i <= 19876; i++) {
//        int tmp = i;
//
//        while (tmp != 1) {
//            int x = tmp % 10;
//            cnt[x]++;
//            tmp /= 10;
//        }
//
//        for (int j = 0; j < 10; j++) {
//            if (cnt[j] > 1) {
//                check[i] = true;
//            }
//            cnt[j] = 0;
//        }    
//    }
//}
//
//void is_strike(int guess[], int m) {
//    for (int i = 10123; i <= 19876; i++) {
//        if (!check[i]) {
//            int tmp = i;
//            int cnt = 0;
//            int t = 3;
//
//            while (tmp != 1) {
//                int x = tmp % 10;
//                if (guess[t--] == x) {
//                    cnt++;
//                }
//                tmp /= 10;
//            }
//
//            if (cnt != m) {
//                check[i] = true;
//            }
//        }
//    }
//}
//
//void is_strike_ball(int bg, Result &result, int guess[], int m) {
//    for (int i = 10123; i <= 19876; i++) {
//        if (!check[i]) {
//            int tmp = i;
//            int cnt = 0;
//
//            while (tmp != 1) {
//                int x = tmp % 10;
//                if ((bg & (1 << x)) != 0) {
//                    cnt++;
//                }
//                tmp /= 10;
//            }
//            if (cnt != m) {
//                check[i] = true;
//            }
//        }
//    }
//
//    for (int i = 0; i < m + 1; i++) {
//        if (result.strike == i) {
//            is_strike(guess, i);
//        }
//    }
//}
//
//int go(int guess[]) {
//    int k = 0;
//
//    for (int i = 10123; i <= 19876; i++) {
//        if (!check[i]) {
//            int tmp = i;
//            int t = 3;
//            while (tmp != 1) {
//                int x = tmp % 10;
//                guess[t--] = x;
//                tmp /= 10;
//            }
//
//            k = i;
//
//            break;
//        }
//    }
//
//    if (k == 0) {
//        return 1;
//    }
//
//    Result result = query(guess);
//
//    int bg = 0;
//    for (int i = 0; i < 4; i++) {
//        bg |= 1 << guess[i];
//    }
//
//    if (result.strike + result.ball == 0) {
//        for (int i = 10123; i <= 19876; i++) {
//            if (!check[i]) {
//                int bv = 0;
//
//                int tmp = i;
//                    
//                while (tmp != 1) {
//                    int x = tmp % 10;
//                    bv |= 1 << x;
//                    tmp /= 10;
//                }
//                
//                if ((bg & bv) != 0) {
//                    check[i] = true;
//                }
//            }
//        }
//    }
//    else if (result.strike + result.ball == 4) {
//        for (int i = 10123; i <= 19876; i++) {
//            if (!check[i]) {
//                int bv = 0;
//
//                int tmp = i;
//
//                while (tmp != 1) {
//                    int x = tmp % 10;
//                    bv |= 1 << x;
//                    tmp /= 10;
//                }
//
//                if (bg != bv) {
//                    check[i] = true;
//                }
//            }
//        }
//
//        for (int i = 0; i < 4; i++) {
//            if (result.strike == i) {
//                is_strike(guess, i);
//            }
//        }
//
//        return 2;
//    }
//    else if (result.strike == 4) {
//        return 1;
//    }
//    else {
//        for (int i = 1; i <= 3; i++) {
//            if (result.strike + result.ball == i) {
//                is_strike_ball(bg, result, guess, i);
//            }
//        }
//    }
//
//    return 0;
//}
//
//bool go2(int guess[]) {
//    int k = 0;
//    for (int i = 10123; i <= 19876; i++) {
//        if (!check[i]) {
//            int tmp = i;
//            int t = 3;
//            while (tmp != 1) {
//                int x = tmp % 10;
//                guess[t--] = x;
//                tmp /= 10;
//            }
//
//            k = i;
//            break;
//        }
//    }
//
//    if (k == 0) {
//        return true;
//    }
//
//    Result result = query(guess);
//
//    for (int i = 0; i < 4; i++) {
//        if (result.strike == i) {
//            is_strike(guess, i);
//        }
//    }
//
//    if (result.strike == 4) {
//        return true;
//    }
//
//    return false;
//}
//
//void doUserImplementation(int guess[]) {
//    init();
//
//    bool flag = true;
//
//    while (1) {
//        if (flag) {
//            int x = 0;
//            if ((x = go(guess)) == 1) {
//                return;
//            }
//            else if (x == 2) {
//                flag = false;
//            }
//        }
//        else {
//            if (go2(guess)) {
//                return;
//            }
//        }
//          
//    }
//}