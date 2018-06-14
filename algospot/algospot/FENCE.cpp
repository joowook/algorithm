#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int go(vector<int> &a, int left, int right) {
    if (left == right) {
        return a[left];
    }

    int mid = (left + right) / 2;

    int ans = max(go(a, left, mid), go(a, mid + 1, right));

    int low = mid;
    int high = mid + 1;

    int h = min(a[low], a[high]);

    ans = max(ans, 2 * h);

    while (low > left || high < right) {
        if (high < right && (low == left || a[low - 1] < a[high + 1])) {
            h = min(h, a[++high]);
        }
        else {
            h = min(h, a[--low]);
        }

        ans = max(ans, (high - low + 1) * h);
    }

    return ans;
}
int main(void) {
    int tc;

    scanf("%d", &tc);

    while (tc--) {
        int N;
        int ans = 0;

        scanf("%d", &N);

        vector<int> a(N);

        for (int i = 0; i < N; i++) {
            scanf("%d", &a[i]);
        }

        ans = go(a, 0, N - 1);
        
        printf("%d\n", ans);
    }

    return 0;
}