//#include <iostream>
//#include <vector>
//using namespace std;
//
//bool check[4000001];
//vector<int> so;
//
//int main(void) {
//    int N;
//    scanf("%d", &N);
//
//    for (int i = 2; i <= N; i++) {
//        if (!check[i]) {
//            so.push_back(i);
//            for (int j = i * 2; j <= N; j += i) {
//                check[j] = true;
//            }
//        }
//    }
//
//    int s = 0, e = 0;
//    int n = so.size();
//    int sum = 0, cnt = 0;
//
//    while (s <= e && e < n) {
//        while (e < n &&sum < N) {
//            sum += so[e++];
//        }
//
//        while (s<e &&sum > N) {
//            sum -= so[s++];
//        }
//
//        if (sum == N) {
//            cnt++;
//            sum -= so[s++];
//        }
//    }
//
//    printf("%d\n", cnt);
//
//    return 0;
//}