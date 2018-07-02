//#include <iostream>
//#include <vector>
//using namespace std;
//
//int Answer;
//vector<int> a[200001];
//
//int main(int argc, char** argv)
//{
//    setbuf(stdout, NULL);
//    int T, test_case;
//
//    scanf("%d", &T);
//
//    for (test_case = 0; test_case < T; test_case++)
//    {
//        
//        int N, M;
//        
//        scanf("%d %d", &N, &M);
//        
//        Answer = N;
//
//        for (int i = 0; i < N; i++) {
//            a[i].clear();
//        }
//        
//        for (int i = 0; i < M; i++) {
//            int x, y;
//            scanf("%d %d", &x, &y);
//
//            a[x].push_back(y);
//            a[y].push_back(x);
//        }
//
//        if (N == 2) {
//            printf("Case #%d\n", test_case + 1);
//            printf("%d\n", 2);
//  
//            continue;
//        }
//        else {
//            bool flag = false;
//            while (!flag) {
//                flag = true;
//                for (int i = 1; i <= N; i++) {
//                    int n = 0;
//                    if (!a[i].empty()) {
//                        n = a[i].size();
//                    }
//                    if (n == 2) {
//                        for (int k = 0; k < (int)a[a[i][0]].size(); k++) {
//                            if (a[a[i][0]][k] == a[i][1]) {
//                                for (int ii = 0; ii < (int)a[a[i][0]].size(); ii++) {
//                                    if (a[a[i][0]][ii] == i) {
//                                        a[a[i][0]].erase(a[a[i][0]].begin() + ii);
//                                        break;
//                                    }
//                                }
//
//                                for (int ii = 0; ii < (int)a[a[i][1]].size(); ii++) {
//                                    if (a[a[i][1]][ii] == i) {
//                                        a[a[i][1]].erase(a[a[i][1]].begin() + ii);
//                                        break;
//                                    }
//                                }
//
//                                flag = false;
//                                a[i].erase(a[i].begin(), a[i].end());
//                                Answer--;
//                                break;
//                            }
//                        }
//                    }
//
//                }
//            } 
//
//            printf("Case #%d\n", test_case + 1);
//            printf("%d\n", Answer);
//        }
//    }
//
//    return 0;
//}