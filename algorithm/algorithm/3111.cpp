//#include <iostream> //Á¸³ª¾î·Æ³×
//#include <string>
//using namespace std;
//
//string A, T;
//char l[300001], r[300001];
//int n, m, ln, rn;
//
//bool check(bool flag) {
//    int len = ln;
//    char * stack = l;
//
//    if (!flag) {
//        len = rn;
//        stack = r;
//    }
//
//    if (len < n) {
//        return false;
//    }
//
//    for (int i = 0; i < n; i++) {
//        if (flag == true) {
//            if (stack[len - i - 1] != A[n - 1 - i]) {
//                return false;
//            }
//        }
//        else {
//            if (stack[len - i - 1] != A[i]) {
//                return false;
//            }
//        }
//    }
//
//    if (flag) {
//        ln -= n;
//    }
//    else {
//        rn -= n;
//    }
//
//    return true;
//}
//int main(void) {
//    cin >> A >> T;
//
//    n = A.size();
//    m = T.size();
//    int left = 0;
//    int right = m - 1;
//    
//    bool flag = true;
//
//    while (left <= right) {
//        if (flag) { //true left , false right
//            l[ln++] = T[left++];
//        }
//        else {
//            r[rn++] = T[right--];
//        }
//
//        if (check(flag)) {
//            flag = !flag;
//        }
//    }
//
//    for (int i = ln - 1; i >= 0; i--) {
//        r[rn++] = l[i];
//        check(false);
//    }
//
//    for (int i = rn - 1; i >= 0; i--) {
//        cout << r[i];
//    }
//    
//    return 0;
//}