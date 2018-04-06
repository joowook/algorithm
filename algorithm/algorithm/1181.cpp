//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//bool cmp(const string &a,const string &b) {
//	if (a.size() < b.size()) {
//		return true;
//	}
//	else if (a.size() == b.size()) {
//		int i;
//		for (i = 0; i < a.size(); i++) {
//			if (a[i] == b[i]) {
//				continue;
//			}
//			else {
//				return a[i] < b[i];
//			}
//		}
//	}
//	else {
//		return false;
//	}
//
//	return false;
//}
//int main(void) {
//	int N;
//
//	cin >> N;
//
//	vector<string> s(N);
//
//	for (int i = 0; i < N; i++) {
//		cin >> s[i];
//	}
//
//	sort(s.begin(), s.end(), cmp);
//
//	string tmp = s[0];
//	cout << s[0] << '\n';
//	for (int i = 1; i < N; i++) {
//		if (tmp == s[i]) {
//			continue;
//		}
//		else {
//			tmp = s[i];
//			cout << s[i] << '\n';
//		}
//	}
//
//	return 0;
//}