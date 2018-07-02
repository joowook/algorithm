//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main(void) {
//    int N;
//
//    scanf("%d", &N);
//
//    int a, b, c;
//
//    scanf("%d %d %d", &a, &b, &c);
//
//    vector<int> v[3];
//    v[0].resize(a);
//    v[1].resize(b);
//    v[2].resize(c);
//
//    for (int i = 0; i < 3; i++) {
//        for (int j = 0; j < (int)v[i].size(); j++) {
//            scanf("%d", &v[i][j]);
//        }
//    }
//    
//    //for (int i = 0; i < 3; i++) {
//    //    for (int j = 0; j < (int)v[i].size(); j++) {
//    //        printf("%d ", v[i][j]);
//    //    }
//    //    printf("\n");
//    //}
//
//    int max = v[0][0], max_i = 1;
//    for (int i = 1; i < 3; i++) {
//        if (max < v[i][0]) {
//            max = v[i][0];
//            max_i = i + 1;
//        }
//    }
//
//    printf("%d\n", max_i);
//
//
//    return 0;
//}