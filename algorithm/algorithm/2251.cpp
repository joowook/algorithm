//#include <iostream>
//#include <queue>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int check[201][201];
//
//struct number {
//    int a;
//    int b;
//
//    number(int a1, int b1) {
//        a = a1;
//        b = b1;
//    }
//};
//queue<number> q;
//vector <int> ans;
//int ta, tb, tc;
//int a, b, c;
//void ch() {
//    if (check[ta][tb] == 0) {
//        q.push(number(ta, tb));
//        check[ta][tb] = 1;
//        if (ta == 0) {
//            ans.push_back(tc);
//        }
//    }
//
//    ta = a, tb = b, tc = c;
//}
//int main(void) {
//    int A, B, C;
//
//    scanf("%d %d %d", &A, &B, &C);
//    number num(0,0);
//    check[num.a][num.b] = 1;
//    ans.push_back(C);
//    q.push(num);
//
//    while (!q.empty()) {
//        a = q.front().a;
//        b = q.front().b;
//        c = C - a - b;
//        q.pop();
//        ta = a, tb = b, tc = c;
//        //A
//        
//        if (a + b <= B) {
//            tb += ta;
//            ta = 0;
//        }
//        else {
//            ta -= B - tb;
//            tb = B;
//        }
//        ch();
//        if (a + c <= C) {
//            tc += ta;
//            ta = 0;
//        }
//        else {
//            ta -= C - tc;
//            tc = C;
//        }
//        ch();
//        
//        //B
//        if (b + c <= C) {
//            tc += tb;
//            tb = 0;
//        }
//        else {
//            tb -= C - tc;
//            tc = C;
//        }
//        ch();
//        if (b + a <= A) {
//            ta += tb;
//            tb = 0;
//        }
//        else {
//            tb -= A - ta;
//            ta = A;
//        }
//        ch();
//
//        //C
//        if (c + a <= A) {
//            ta += tc;
//            tc = 0;
//        }
//        else {
//            tc -= A - ta;
//            ta = A;
//        }
//        ch();
//        if (c + b <= B) {
//            tb += tc;
//            tc = 0;
//        }
//        else {
//            tc -= B - tb;
//            tb = B;
//        }
//        ch();
//    }
//
//    sort(ans.begin(), ans.end());
//
//    for (int i = 0; i < ans.size(); i++) {
//        printf("%d ", ans[i]);
//    }
//
//    return 0;
//}