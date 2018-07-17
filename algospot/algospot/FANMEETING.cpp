//#include <iostream>
//#include <vector>
//#include <string>
//#include <cmath>
//#include <algorithm>
//using namespace std;
//
////void normalize(vector<int> &num) {
////    num.push_back(0);
////
////    int n = num.size();
////
////    for (int i = 0; i < n; i++) {
////        if (num[i] < 0) {
////            int borrow = (abs(num[i] + 9)) / 10;
////            num[i + 1] -= borrow;
////            num[i] += borrow * 10;
////        }
////        else {
////            num[i + 1] = num[i] / 10;
////            num[i] %= 10;
////        }
////    }
////}
//
//vector<int> multiply(vector<int> &a, vector<int> &b) {
//    vector<int> c(a.size() + b.size() + 1, 0);
//    int an = a.size();
//    int bn = b.size();
//
//    for (int i = 0; i < an; i++) {
//        for (int j = 0; j < bn; j++) {
//            c[i + j] += a[i] * b[j];
//        }
//    }
//
//    //normalize(c);
//
//    return c;
//}
//
//void addTo(vector<int> &a, const vector<int> &b, int k) {
//    a.resize(max(a.size(), b.size() + k));
//
//    int bn = b.size();
//
//    for (int i = 0; i < bn; i++) {
//        a[i + k] += b[i];
//    }
//
//    //normalize(a);
//}
//
//void subFrom(vector<int> &a, const vector<int> &b) {
//    a.resize(max(a.size(), b.size()) + 1);
//    int bn = b.size();
//
//    for (int i = 0; i < bn; i++) {
//        a[i] -= b[i];
//    }
//
//    //normalize(a);
//}
//vector<int> karatsuba(vector<int> &a, vector<int> &b) {
//    int an = a.size();
//    int bn = b.size();
//
//    if (an < bn) {
//        return karatsuba(b, a);
//    }
//
//    if (an == 0 || bn == 0) {
//        return vector<int>();
//    }
//
//    if (an <= 50) {
//        return multiply(a, b);
//    }
//
//    int half = an / 2;
//
//    vector<int> a0(a.begin(), a.begin() + half);
//    vector<int> a1(a.begin() + half, a.end());
//    vector<int> b0(b.begin(), b.begin() + min<int>(b.size(), half));
//    vector<int> b1(b.begin() + min<int>(b.size(), half), b.end());
//
//    vector<int> z2 = karatsuba(a1, b1);
//    vector<int> z0 = karatsuba(a0, b0);
//
//    addTo(a0, a1, 0);
//    addTo(b0, b1, 0);
//
//    vector<int> z1 = karatsuba(a0, b0);
//    subFrom(z1, z2);
//    subFrom(z1, z0);
//
//    vector<int> ret;
//
//    addTo(ret, z0, 0);
//    addTo(ret, z1, half);
//    addTo(ret, z2, half + half);
//
//    return ret;
//}
//
//int hugs(string &a, string &b) {
//    int an = a.size();
//    int bn = b.size();
//    vector<int> A(an);
//    vector<int> B(bn);
//
//    for (int i = 0; i < an; i++) {
//        A[i] = (a[i] == 'M');
//    }
//
//    for (int i = 0; i < bn; i++) {
//        B[bn - 1 - i] = (b[i] == 'M');
//    }
//
//    vector<int> C = karatsuba(A, B);
//    int ans = 0;
//
//    for (int i = an - 1; i < bn; i++) {
//        if (C[i] == 0) {
//            ans++;
//        }
//    }
//
//    return ans;
//}
//
//int main(void) {
//    int T;
//
//    scanf("%d", &T);
//
//    while (T--) {
//        string s1, s2;
//
//        cin >> s1 >> s2;
//
//        printf("%d\n", hugs(s1, s2));
//    }
//
//    return 0;
//}