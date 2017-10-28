//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main(void) {
//    int N;
//    scanf("%d", &N);
//
//    vector<long long> c(N);
//    for (int i = 0; i < N; i++) {
//        scanf("%lld", &c[i]);
//    }
//
//    sort(c.begin(), c.end());
//
//    long long ans = c[0];
//    int ans_cnt = 1;
//    int cnt = 1;
//    for (int i = 1; i < N; i++) {
//        if (c[i - 1] == c[i]) {
//            cnt++;
//        }
//        else
//        {
//            cnt = 1;
//        }
//
//        if (ans_cnt < cnt) {
//            ans_cnt = cnt;
//            ans = c[i];
//        }  
//    }
//
//    cout << ans;
//
//    return 0;
//}