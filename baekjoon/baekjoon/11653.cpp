//#include <iostream>
//#include <vector>
//using namespace std;
//
//bool check[10000001];
//vector<int> prime;
//void init(int n) {
//    for (int i = 2; i <= n; i++) {
//        if (!check[i]) {
//            prime.push_back(i);
//            for (int j = i * 2; j <= n; j += i) {
//                check[j] = true;
//            }
//        }
//    }
//}
//
//int main(void) {
//    int N;
//
//    scanf("%d", &N);
//
//    init(N);
//
//    int n = prime.size();
//    for (int i = 0; i < n && N >= prime[i]; i++) {
//        while (N%prime[i] == 0) {
//            printf("%d\n", prime[i]);
//            N /= prime[i];
//        }
//    }
//
//    return 0;
//}