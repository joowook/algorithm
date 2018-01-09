//#include <iostream>
//#include <stack>
//#include <vector>
//using namespace std;
//
//int main(void) {
//    int n;
//
//    scanf("%d", &n);
//    
//    vector <int> a(n);
//
//    for (int i = 0; i < n; i++) {
//        scanf("%d", &a[i]);
//    }
//
//    long long ans = 0;
//    stack <pair<int, int>> s;
//
//    for (int i = 0; i < n; i++) {
//        pair <int, int> p(i, 1);
//
//        while (!s.empty()) {
//            if (a[s.top().first] <= a[i]) {
//                ans += s.top().second;
//                if (a[s.top().first] == a[i]) {
//                    p.second += s.top().second;
//                }
//                s.pop();
//            }           
//            else {
//                break;
//            }
//        }
//        
//        if (!s.empty()) {
//            ans += 1LL;
//        }
//        s.push(p);
//    }
//
//    printf("%lld\n", ans);
//    return 0;
//}