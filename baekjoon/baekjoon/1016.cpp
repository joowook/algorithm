//#include <iostream>
//#include <vector>
//using namespace std;
//#define MAX 1000000000000
//bool check[1000001];
//
//int main(void) {
//    long long Min, Max;
//
//    scanf("%lld %lld", &Min, &Max);
//
//    vector<long long> v;
//
//    v.push_back(1);
//
//    for (long long i = 2; i*i <= MAX; i++) {
//        if (!check[i]) {
//            v.push_back(i);
//        }
//        for (long long j = 2 * i; j <= 1000000; j += i) {
//            check[j] = true;
//        }
//    }
//
//    long long x = v[0];
//    long long xx = x*x;
//    int cnt = 1;
//
//    int first = 0;
//
//    for (int i = 1; i < v.size(); i++) {
//        if (xx < Min) {
//            x = v[i];
//            xx = x*x;
//        }
//        else {
//            first = i;
//
//            break;
//        }
//    }
//    
//    while (xx <= Max) {
//        x = v[++first];
//        xx = x*x;
//        cnt++;
//    }
//
//    printf("%lld\n", Max - Min + 1 - cnt); 
//    
//    return 0;
//}