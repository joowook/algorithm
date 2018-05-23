//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <cmath>
//using namespace std;
//
//#define MAX 2000000000
//int a[51][51];
//
//int main(void) {
//	int N, M;
//
//	scanf("%d %d", &N, &M);
//
//	vector<pair<int, int>> chicken;
//	vector<pair<int, int>> house;
//
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			scanf("%d", &a[i][j]);
//			if (a[i][j] == 2) {
//				chicken.push_back(make_pair(i, j));
//			}
//			else if (a[i][j] == 1) {
//				house.push_back(make_pair(i, j));
//			}
//		}
//	}
//	
//	int m = chicken.size();
//	int hnum = house.size();
//
//	vector<int> v(m, 0);
//	for (int i = m - 1; i > m - 1 - M; i--) {
//		v[i] = 1;
//	}
//
//	int ans = MAX;
//	do {
//		int tmp = 0;
//		for (int i = 0; i < hnum; i++) {
//			int dist = MAX;
//
//			for (int j = 0; j < m; j++) {
//				int x = house[i].first;
//				int y = house[i].second;
//
//				if (v[j] == 1) {
//					int nx = chicken[j].first;
//					int ny = chicken[j].second;
//
//					dist = min(dist, abs(x - nx) + abs(y - ny));
//				}
//			}
//			tmp += dist;
//		}
//
//		ans = min(ans, tmp);
//	} while (next_permutation(v.begin(), v.end()));
//	
//	printf("%d\n", ans);
//
//	return 0;
//}