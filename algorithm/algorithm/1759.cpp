//#include <iostream>
//#include <string>
//#include <algorithm>
//using namespace std;
//char ch[16];
//
//bool check(string s) {
//    int mo = 0, ja = 0;
//
//    for (int i = 0; i < s.size(); i++) {
//        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
//            mo++;
//        }
//        else {
//            ja++;
//        }
//    }
//
//    return mo >= 1 && ja >= 2;
//}
//void go(string s, int index, int goal, int C) {
//    if (s.size() == goal) {
//        if (check(s)) {
//            cout << s << '\n';
//        }
//        return;
//    }
//
//    if (index == C) {
//        return;
//    }
//    go(s + ch[index], index + 1, goal, C);
//    go(s, index + 1, goal, C);
//}
//int main(void) {
//    int L, C;
//
//    cin >> L >> C;
//
//    for (int i = 0; i < C; i++) {
//        cin >> ch[i];
//    }
//    sort(ch, ch + C);
//
//    go("", 0, L, C);
//
//    return 0;
//}
//
//
////#include <iostream>
////#include <algorithm>
////#include <string>
////using namespace std;
////
////char ch[16];
////int v[16];
////
////int main(void) {
////    int L, C;
////
////    scanf("%d %d", &L, &C);
////    
////    for (int i = 0; i < C; i++) {
////        cin >> ch[i];
////        /*getchar();
////        scanf("%c", &ch[i]);*/
////    }
////
////    sort(ch, ch + C);
////    for (int i = 0; i < L; i++) {
////        v[i] = 0;
////    }
////    for (int i = L; i < C; i++) {
////        v[i] = 1;
////    }
////
////    do {
////        string tmp;
////        int mo = 0, ja = 0;
////        for (int i = 0; i < C; i++) {
////            if (v[i] == 0) {
////                if (ch[i] == 'a' || ch[i] == 'e' || ch[i] == 'i' || ch[i] == 'o' || ch[i] == 'u') {
////                    mo++;
////                }
////                else {
////                    ja++;
////                }
////                tmp += ch[i];
////            }
////        }
////        if (mo >= 1 && ja >= 2) {
////            cout << tmp << '\n';
////        }
////    } while (next_permutation(v, v+C));
////
////
////    return 0;
////}