//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//struct Meeting {
//    int b;
//    int e;
//};
//
//bool cmp(const Meeting &u,const Meeting &v) {
//    if (u.e == v.e) {
//        return u.b < v.b;
//    }
//    else {
//        return u.e < v.e;
//    }
//}
//
//int main(void) {
//    int n;
//
//    scanf("%d", &n);
//    
//    vector<Meeting> v(n);
//    for (int i = 0; i < n; i++) {
//        scanf("%d %d", &v[i].b, &v[i].e);
//    }
//
//    sort(v.begin(), v.end(), cmp);
//
//    int count = 0;
//    int B = 0, E = 0;
//    for (int i = 0; i < n; i++) {
//        if (v[i].b >= E) {
//            E = v[i].e;
//            count++;
//        }
//    }
//
//    printf("%d", count);
//
//    return 0;
//}