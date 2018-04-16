//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <cstring>
//using namespace std;
//
//int a[10], b[10];
//int tk[1001];
//bool visit[1001];
//
//struct Person {
//	int num, recept, repair, time;
//
//	Person() {
//		num = 0;
//		recept = 0;
//		repair = 0;
//		time = 0;
//	}
//
//	Person(int num2, int recept2, int repair2, int time2) {
//		num = num2;
//		recept = recept2;
//		repair = repair2;
//		time = time2;
//	}
//};
//
//bool cmp(const Person &u, const Person &v) {
//	if (u.time == v.time) {
//		return u.recept < v.recept; // 이거 문제 잘못읽고 u.num < v.num 해서 오래걸림
//	}
//
//	return u.time < v.time;
//}
//
//int main(void) {
//	int T;
//
//	scanf("%d", &T);
//
//	for (int test_case = 1; test_case <= T; test_case++) {
//		int ans = 0;
//
//		int N, M, K, A, B;
//
//		scanf("%d %d %d %d %d", &N, &M, &K, &A, &B);
//
//		memset(visit, false, sizeof(visit));
//		vector<Person> v(K + 1);
//		for (int i = 1; i <= N; i++) {
//			scanf("%d", &a[i]);
//		}
//
//		for (int i = 1; i <= M; i++) {
//			scanf("%d", &b[i]);
//		}
//
//		for (int i = 1; i <= K; i++) {
//			scanf("%d", &tk[i]);
//		}
//		int cnt = 0;
//
//		vector<int>chang(N + 1); //창구별 끝나는 시간
//
//		for (int i = 1; i <= K; i++) {
//			int Min = 2000000000;
//			int mj = 0;
//
//			for (int j = 1; j <= N; j++) {
//				if (Min > chang[j]) {
//					Min = chang[j];
//					mj = j;
//				}
//
//				if (chang[j] == 0) {
//					chang[j] = tk[i] + a[j];
//
//					v[i].recept = j;
//					v[i].time = chang[j];
//					v[i].num = i;
//					break;
//				}
//				else if (chang[j] <= tk[i]) {
//					chang[j] = tk[i] + a[j];
//
//					v[i].recept = j;
//					v[i].time = chang[j];
//					v[i].num = i;
//					break;
//				}
//
//				if (j == N) {
//					chang[mj] += a[mj];
//
//					v[i].recept = mj;
//					v[i].time = chang[mj];
//					v[i].num = i;
//				}
//			}
//		}
//
//		sort(v.begin(), v.end(), cmp);
//
//		chang.clear();
//		chang.resize(M + 1); //창구별 끝나는 시간
//
//		if (M == 1) {
//			for (int i = 1; i <= K; i++) {
//				if (v[i].recept == A) {
//					ans += v[i].num;
//				}
//			}
//
//			ans >0 ? printf("#%d %d\n", test_case, ans) : printf("#%d -1\n", test_case);
//
//			continue;
//		}
//
//		for (int i = 1; i <= K; i++) {
//			int Min = 2000000000;
//			int mj = 0;
//			for (int j = 1; j <= M; j++) {
//				if (Min > chang[j]) {
//					Min = chang[j];
//					mj = j;
//				}
//
//				if (chang[j] == 0) {
//					chang[j] = v[i].time + b[j];
//
//					v[i].repair = j;
//					v[i].time = chang[j];
//					break;
//				}
//				else if (chang[j] <= v[i].time) {
//					chang[j] = v[i].time + b[j];
//
//					v[i].repair = j;
//					v[i].time = chang[j];
//					break;
//				}
//
//				if (j == M) {
//					chang[mj] += b[mj];
//
//					v[i].repair = mj;
//					v[i].time = chang[mj];
//				}
//			}
//		}
//
//		for (int i = 1; i <= K; i++) {
//			if (v[i].recept == A) {
//				if (v[i].repair == B) {
//					ans += v[i].num;
//				}
//			}
//		}
//
//		ans >0? printf("#%d %d\n", test_case, ans): printf("#%d -1\n", test_case);
//	}
//	return 0;
//}