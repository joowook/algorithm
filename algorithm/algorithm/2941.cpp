//#include <iostream>
//#include <string>
//using namespace std;
//
//bool check(char ch) {
//	if (ch == 'c' || ch == 'd' || ch == 'l' || ch == 'n' || ch == 's' || ch == 'z') {
//		return true;
//	}
//
//	return false;
//}
//
//int main(void) {
//	string s;
//
//	cin >> s;
//
//	int n = s.size();
//	int ans = 0;
//
//	for (int i = 0; i < n; i++) {
//		if (i == n - 1) {
//			ans++;
//			break;
//		}
//		if (check(s[i])) {
//			if (s[i] == 'c') {
//				if (s[i + 1] == '=' || s[i+1] == '-') {
//					ans++;
//					i++;
//				}
//				else {
//					ans++;
//				}
//			}
//			else if (s[i] == 'd') {
//				if (s[i + 1] == '-') {
//					ans++;
//					i++;
//				}
//				else if (s[i + 1] == 'z') {
//					if (i + 2 < n) {
//						if (s[i + 2] == '=') {
//							ans++;
//							i += 2;
//						}
//						else {
//							ans += 2;
//							i++;
//						}
//					}
//					else {
//						ans += 2;
//					}
//				}
//				else {
//					ans++;
//				}
//			}
//			else if (s[i] == 'l') {
//				if (s[i + 1] == 'j') {
//					ans++;
//					i++;
//				}
//				else {
//					ans++;
//				}
//			}
//			else if (s[i] == 'n') {
//				if (s[i + 1] == 'j') {
//					ans++;
//					i++;
//				}
//				else {
//					ans++;
//				}
//			}
//			else if (s[i] == 's') {
//				if (s[i + 1] == '=') {
//					ans++;
//					i++;
//				}
//				else {
//					ans++;
//				}
//			}
//			else if (s[i] == 'z') {
//				if (s[i + 1] == '=') {
//					ans++;
//					i++;
//				}
//				else {
//					ans++;
//				}
//			}
//			
//		}
//		else {
//			ans++;
//		}
//	}
//
//	printf("%d\n", ans);
//
//	return 0;
//}