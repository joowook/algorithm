//#include<iostream>
//#include<algorithm>
//#include<cstdio>
//
//using namespace std;
//
//int money[4];
//int month[12];
//int ans = 10000000;
//
//void go(int cnt, int sum)
//{
//    if (cnt >= 12)
//    {
//        ans = min(sum, ans);
//        return;
//    }
//    go(cnt + 1, sum + (month[cnt] * money[0]));
//    go(cnt + 1, sum + money[1]);
//    go(cnt + 3, sum + money[2]);
//    go(cnt + 12, sum + money[3]);
//}
//int main()
//{
//    ios_base::sync_with_stdio(false);
//    freopen("test.txt", "r", stdin);
//    int t;
//    cin >> t;
//    for (int test = 1; test <= t; test++)
//    {
//        for (int i = 0; i < 4; i++)
//        {
//            cin >> money[i];
//        }
//
//        for (int i = 0; i < 12; i++)
//        {
//            cin >> month[i];
//        }
//
//        go(0, 0);
//
//        cout << "#" << test << " " << ans;
//        ans = 10000000;
//    }
//    return 0;
//}