//#include <iostream>
//#include <vector>
//#include <queue>
//#include <algorithm>
//using namespace std;
//
//#define MAX 1000000000
//
//int main(void) {
//	int N, M;
//
//	scanf("%d %d", &N, &M);
//	vector< int> check(N + 1);
//	vector<vector<int>> a(N+1);
//	int cnt = 1;
//	for (int i = 1; i <= N; i++) {
//		check[i] = 0;
//	}
//
//	for (int i = 0; i < M; i++) {
//		int x, y;
//		scanf("%d %d", &x, &y);
//		a[x].push_back(y);
//		a[y].push_back(x);
//	}
//
//	queue<int> q;
//	for (int i = 1; i <= N; i++) {
//		if (check[i] != 0) {
//			continue;
//		}
//		q.push(i);
//		check[i] = cnt;
//		int tmp = 0;
//		int ans_i = 0;
//		while (!q.empty()) {
//			int x = q.front();
//			q.pop();
//
//			for (int i = 0; i < a[x].size(); i++) {
//				if (check[a[x][i]] == 0) {
//					q.push(a[x][i]);
//					check[a[x][i]] = cnt;
//				}
//			}
//		}
//		cnt++;
//	}
//	cnt--;
//	vector< int> map(N + 1);
//	vector<int> dist(N + 1);
//	queue<pair<int, int>> q2;
//
//	for (int i = 0; i < N + 1; i++) {
//		dist[i] = 0;
//	}
//	
//	for (int i = 1; i <= N; i++) {
//		for (int j = 0; j < N + 1; j++) {
//			map[j] = 0;
//		}
//		map[i] = 1;
//		q2.push(make_pair(i, 0));
//		int CNT = check[i];
//		int dt = 0;
//		while (!q2.empty()) {
//			int x = q2.front().first;
//			dt = q2.front().second;
//			q2.pop();
//
//			for (int j = 0; j < a[x].size(); j++) {
//				if (check[a[x][j]] == CNT && map[a[x][j]] == 0) {
//					q2.push(make_pair(a[x][j], dt+1));
//					map[a[x][j]] = 1;
//					if (dist[i] < dt + 1) {
//						dist[i] = dt + 1;
//					}
//				}
//			}
//		}
//	}
//	vector<int> tmp(cnt + 1);
//	vector<int> ans(cnt + 1);
//	for (int i = 1; i <= cnt; i++) {
//		tmp[i] = MAX;
//	}
//	for (int i = 1; i <= N; i++) {
//		int ct = check[i];
//		if (tmp[ct] > dist[i]) {
//			tmp[ct] = dist[i];
//			ans[ct] = i;
//		}
//	}
//
//	sort(ans.begin(), ans.end());
//
//	printf("%d\n", cnt);
//
//	for (int i = 1; i <= cnt; i++) {
//		printf("%d\n", ans[i]);
//	}
//
//	return 0;
//}