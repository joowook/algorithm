//#include <iostream>
//using namespace std;
//
//int main(void) {
//    int N;
//    int arr[1001] = { 0 };
//    int dp[1001] = { 0 };
//
//    cin >> N;
//
//    for (int i = 1; i <= N; i++) {
//        cin >> arr[i];
//    }
//
//    for (int i = 1; i <= N; i++) {
//        dp[i] = arr[i];
//        for (int j = 1; j < i; j++) {
//            if (arr[j]<arr[i] && dp[i] < dp[j] + arr[i]) {
//                dp[i] = dp[j] + arr[i];
//            }
//        }
//    }
//    int max = 0;
//    for (int i = 1; i <= N; i++) {
//        if (max < dp[i])
//            max = dp[i];
//    }
//
//    cout << max;
//
//    return 0;
//}