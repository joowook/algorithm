//#include <iostream>
//#include <algorithm>
//#include <cstring>
//using namespace std;
//
//#define MAX 2000000000
//int month[20];
//int dp[20];
//int price[4];
//int ans;
//
//int go(int now) {
//	if (dp[now] != -1) {
//		return dp[now];
//	}
//
//	if (now > 12) {
//		return 0;
//	}
//
//	if (now == 12) {
//		if (month[now] == 0) {
//			return dp[now] = 0;
//
//		}
//	
//		int tmp = month[now] * price[0];
//
//		if (tmp > price[1]) {
//			tmp = price[1];
//		}
//
//		if (tmp > price[2]) {
//			tmp = price[2];
//		}
//
//		return dp[now] = tmp;
//
//	}
//
//	if (month[now] == 0) {
//		return dp[now] = go(now + 1);
//	}
//	else {
//		int a = month[now]*price[0] + go(now + 1); // 1일
//		int b = price[1] + go(now + 1); // 1달
//		int c = price[2] + go(now + 3); //3달
//
//		return dp[now] = min(min(a, b), c);
//	}
//
//}
//
//int main(void) {
//	int T;
//
//	scanf("%d", &T);
//
//	for (int test_case = 1; test_case <= T; test_case++) {
//		for (int i = 0; i < 4; i++) {
//			scanf("%d", &price[i]);
//		}
//
//		for (int i = 1; i <= 12; i++) {
//			scanf("%d", &month[i]);
//		}
//		memset(dp, -1, sizeof(dp));
//		ans = price[3];
//
//		int tmp = go(1);
//		ans = min(ans, tmp);
//
//		printf("#%d %d\n", test_case, ans);
//	}
//
//
//	return 0;
//}
////#include <iostream>
////#include <algorithm>
////using namespace std;
////
////#define MAX 2000000000
////int month[13];
////int price[4];
////int ans;
////
////void go(int now, int money, int cnt) {
////	if (now != 12 && cnt != 0) {
////		go(now + 1, money, cnt - 1);
////		return;
////	}
////
////	if (now == 12) {
////		if (cnt != 0 || month[now] == 0) {
////			if (ans > money) {
////				ans = money;
////				return;
////			}
////		}
////
////		int tmp = money + month[now]*price[0];
////		
////		if (tmp > money + price[1]) {
////			tmp = money + price[1];
////		}
////		
////		if (tmp > money + price[2]) {
////			tmp = money + price[2];
////		}
////
////		if (ans > tmp) {
////			ans = tmp;
////		}
////
////		return;
////	}
////
////	if (month[now] == 0) {
////		go(now + 1, money, 0);
////	}
////	else {
////		go(now + 1, money + month[now] * price[0], 0); // 1일
////		go(now + 1, money + price[1], 0); // 1달
////		go(now + 1, money + price[2], 2); //3달
////	}
////
////}
////
////int main(void) {
////	int T;
////
////	scanf("%d", &T);
////
////	for (int test_case = 1; test_case <= T; test_case++) {
////		for (int i = 0; i < 4; i++) {
////			scanf("%d", &price[i]);
////		}
////		
////		for (int i = 1; i <= 12; i++) {
////			scanf("%d", &month[i]);
////		}
////		
////		ans = price[3];
////
////		go(1, 0, 0);
////		
////		printf("#%d %d\n", test_case, ans);
////	}
////
////
////	return 0;
////}