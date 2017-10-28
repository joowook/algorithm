//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <string>
//using namespace std;
//
//struct Person {
//    int age;
//    string name;
//    int join;
//};
//
//bool cmp(const Person &u, const Person &v) {
//    if (u.age == v.age) {
//        return u.join < v.join;
//    }
//    else {
//        return u.age < v.age;
//    }
//}
//int main(void) {
//    int n;
//    cin >> n;
//    vector<Person> p(n);
//
//    for (int i = 0; i < n; i++) {
//        cin >> p[i].age >> p[i].name;
//        p[i].join = i;
//    }
//    sort(p.begin(), p.end(), cmp);
//
//    for (int i = 0; i < n; i++) {
//        cout << p[i].age << " " << p[i].name << '\n';
//    }
//
//    return 0;
//}
//
//
//
////#include <iostream>
////#include <string>
////#include <vector>
////#include <algorithm>
////using namespace std;
////
////struct Person {
////    int age;
////    string name;
////};
////
////bool cmp(const Person &u, const Person &v) {
////    return u.age < v.age;
////}
////
////int main(void) {
////    int n;
////    
////
////    cin >> n;
////    
////    vector<Person> p(n);
////
////    for (int i = 0; i < n; i++) {
////        cin >> p[i].age >> p[i].name;
////    }
////    stable_sort(p.begin(), p.end(), cmp);
////
////    for (int i = 0; i < n; i++) {
////        cout << p[i].age << " " << p[i].name << '\n';
////    }
////
////    return 0;
////}