//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//
//int main(void) {
//    int n = 1;
//    
//    while (1) {
//        scanf("%d", &n);
//
//        if (n == 0)
//            break;
//
//        vector<int> a(n);
//
//        for (int i = 0; i < n; i++) {
//            scanf("%d", &a[i]);
//        }
//
//        vector<int> d(n);
//
//        for (int i = 0; i < n - 6; i++) {
//            d[i] = 0;
//        }
//
//        for (int i = n - 6; i < n; i++) {
//            d[i] = 1;
//        }
//
//        
//        vector<vector<int>> ans;
//        do {
//            vector <int> tmp;
//
//            for (int i = 0; i < n; i++) {
//                if (d[i] == 1) {
//                    tmp.push_back(a[i]);
//                }
//            }
//
//            ans.push_back(tmp);
//
//        } while (next_permutation(d.begin(), d.end()));
//        
//        sort(ans.begin(), ans.end());
//
//        for (int i = 0; i < ans.size(); i++) {
//            for (int j = 0; j < 6; j++) {
//                printf("%d ", ans[i][j]);
//            }
//            printf("\n");
//        }
//        printf("\n");
//    }
//
//    return 0;
//}