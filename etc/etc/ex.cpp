
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int solution(vector<int> a, long long k) {
    int answer = 0;
    queue<pair<int, int>> q;
    int t = 0;
    int n = a.size();
    for (int i = 0; i < n; i++) {
        q.push(make_pair(a[i], i+1));
    }
    
    while (k--) {
        int first = q.front().first;
        int second = q.front().second;
        if (first != 1) {
            q.push(make_pair(first - 1, second));
        }
        
        if(q.empty()) {}
    }

    answer = q.front().second;

    return answer;
}