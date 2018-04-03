//#include <iostream>
//using namespace std;
//
//int N, M;
//int a[51][51];
//bool check[51][51];
//int cnt = 1;
//int dx[4] = { -1,0,1,0 };
//int dy[4] = { 0,1,0,-1 }; //ºÏ, µ¿, ³², ¼­
//int rot[4] = { 3,0,1,2 };
//int back[4] = { 2,3,0,1 };
////ºÏ 0, µ¿ 1, ³² 2, ¼­ 3
//
//void go(int x, int y, int d) {
//	for (int i = 0; i < 4; i++) {
//		int nx = x + dx[rot[d]];
//		int ny = y + dy[rot[d]];
//
//		if (nx >= 0 && nx < N && ny >= 0 && ny < M) {
//			if (a[nx][ny] == 0 && check[nx][ny] == false) {
//				d = rot[d];
//				cnt++;
//				check[nx][ny] = true;
//				go(nx, ny, d);
//			}
//			else {
//				d = rot[d];
//
//				if (i == 3) {
//					nx = x + dx[back[d]];
//					ny = y + dy[back[d]];
//
//					if (nx >= 0 && nx < N && ny >= 0 && ny < M) {
//						if (a[nx][ny] != 1) {
//							go(nx, ny, d);
//						}
//						else {
//							printf("%d\n", cnt);
//							exit(1);
//						}
//					}
//				}
//
//			}
//		}
//		else if (i == 3) {
//			nx = x + dx[back[d]];
//			ny = y + dy[back[d]];
//
//			if (nx >= 0 && nx < N && ny >= 0 && ny < M) {
//				if (a[nx][ny] != 1) {
//					go(nx, ny, d);
//				}
//				else {
//					printf("%d\n", cnt);
//					exit(1);
//				}
//			}
//		}
//
//	}
//}
//
//int main(void) {
//	scanf("%d %d", &N, &M);
//
//	int r, c, d;
//
//	scanf("%d %d %d", &r, &c, &d);
//
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			scanf("%d", &a[i][j]);
//		}
//	}
//
//	check[r][c] = true;
//	go(r, c, d);
//
//	return 0;
//}