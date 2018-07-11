//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
//int main(void) {
//    int T;
//
//    scanf("%d", &T);
//
//    while (T--) {
//        string singer, fan;
//        
//        cin >> singer;
//        cin >> fan;
//
//        int n = singer.size();
//        int m = fan.size();
//        int ans = 0;
//
//        vector<int> singer_M;
//        vector<int> fan_M;
//
//        for (int i = 0; i < n; i++) {
//            if (singer[i] == 'M') {
//                singer_M.push_back(i);
//            }
//        }
//
//       /* for (int i = 0; i < m; i++) {
//            fan_M.push_back(i);
//        }*/
//        int nn = singer_M.size();
//
//        for (int i = 0; i <= m - n; i++) {
//            bool flag = true;
//
//            for (int j = i; j < i + nn; j++) {
//                if (fan[singer_M[j - i] + i] == 'M') {
//                    flag = !flag;
//                    break;
//                }
//
//            }
//
//            if (flag) {
//                ans++;
//            }
//
// /*           for (int j = i; j < i + n; j++) {
//                if (singer[j - i] =='M' && fan[j] == 'M') {
//                    flag = !flag;
//                    break;
//                }
//            }
//            if (flag) {
//                ans++;
//            }*/
//        }
//
//        printf("%d\n", ans);
//    }
//
//    return 0;
//}