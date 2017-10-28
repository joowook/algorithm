//#include <iostream> //못풀었음
//#include <cstring>
//using namespace std;
//
//int a[100][3];
//int sum[100];
//int js[3];
//int dob[3];
//
//int main(void) {
//    int n, k, ans_i,  ans_cnt=0, cnt=0;
//    scanf("%d %d", &n, &k);
//
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < 3; j++) {
//            scanf("%d", &a[i][j]);
//        }
//    }
//
//    while (1) {
//        for (int i = 0; i < 3; i++) {
//            dob[i] += js[i];
//            js[i] = 0;
//        }
//        if (ans_cnt >= k)
//            break;
//        int ans = 1000000;
//        memset(sum, 0, sizeof(sum));
//        
//        for (int i = 0; i < n; i++) {
//            for (int j = 0; j < 3; j++) {
//                sum[i] += a[i][j];
//            }
//            if (ans > sum[i] && sum[i] !=0) {
//                ans = sum[i];
//                ans_i = i;
//            }
//        }
//        for (int i = 0; i < 3; i++) {
//            js[i] = a[ans_i][i];
//        }
//        ans_cnt = 0;
//        for (int i = 0; i < n; i++) {
//            for (int j = 0; j < 3; j++) {
//                if (js[j] >= a[i][j])
//                    cnt++;
//            }
//            if (cnt == 3) 
//                ans_cnt++;
//            cnt = 0;
//        }
//        for (int i = 0; i < n; i++) {
//            for (int j = 0; j < 3; j++) {
//                a[i][j] -= js[j];
//                if (a[i][j] < 0)
//                    a[i][j] = 0;
//            }
//        }
//
//    }
//    
//    int ans = 0;
//
//    for (int i = 0; i < 3; i++)
//        ans += dob[i];
//    printf("%d", ans);
//
//    getchar();
//    getchar();
//
//    return 0;
//}