//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<string.h>
//using namespace std;
//
//int arr[20001][20001];
//bool ch[20001];
//long long ans = 1000000000;
//long long a[3];
//int n, m;
//void findre(int index, long long w)
//{
//    if (ch[index])
//        return;
//    ch[index] = true;
//    if (index == n)
//    {
//        ans = min(ans, w);
//        return;
//    }
//
//    for (int i = 1; i <= n; i++)
//    {
//        if (arr[index][n] == 0)
//        {
//            if (arr[index][i] != 0)
//            {
//                if (!ch[i])
//                {
//                    findre(i, w + arr[index][i]);
//                    ch[i] = false;
//                }
//            }
//        }
//        else
//        {
//            findre(n, w + arr[index][n]);
//            ch[n] = false;
//        }
//    }
//    return;
//}
//
//int main()
//{
//    int u, v, w;
//    scanf("%d %d", &n, &m);
//    for (int i = 0; i < m; i++)
//    {
//        int v1, v2, k;
//        scanf("%d %d %d", &v1, &v2, &k);
//        arr[v1][v2] = k;
//        arr[v2][v1] = k;
//    }
//    scanf("%d %d %d", &u, &v, &w);
//    for (int i = 1; i <= n; i++)
//    {
//        if (arr[u][i] != 0)
//        {
//            findre(i, arr[u][i]);
//            memset(ch, false, sizeof(ch));
//        }
//    }
//    findre(4, arr[u][4]);
//    a[0] = ans;
//    ans = 1000000000;
//    memset(ch, false, sizeof(ch));
//    for (int i = 1; i <= n; i++)
//    {
//        if (arr[v][i] != 0)
//        {
//            findre(i, arr[v][i]);
//            memset(ch, false, sizeof(ch));
//        }
//    }
//    a[1] = ans;
//    ans = 1000000000;
//    memset(ch, false, sizeof(ch));
//    for (int i = 1; i <= n; i++)
//    {
//        if (arr[w][i] != 0)
//        {
//            findre(i, arr[w][i]);
//            memset(ch, false, sizeof(ch));
//        }
//    }
//    a[2] = ans;
//    sort(a, a + 3);
//    printf("%lld", a[2]);
//}