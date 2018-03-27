//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main(void) {
//	int N;
//
//	scanf("%d\n", &N);
//
//	while (N--) {
//		vector<char> a;
//		for(int i=0; ; i++) {
//			char input;
//			scanf("%c", &input);
//			
//			if (input == '\n') {
//				break;
//			}
//			a.push_back(input);
//		}
//
//		int ans = 0;
//		int tmp = 0;
//		for (int i = 0; i < a.size(); i++) {
//			if (a[i] == '[') {
//				tmp++;
//				if (ans < tmp) {
//					ans = tmp;
//				}
//			}
//			else if (a[i] == ']') {
//				tmp--;
//			}
//		}
//		int Answer = 1;
//		for (int i = 0; i < ans; i++) {
//			Answer *= 2;
//		}
//		printf("%d\n", Answer);
//	}
//
//	return 0;
//}