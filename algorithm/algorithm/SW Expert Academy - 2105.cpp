//#include <iostream>
//using namespace std;
//int a[20][20];
//int visit[20][20];
//int dx[4] = { 1, 1, -1, -1 };
//int dy[4] = { -1, 1, 1, -1 };
//int st_x, st_y;
//int ans, N;
//bool flag[101];
//
//void go4(int x, int y, int lc, int rc, int cnt) {
//	int tmp = 0;
//	int nx = x, ny = y;
//
//	for (int i = 0; i < rc; i++) {
//		nx += dx[3];
//		ny += dy[3];
//		if (!(nx == st_x && ny == st_y) && flag[a[nx][ny]]) {
//			for (int j = 0; j < tmp; j++) {
//				nx += dx[1];
//				ny += dy[1];
//				flag[a[nx][ny]] = false;
//			}
//			return;
//		}
//		else {
//			flag[a[nx][ny]] = true;
//			tmp++;
//		}
//	}
//
//	if (nx == st_x && ny == st_y) {
//		for (int i = 0; i < tmp; i++) {
//			nx += dx[1];
//			ny += dy[1];
//			flag[a[nx][ny]] = false;
//
//		}
//		ans = ans > cnt + tmp ? ans : cnt + tmp;
//	}
//}
//
//void go3(int x, int y, int lc, int rc, int cnt) {
//	int nx = x, ny = y;
//	int tmp = 0;
//
//	for (int i = 0; i < lc; i++) {
//		nx += dx[2];
//		ny += dy[2];
//		if (!flag[a[nx][ny]]) {
//			flag[a[nx][ny]] = true;
//			tmp++;
//		}
//		else {
//			for (int j = 0; j < tmp; j++) {
//				nx += dx[0];
//				ny += dy[0];
//				flag[a[nx][ny]] = false;
//			}
//			return;
//		}
//	}
//
//	if (nx >= 0 && nx < N && ny >= 0 && ny < N) {
//		go4(nx, ny, lc, rc, cnt + tmp);
//	}
//
//	for (int i = 0; i < tmp; i++) {
//		flag[a[nx][ny]] = false;
//		nx += dx[0];
//		ny += dy[0];
//	}
//}
//
//void go2(int x, int y, int lc, int rc, int cnt) {
//	int nx = x;
//	int ny = y;
//	int tmp = 0;
//
//	while (1) {
//		nx += dx[1];
//		ny += dy[1];
//
//		if (nx >= 0 && nx < N && ny >= 0 && ny < N) {
//			if (!flag[a[nx][ny]]) {
//				flag[a[nx][ny]] = true;
//				tmp++;
//				go3(nx, ny, lc, rc + tmp, cnt + tmp);
//			}
//			else {
//				for (int i = 0; i<tmp; i++) {
//					nx += dx[3];
//					ny += dy[3];
//
//					flag[a[nx][ny]] = false;
//
//				}
//				break;
//			}
//		}
//		else {
//			for (int i = 0; i<tmp; i++) {
//				nx += dx[3];
//				ny += dy[3];
//
//				flag[a[nx][ny]] = false;
//
//			}
//
//			break;
//		}
//
//
//	}
//}
//
//void go1(int x, int y, int lc, int rc, int cnt) {
//	int nx = x;
//	int ny = y;
//	int tmp = 0;
//
//	while (1) {
//		nx += dx[0];
//		ny += dy[0];
//		tmp++;
//		if (nx >= 0 && nx < N && ny >= 0 && ny < N) {
//			if (!flag[a[nx][ny]]) {
//				flag[a[nx][ny]] = true;
//				go2(nx, ny, lc + tmp, rc, cnt + tmp);
//			}
//			else {
//				for (int i = 0; i<tmp; i++) {
//					nx += dx[2];
//					ny += dy[2];
//
//					flag[a[nx][ny]] = false;
//				}
//
//				break;
//			}
//		}
//		else {
//			for (int i = 0; i<tmp; i++) {
//				nx += dx[2];
//				ny += dy[2];
//
//				flag[a[nx][ny]] = false;
//			}
//			break;
//		}
//	}
//}
//
//int main(void) {
//	int T;
//
//	scanf("%d", &T);
//
//	for (int test_case = 1; test_case <= T; test_case++) {
//
//		scanf("%d", &N);
//
//		ans = -1;
//
//		for (int i = 0; i < N; i++) {
//			for (int j = 0; j < N; j++) {
//				scanf("%d", &a[i][j]);
//			}
//		}
//
//		for (int i = 0; i < N; i++) {
//			for (int j = 0; j < N; j++) {
//				st_x = i;
//				st_y = j;
//				flag[a[i][j]] = true;
//				go1(i, j, 0, 0, 0);
//				flag[a[i][j]] = false;
//			}
//		}
//
//		printf("#%d %d\n", test_case, ans);
//	}
//
//	return 0;
//}
//
////#include <iostream>
////using namespace std;
////int a[20][20];
////int dx[4] = { 1, 1, -1, -1 };
////int dy[4] = { -1, 1, 1, -1 };
////int st_x, st_y;
////int ans, N;
////
////void go4(int x, int y, int lc, int rc, int cnt, bool flag2[]) {
////	int tmp = 0;
////	int nx = x, ny = y;
////
////	bool flag[101] = { 0 };
////	for (int i = 0; i < 101; i++) {
////		flag[i] = flag2[i];
////	}
////
////	for (int i = 0; i < rc; i++) {
////		nx += dx[3];
////		ny += dy[3];
////		if (!(nx == st_x && ny == st_y) && flag[a[nx][ny]]) {
////			return;
////		}
////		else {
////			flag[a[nx][ny]] = true;
////			tmp++;
////		}
////	}
////
////	if (nx == st_x && ny == st_y) {
////		ans = ans > cnt + tmp ? ans : cnt + tmp;
////	}
////}
////
////void go3(int x, int y, int lc, int rc, int cnt, bool flag2[]) {
////	int nx = x, ny = y;
////	int tmp = 0;
////
////	bool flag[101] = { 0 };
////	for (int i = 0; i < 101; i++) {
////		flag[i] = flag2[i];
////	}
////
////	for (int i = 0; i < lc; i++) {
////		nx += dx[2];
////		ny += dy[2];
////		if (!flag[a[nx][ny]]) {
////			flag[a[nx][ny]] = true;
////			tmp++;
////		}
////		else {
////			return;
////		}
////	}
////
////	if (nx >= 0 && nx < N && ny >= 0 && ny < N) {
////		go4(nx, ny, lc, rc, cnt + tmp, flag);
////	}
////}
////
////void go2(int x, int y, int lc, int rc, int cnt, bool flag2[]) {
////	int nx = x;
////	int ny = y;
////	int tmp = 0;
////	bool flag[101] = { 0 };
////	for (int i = 0; i < 101; i++) {
////		flag[i] = flag2[i];
////	}
////
////	while (1) {
////		nx += dx[1];
////		ny += dy[1];
////
////		if (nx >= 0 && nx < N && ny >= 0 && ny < N) {
////			if (!flag[a[nx][ny]]) {
////				flag[a[nx][ny]] = true;
////				tmp++;
////				go3(nx, ny, lc, rc + tmp, cnt + tmp, flag);
////			}
////			else {
////				break;
////			}
////		}
////		else {
////			break;
////		}
////	}
////}
////
////void go1(int x, int y, int lc, int rc, int cnt, bool flag2[]) {
////	int nx = x;
////	int ny = y;
////	int tmp = 0;
////	bool flag[101] = { 0 };
////	for (int i = 0; i < 101; i++) {
////		flag[i] = flag2[i];
////	}
////	while (1) {
////		nx += dx[0];
////		ny += dy[0];
////		tmp++;
////		if (nx >= 0 && nx < N && ny >= 0 && ny < N) {
////			if (!flag[a[nx][ny]]) {
////				flag[a[nx][ny]] = true;
////				go2(nx, ny, lc + tmp, rc, cnt + tmp, flag);
////			}
////			else {
////				break;
////			}
////		}
////		else {
////			break;
////		}
////	}
////}
////
////int main(void) {
////	int T;
////
////	scanf("%d", &T);
////
////	for (int test_case = 1; test_case <= T; test_case++) {
////		bool flag[101] = { 0 };
////		scanf("%d", &N);
////
////		ans = -1;
////
////		for (int i = 0; i < N; i++) {
////			for (int j = 0; j < N; j++) {
////				scanf("%d", &a[i][j]);
////			}
////		}
////
////		for (int i = 0; i < N; i++) {
////			for (int j = 0; j < N; j++) {
////				st_x = i;
////				st_y = j;
////				flag[a[i][j]] = true;
////				go1(i, j, 0, 0, 0, flag);
////				flag[a[i][j]] = false;
////			}
////		}
////
////		printf("#%d %d\n", test_case, ans);
////	}
////
////	return 0;
////}