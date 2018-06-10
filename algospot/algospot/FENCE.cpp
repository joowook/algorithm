//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int go(vector<int> &a, int left, int right) {
//    if (left == right) {
//        return a[left];
//    }
//
//    int mid = (left + right) / 2;
//    int ans = max(go(a, left, mid), go(a, mid + 1, right));
//    
//    int low = mid;
//    int high = mid + 1;
//    int x = min(a[low], a[high]);
//
//    ans = max(ans, x * 2);
//
//    while (left < low || high < right) {
//        if (high < right && (low == left || a[low - 1] < a[high + 1])) {
//            high++;
//            x = min(x, a[high]);
//        }
//        else {
//            low--;
//            x = min(x, a[low]);
//        }
//
//        ans = max(ans, x *(high - low + 1));
//    }
//
//
//    return ans;
//}
//int main(void) {
//    int tc;
//
//    scanf("%d", &tc);
//
//    while (tc--) {
//        int N;
//        int ans = 0;
//
//        scanf("%d", &N);
//
//        vector<int> a(N);
//
//        for (int i = 0; i < N; i++) {
//            scanf("%d", &a[i]);
//        }
//
//        ans = go(a, 0, N - 1);
//
//        printf("%d\n", ans);
//    }
//
//
//    return 0;
//}
//
//
////#include <iostream>
////#include <vector>
////#include <algorithm>
////using namespace std;
////
////int N;
////int go(vector<int> &a, int i, bool flag) {
////    int ans = 0;
////
////    if (flag) { // big  
////        for (int j = i; j < N; j++) {
////            if (a[i] <= a[j]) {
////                ans += a[i];
////            }
////            else {
////                break;
////            }
////        }
////
////    }
////    else { // small
////        int j = 0;
////
////        for (j = i; j >= 0; j--) {
////            if (a[i] > a[j]) {
////                break;
////            }
////        }
////
////        if (i < N - 1 && a[i] <= a[i + 1]) {
////            ans += (i - j - 1) * a[i] + go(a, i, true);
////        }
////        else {
////            ans += (i - j) * a[i];
////        }
////    }
////
////    return ans;
////}
////
////int main(void) {
////    int tc = 0;
////
////    scanf("%d", &tc);
////
////    while (tc--) {
////        int ans = 0;
////
////        scanf("%d", &N);
////
////        vector<int> a(N);
////
////        for (int i = 0; i < N; i++) {
////            scanf("%d", &a[i]);
////            if (ans < a[i]) {
////                ans = a[i];
////            }
////        }
////
////        for (int i = 0; i <= N - 2; i++) {
////            if (a[i] < a[i + 1]) {
////                ans = max(ans, go(a, i, true));
////            }
////            else if (a[i] > a[i + 1]) {
////                if (a[i + 1] == 1) {
////                    continue;
////                }
////                ans = max(ans, go(a, i + 1, false));
////            }
////            else {
////                int cnt = 1;
////                for (int j = i + 1; j < N; j++) {
////                    if (a[i] == a[j]) {
////                        cnt++;
////
////                        i = j - 1;
////                        if (j == N - 1) {
////                            ans = max(ans, cnt* a[i]);
////                        }
////                    }
////                    else if(a[i]<a[j]) {
////                        i = j - 1;
////                        ans = max(ans, a[i] * (cnt - 1) + go(a, i, true));
////                        break;
////                    }
////                    else {
////                        ans = max(ans, a[i] * cnt);
////                        i = j - 1;
////
////                        ans = max(ans, go(a, i, false));
////                        break;
////                    }
////                }
////
////            }
////        }
////
////        printf("%d\n", ans);
////    }
////
////
////
////    return 0;
////}