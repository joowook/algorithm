//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//int main(void) {
//    int n, input;
//
//    scanf("%d", &n);
//
//    vector<int> inc;
//    vector<int> des;
//    for (int i = 0; i < n; i++) {
//        scanf("%d", &input);
// 
//        if (input > 0) {
//            inc.push_back(input);
//        }
//        else {
//            des.push_back(input);
//        }
//    }
//    
//    sort(des.begin(), des.end());
//    sort(inc.begin(), inc.end());
//    reverse(inc.begin(), inc.end());
//
//    int ans = 0;
//    
//    for (int i = 0; i < inc.size(); i++) {
//        if (i == inc.size() - 1) {
//            ans += inc[i];
//            break;
//        }
//        if (inc[i] != 1 && inc[i + 1] != 1) {
//            ans += (inc[i] * inc[i + 1]);
//            i++;
//        }
//        else {
//            ans += inc[i];
//        }
//    }
//
//    for (int i = 0; i < des.size(); i++) {
//        if (i == des.size() - 1) {
//            ans += des[i];
//            break;
//        }
//        if (des[i] < 0 && des[i + 1] < 0) {
//            ans += (des[i] * des[i + 1]);
//            i++;
//        }
//        else {
//            break;
//        }
//    }
//
//    printf("%d", ans);
//
//    return 0;
//}