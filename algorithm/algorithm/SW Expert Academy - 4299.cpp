//#include <iostream>
//using namespace std;
//
//int main(void)
//{
//	int test_case;
//	int T;
//	setbuf(stdout, NULL);
//
//	cin >> T;
//
//	for (test_case = 1; test_case <= T; ++test_case)
//	{
//		int D, H, M; 
//
//		cin >> D >> H >> M;
//		int ans = 0;
//
//		ans += (D - 11) * 1440;
//		ans += (H - 11) * 60;
//		ans += (M - 11);
//
//		if (ans < 0) {
//			cout << "#" << test_case << " " << -1 << '\n';
//		}
//		else {
//			cout << "#" << test_case << " " << ans << '\n';
//		}
//	}
//
//	return 0;
//}