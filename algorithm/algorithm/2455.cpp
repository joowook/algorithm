//#include <iostream>
//using namespace std;
//
//int a[4], b[4];
//
//int main(void) {
//	for (int i = 0; i < 4; i++) {
//		scanf("%d %d", &a[i], &b[i]);
//	}
//
//	int ans = 0;
//	int tmp = 0;
//	
//	for (int i = 0; i < 4; i++) {
//		tmp -= a[i];
//		tmp += b[i];
//		ans = ans >= tmp ? ans : tmp;
//	}
//
//	printf("%d\n", ans);
//
//	return 0;
//}