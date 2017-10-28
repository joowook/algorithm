//#include <iostream>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//int main(void) {
//    string s = "";
//    string ans = "";
//    int nam, moc, count = 0, N;
//    int first = 1;
//
//    cin >> s;
//
//    for (int i = 0; i < s.size(); i++) {
//        N = s[i]-'0';
//        
//        while (N) {
//           
//            nam = N % 2;
//            moc = N / 2;
//
//            ans += nam + '0';
//            count++;
//            N = moc;
//        }
//        if (first == 1) {
//            first = 0;
//        }
//        else if (count != 3) {
//            while (count != 3) {
//                ans += '0';
//                count++;
//            }
//        }
//        count = 0;
//        reverse(ans.begin(), ans.end());
//        cout << ans;
//        ans = "";
//    }
//    if (s.size() == 1 && s[0] == '0') // 숫자가 0일때
//        cout << '0';
//
//    return 0;
//}