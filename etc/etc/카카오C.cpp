//#include <iostream>
//#include <vector>
//using namespace std;
//
//int n, k, q;
//vector<int> song;
//vector<int> singer;
//
//vector<pair<int, int>> item;
//
//struct kpop {
//    int song;
//    int singer;
//};
//
//vector<vector<int>> node;
//vector<int> tree;
//
//int cnt = 0;
//
//int singersize[100001];
//int singercoin[100001];
//int singertime[100001];
//
//void dfs(int k)
//{
//    item[k].first = cnt;
//    tree[cnt++] = k;
//
//    for (int n : node[k])
//        dfs(n);
//    item[k].second = cnt - 1;
//    return;
//}
//
//int main(void)
//{
//    cin >> n >> k >> q;
//    node = vector<vector<int>>(n + 1);
//    item = vector<pair<int, int>>(n + 1);
//    tree = vector<int>(n);
//    singer = vector<int>(n + 1);
//    for (int i = 2; i <= n; i++)
//    {
//        int p;
//        cin >> p;
//        node[p].push_back(i);
//    }
//    dfs(1);
//
//    for (int i = 1; i <= n; i++)
//    {
//        scanf("%d", &singer[i]);
//        singersize[singer[i]]++;
//    }
//
//    for (int i = 1; i <= k; i++)
//    {
//        int t, p, s;
//        scanf("%d %d %d", &t, &p, &s);
//        int mid = s / (item[p].second - item[p].first + 1);
//        for (int j = item[p].first; j <= item[p].second; j++)
//        {
//            singercoin[singer[tree[j]]] += mid;
//        }
//        for (int j = 1; j <= n; j++)
//        {
//            if (singersize[j] == 0)
//                continue;
//            if (singertime[j] == 0)
//            {
//                if (double(singercoin[j] / singersize[j]) > q)
//                    singertime[j] = t;
//            }
//
//        }
//
//    }
//    for (int i = 1; i <= n; i++)
//    {
//        if (singertime[singer[i]] == 0)
//            printf("-1\n");
//        else
//            printf("%d\n", singertime[singer[i]]);
//    }
//
//
//    return 0;
//}