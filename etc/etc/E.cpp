//#include <iostream>
//#include <algorithm>
//#include <cstring>
//
//#define MAXNUM 1000000000000000000
//
//using namespace std;
//
//int w, n;
//int man[500001];
//long long dp[500001];
//
//long long solution(int index)
//{
//    if (index == n + 1)
//        return 0;
//
//    long long& ret = dp[index];
//
//    if (ret != -1) return ret;
//
//    ret = MAXNUM;
//    int sum = man[index];
//    for (int next = index + 1; (sum <= w&&next <= n + 1); next++)
//    {
//        ret = min(ret, max((long long)(w - sum)*(w - sum), solution(next)));
//        sum += man[next];
//    }
//
//    return ret;
//
//}
//
//int main(void)
//{
//    scanf("%d %d", &w, &n);
//
//    memset(dp, -1, sizeof(dp));
//
//    for (int i = 1; i <= n; i++)
//        scanf("%d", &man[i]);
//
//    printf("%lld\n", solution(1));
//
//
//    return 0;
//}
//
