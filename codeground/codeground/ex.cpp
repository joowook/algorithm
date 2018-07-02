//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//int Answer;
//
//
//vector<int> statsize[200001];
//vector<int> twice;
//
//void adois(int pos)
//{
//    if (statsize[pos].size() == 1)
//    {
//        twice.erase(twice.begin());
//        return;
//    }
//    int x = statsize[pos][0];
//    int y = statsize[pos][1];
//    for (int j = 0; j < statsize[x].size(); j++)
//    {
//        if (statsize[x][j] == y)
//        {
//            statsize[x].erase(statsize[x].begin() + j);
//            break;
//        }
//        if (j == statsize[x].size() - 1)
//        {
//            twice.erase(twice.begin());
//            return;
//        }
//    }
//
//    for (int j = 0; j< statsize[y].size(); j++)
//        if (statsize[y][j] == pos)
//        {
//            statsize[y].erase(statsize[y].begin() + j);
//            break;
//        }
//    Answer--;
//
//    twice.erase(twice.begin());
//
//    if (statsize[x].size() == 2 && statsize[y].size() == 2)
//    {
//        if (statsize[y][0] == x || statsize[y][1] == x)
//            twice.push_back(x);
//
//    }
//    else
//    {
//        if (statsize[x].size() == 2)
//            twice.push_back(x);
//
//        if (statsize[y].size() == 2)
//            twice.push_back(y);
//    }
//
//}
//
//int main(int argc, char** argv)
//{
//
//    int T, test_case;
//
//    cin >> T;
//    for (test_case = 0; test_case < T; test_case++)
//    {
//
//        int n, m;
//        cin >> n >> m;
//
//        Answer = n;
//        for (int i = 0; i < m; i++)
//        {
//            int x, y;
//            scanf("%d %d", &x, &y);
//            statsize[x].push_back(y);
//            statsize[y].push_back(x);
//        }
//
//        for (int i = 1; i <= n; i++)
//        {
//            if (statsize[i].size() == 2)
//                twice.push_back(i);
//        }
//
//
//        int tsize = twice.size();
//        while (tsize != 0)
//        {
//            int temp = twice[0];
//            adois(temp);
//            tsize = twice.size();
//
//        }
//
//
//        for (int i = 1; i <= n; i++)
//            statsize[i].clear();
//
//        cout << "Case #" << test_case + 1 << endl;
//        cout << Answer << endl;
//    }
//
//    return 0;
//}