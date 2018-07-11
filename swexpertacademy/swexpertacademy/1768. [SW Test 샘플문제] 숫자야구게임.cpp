//#define N 4
//
//typedef struct {
//    int strike;
//    int ball;
//} Result;
//
//extern Result query(int guess[]);
//
//bool no_number[10]; // true이면 제외
//int answer[4];
//
//void doUserImplementation(int guess[]) {
//    for (int i = 0; i < 4; i++) {
//        answer[i] = -1;
//    }
//
//    guess[0] = 8;
//    guess[1] = 9;
//    guess[2] = 7;
//    guess[3] = 5;
//
//    int n = 100;
//    while (n--) {
//        Result result = query(guess);
//        if (result.strike + result.ball == 0) {
//            for (int i = 0; i < 4; i++) {
//                no_number[guess[i]] = true;
//            }
//
//            int t = 0;
//            for (int i = 0; i < 4; i++) {
//                for (int j = t; j < 10; j++) {
//                    if (!no_number[j]) {
//                        guess[i] = j;
//                        t = j + 1;
//
//                        break;
//                    }
//                }
//            }
//        }
//        else if (result.strike + result.ball == 4) {
//            for (int i = 0; i < 10; i++) {
//                no_number[i] = true;
//            }
//
//            for (int i = 0; i < 4; i++) {
//                no_number[guess[i]] = false;
//            }
//
//            if (result.strike == 0) { //4ball
//
//            }
//            else if (result.strike == 1) { // 3ball
//
//            }
//            else if (result.strike == 2) { // 2ball
//
//            }
//            else if (result.strike == 3) { //1ball
//
//            }
//            else if (result.strike == 4) { // 0ball 
//                return;
//            }
//        }
//        else {
//
//        }
//
//        
//    }
//}