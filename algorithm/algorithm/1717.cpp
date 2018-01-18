//#include <iostream>
//using namespace std;
//
//int p[1000001];
//
//int Find(int x) {
//	if (x == p[x]) {
//		return x;
//	}
//	else {
//		return p[x] = Find(p[x]);
//	}
//}
//
//void Union(int x, int y) {
//	x = Find(x);
//	y = Find(y);
//
//	if (x != y) {
//		p[y] = x;
//	}
//}
//int main(void) {
//	int n, m;
//
//	scanf("%d %d", &n, &m);
//
//	for (int i = 1; i <= n; i++) {
//		p[i] = i;
//	}
//
//	while (m--) {
//		int flag, x, y;
//
//		scanf("%d %d %d", &flag, &x, &y);
//
//		if (flag == 1) {
//			x = Find(x);
//			y = Find(y);
//			if (x == y) {
//				printf("YES\n");
//			}
//			else {
//				printf("NO\n");
//			}
//		}
//		else if (flag == 0) {
//			Union(x, y);
//		}
//	}
//
//	return 0;
//}