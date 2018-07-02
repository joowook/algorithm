//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//int binary(vector<int> &bus, int left) {
//    int right = bus.size() - 1;
//    int x = bus[left];
//    int ll = left;
//    int rr = left;
//    while (left <= right) {
//        int mid = (left + right) / 2;
//
//        if (bus[mid] == x) {
//            rr = mid;
//            left = mid + 1;
//        }
//        else if (bus[mid] > x) {
//            right = mid - 1;
//        }
//        else {
//            left = mid + 1;
//        }
//    }
//
//    if (ll == rr) {
//        return 1;
//    }
//
//    return rr;
//}
//
//int main(int argc, char** argv)
//{
//    setbuf(stdout, NULL);
//    int T, test_case;
//    scanf("%d", &T);
//
//    for (test_case = 0; test_case < T; test_case++)
//    {
//        int N, K;
//        int Answer = 0;
//
//        scanf("%d %d", &N, &K);
//
//        vector<int> a(N);
//
//        for (int i = 0; i < N; i++) {
//            scanf("%d", &a[i]);
//        }
//
//        sort(a.begin(), a.end());
//        vector<int> bus(1);
//        bus[0] = a[0];
//        int ii = 1;
//
//        for (int i = 1; i < N; i++) {
//            if (bus[0] + K >= a[i]) {
//                bus.push_back(a[i]);
//                ii = i + 1;
//            }
//            else {
//                break;
//            }
//        }
//
//
//        for (int i = ii; i < N; i++) {
//            int left = 0;
//            int right = bus.size() - 1;
//            int tmp = 2100000000;
//            int mid = (left + right) / 2;
//            bool flag = false;
//            while (left <= right) {
//                mid = (left + right) / 2;
//
//                if (mid < (int)bus.size() && a[i] - bus[mid] <= K) {
//
//                    right = mid - 1;
//                }
//                else if (mid <(int)bus.size() && a[i] - bus[mid] > K) {
//                    left = mid + 1;
//                    if (tmp > mid) {
//                        tmp = mid;
//                        flag = true;
//                    }
//                }
//                else {
//                    break;
//                }
//            }
//
//            if (!flag) {
//                bus.push_back(a[i]);
//            }
//            else {
//                int x;
//                if (tmp == bus.size() - 1) {
//                    x = tmp;
//                }
//                else {
//                    x = binary(bus, tmp + 1);
//                }
//
//               /* printf("%d\n", x);
//
//                return 0;*/
//                bus.insert(bus.begin() + x + 1, a[i]);
//                bus.erase(bus.begin() + tmp);
//
//             /*   bus[tmp] = a[i];
//                sort(bus.begin(), bus.end());*/
//            }
//        }
//
//        Answer = bus.size();
//
//        printf("Case #%d\n", test_case + 1);
//        printf("%d\n", Answer);
//    }
//
//    return 0;
//}