//#include <iostream>
//#include <vector>
//#include <cstring>
//using namespace std;
//
//int a[100001];
//int check[100001];
//int step[100001];
//int ct = 0;
//
//void dfs(int n, int cnt) {
//    check[n] = cnt;
//
//    int next = a[n];
//    if (!check[next]) {
//        check[next] = cnt;
//        step[n] = ++ct;
//        dfs(next, cnt);
//    }
//    else if (check[n] == check[next]) {
//        ct++;
//        ct = ct - step[next]+1;
//    }
//    else if (check[n] != check[next]) {
//        ct = 0;
//    }
//}
//int main(void) {
//    int T, cnt=0, v, ans=0;
//    scanf("%d", &T);
//    
//    while (T--) {
//        int n;
//        scanf("%d", &n);
//        v = 0;
//        for (int i = 1; i <= n; i++) {
//            scanf("%d", &v);
//            if (i == v) {
//                check[v] = ++cnt;
//                ans++;
//            }
//            a[i]=v;
//        }
//
//        for (int i = 1; i <= n; i++) {
//            if (!check[i]) {
//                dfs(i,++cnt);
//                ans += ct;
//                ct = 0;
//            }
//        }
//
//        printf("%d\n", n-ans);
//        
//        memset(check, false, sizeof(check));
//        memset(step, false, sizeof(step));
//        cnt = 0;
//        ans = 0;
//    }
//
//    return 0;
//}