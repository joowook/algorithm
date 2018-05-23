//#include <iostream>
//#include <cstring>
//#include <vector>
//using namespace std;
//
//int a[11][11];
//bool check[11];
//int ans = 0;
//
//void go(int n, vector<int> &order, int toPick) {
//	if (n == toPick) {
//		for (int i = 0; i < n; i+=2) {
//			if (a[order[i]][order[i + 1]] == 0) {
//				return;
//			}
//		}
//		ans++;
//		return;
//	}
//
//	for (int i = 0; i < n; i++) {
//		
//		if (!check[i]) {
//			check[i] = true;
//			order.push_back(i);
//			go(n, order, toPick + 1);
//			check[i] = false;
//			order.pop_back();
//			
//			if (toPick % 2 == 0) {
//				break;
//			}
//		}
//	}
//
//
//}
//int main(void) {
//	int C;
//
//	scanf("%d", &C);
//
//	while (C--) {
//		int n, m;
//		ans = 0;
//		scanf("%d %d", &n, &m);
//		memset(a, 0, sizeof(a));
//		vector<int> order;
//		for (int i = 0; i < m; i++) {
//			int x, y;
//
//			scanf("%d %d", &x, &y);
//
//			a[x][y] = 1;
//			a[y][x] = 1;
//		}
//		
//		go(n, order, 0);
//
//		printf("%d\n", ans);
//	}
//
//	return 0;
//}