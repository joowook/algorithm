//#include <iostream>
//#include <set>
//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main(void) {
//	int n, m;
//
//	cin >> n >> m;
//
//	set<string> s;
//	string input;
//	for (int i = 0; i < n; i++) {
//		cin >> input;
//
//		s.insert(input);
//	}
//	
//	vector<string> ans;
//	for (int i = 0; i < m; i++) {
//		cin >> input;
//
//		if (s.count(input)) {
//			ans.push_back(input);
//		}
//	}
//
//	sort(ans.begin(), ans.end());
//	cout << ans.size() << '\n';
//
//	/*for (auto &name : ans) {
//		cout << name << '\n';
//	}*/
//	for (int i = 0; i < ans.size(); i++) {
//		cout << ans[i] << '\n';
//	}
//	
//	return 0;
//}
//
////#include <iostream>
////#include <map>
////#include <vector>
////#include <string>
////using namespace std;
////
////int main(void) {
////	int n, m;
////
////	cin >> n >> m;
////
////	map <string, int> d;
////
////	for (int i = 0; i < n; i++) {
////		string input;
////		cin >> input;
////
////		d[input] |= 1;
////	}
////
////	for (int j = 0; j < m; j++) {
////		string input;
////		cin >> input;
////		d[input] |= 2;
////	}
////
////	map <string, int>::iterator it;
////	vector <string> ans;
////	for (it = d.begin(); it != d.end(); it++) {
////		if (it->second == 3) {
////			ans.push_back(it->first);
////		}
////	}
////
////	cout << ans.size() << '\n';
////
////	for (int i = 0; i < ans.size(); i++) {
////		cout << ans[i] << '\n';
////	}
////
////
////	return 0;
////}
////
////
//////#include <iostream>
//////#include <vector>
//////#include <string>
//////#include <algorithm>
//////using namespace std;
//////
//////int main(void) {
//////	int n, m;
//////
//////	cin >> n >> m;
//////
//////	vector<string> a(n), b(m);
//////
//////	for (int i = 0; i < n; i++) {
//////		cin >> a[i];
//////	}
//////
//////	for (int i = 0; i < m; i++) {
//////		cin >> b[i];
//////	}
//////	vector<string > ans;
//////
//////	sort(a.begin(), a.end());
//////	sort(b.begin(), b.end());
//////
//////
//////	for (int i = 0, j = 0; i < a.size() && j < b.size();) {
//////		if (a[i] < b[j]) {
//////			i += 1;
//////		}
//////		else if (a[i] > b[j]) {
//////			j += 1;
//////		}
//////		else {
//////			ans.push_back(a[i]);
//////			i += 1;
//////			j += 1;	
//////		}
//////	}
//////
//////	cout << ans.size()<< '\n';
//////
//////	for (int i = 0; i < ans.size(); i++) {
//////		cout << ans[i] << '\n';
//////	}
//////
//////	return 0;
//////}