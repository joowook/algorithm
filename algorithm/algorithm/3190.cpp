//#include <iostream>
//#include <vector>
//using namespace std;
//
//bool apple[101][101];
//bool visit[101][101];
//
//int dx[4] = { -1,0, 1,0 }; //ºÏ 0 µ¿1 ³²2 ¼­ 3
//int dy[4] = { 0, 1, 0, -1 };
//
//struct Snake {
//	int x, y;
//
//	Snake(int x2, int y2) {
//		x = x2;
//		y = y2;
//	}
//	Snake() {
//		x = y = 1;
//	}
//};
//
//int s_cnt = 1;
//Snake snake[102];
//vector<pair<int, char>> v;
//int vi = 0;
//int N, K;
//
//void move(int cnt, int direction) {// ºÏ 0 /µ¿ 1 /³² 2 /¼­ 3
//	int x = snake[0].x;
//	int y = snake[0].y;
//	
//	int nx = x + dx[direction];
//	int ny = y + dy[direction];
//
//	if (nx<1 || nx>N || ny<1 || ny>N || visit[nx][ny] == true) {
//		printf("%d\n", cnt);
//		exit(1);
//	}
//	else {
//		if (vi < v.size() && cnt == v[vi].first) {
//			if (v[vi].second == 'L') {
//				direction--;
//				if (direction == -1) {
//					direction = 3;
//				}
//			}
//			else if (v[vi].second == 'D') {
//				direction++;
//				if (direction == 4) {
//					direction = 0;
//				}
//			}
//
//			vi++;
//		}
//
//		if (apple[nx][ny] == true) {
//			apple[nx][ny] = false;
//
//			for (int i = s_cnt - 1; i >= 0; i--) {
//				snake[i + 1] = snake[i];
//			}
//			snake[0].x = nx;
//			snake[0].y = ny;
//			s_cnt++;
//			visit[snake[0].x][snake[0].y] = true;
//
//			move(cnt + 1, direction);
//
//		}
//		else {
//			for (int i = s_cnt - 1; i > 0; i--) {
//				if (i == s_cnt - 1) {
//					visit[snake[i].x][snake[i].y] = false;
//				}
//
//				snake[i] = snake[i - 1];
//			}
//			if (s_cnt == 1) {
//				visit[snake[0].x][snake[0].y] = false;
//			}
//
//			snake[0].x = nx;
//			snake[0].y = ny;
//			
//			visit[snake[0].x][snake[0].y] = true;
//
//			move(cnt + 1, direction);
//		}
//	}
//}
//
//
//int main(void) {
//	scanf("%d %d", &N, &K);
//
//	for (int i = 0; i < K; i++) {
//		int x, y;
//
//		scanf("%d %d", &x, &y);
//		apple[x][y] = true;
//	}
//
//	int L;
//
//	scanf("%d", &L);
//
//	for (int i = 0; i < L; i++) {
//		int x;
//		char c;
//		scanf("%d %c", &x, &c);
//		v.push_back(make_pair(x, c));
//		//printf("%d %c\n", v[i].first, v[i].second);
//	}
//
//	int cnt = 0;
//	visit[1][1] = true;
//
//	snake[0] = Snake();
//	move(1, 1);
//
//	return 0;
//}