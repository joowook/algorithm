//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <cstring>
//using namespace std;
//
//int w, n;
//vector<int> s;
//
//int dp[800000][4];
//
//int solution(int weight, int index, int cnt) {
//    int &ret = dp[weight][cnt];
//    if (cnt == 0) {
//        if (weight == 0)
//            return 1;
//        else
//            return 0;
//    }
//
//    if (weight == 0) {
//        if (cnt > 0)
//            return 0;
//    }
//
//    if (ret != -1) {
//        return ret;
//    }
//
//    ret = 0;
//
//    int next = index - 1;
//    if (next < 0)
//        return 0;
//    while (s[next] > weight) next--;
//
//    for (int i = next; i >= 0; i--) {
//        ret = ret || solution(weight - s[i], i, cnt - 1);
//        if (ret == 1)
//            return ret;
//    }
//
//    return ret;
//}
//
//int main(void) {
//    memset(dp, -1, sizeof(dp));
//    scanf("%d %d", &w, &n);
//    s = vector<int>(n);
//
//    for (int i = 0; i < n; i++)
//        scanf("%d", &s[i]);
//
//    sort(s.begin(), s.end());
//    int start;
//
//    for (int i = 0; i < n; i++) {
//        start = i;
//        if (s[i] >= w)
//        {
//            start = i - 1;
//            break;
//        }
//    }
//
//    for(int i=start; i>=0; i--) 
//        if (solution(w - s[i], i, 3))
//        {
//            printf("YES\n");
//            return 0;
//        }
//
//    printf("NO\n");
//
//    return 0;
//}
