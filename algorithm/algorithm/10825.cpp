//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//#include <tuple>
//using namespace std;
//
//struct Person {
//    string name;
//    int kor;
//    int eng;
//    int mat;
//};
//
//bool cmp(const Person &u, const Person &v) {
//    return make_tuple(-u.kor, u.eng, -u.mat, u.name) < make_tuple(-v.kor, v.eng, -v.mat, v.name);
//}
////bool cmp(const Person &u, const Person &v) {
////    if (u.kor == v.kor) {
////        if (u.eng == v.eng) {
////            if (u.mat == v.mat) {
////                return u.name < v.name;
////            }
////            else {
////                return u.mat > v.mat;
////            }
////        }
////        else {
////            return u.eng < v.eng;
////        }
////    }
////    else {
////        return u.kor > v.kor;
////    }
////}
//
//int main(void) {
//    int n;
//    cin >> n;
//
//    vector<Person> p(n);
//    for (int i = 0; i < n; i++) {
//        cin >> p[i].name >> p[i].kor >> p[i].eng >> p[i].mat;
//    }
//
//    sort(p.begin(), p.end(), cmp);
//
//    for (int i = 0; i < n; i++) {
//        cout << p[i].name << '\n';
//    }
//
//    getchar();
//    getchar();
//
//    return 0;
//}