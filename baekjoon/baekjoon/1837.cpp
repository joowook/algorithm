//#include <iostream>
//#include <vector>
//using namespace std;
//
//bool check[1000001];
//vector<int> prime;
//
//int main(void) {
//    char P[110];
//    int K;
//
//    scanf("%s %d", P, &K);
//
//    int ps = 0;
//    for (int i = 0; P[i] != '\0'; i++) {
//        ps++;
//    }
//
//    for (int i = 2; i < K; i++) {
//        if (!check[i]) {
//            prime.push_back(i);
//            for (int j = i * 2; j < K; j += i) {
//                check[j] = true;
//            }
//        }
//    }
//
//
//    int n = prime.size();
//
//    for (int i = 0; i < n; i++) {
//        int x = prime[i];
//        int tmp = 0;
//
//        for (int j = 0; j < ps; j++) {
//            tmp *= 10;
//            tmp += P[j] - '0';
//            tmp %= x;
//        }
//
//        if (tmp == 0) {
//            printf("BAD %d\n", x);
//
//            return 0;
//        }
//    }
//
//    printf("GOOD\n");
//
//    return 0;
//}