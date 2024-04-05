#include <bits/stdc++.h>

#define endl ('\n')
#define print(x) cout << x << endl;

#define has(x, y) (x.find(y) != x.end())
#define all(x) (x.begin(), x.end())

using namespace std;

using ll = long long;
using ull = unsigned long long;
using ii = pair<int, int>;
using ivec = vector<int>;
using str = string;

constexpr int inf = 2e9 + 1;
constexpr int mod = 1e9 + 7;
constexpr ll maxnum = 3e5 + 100;

void log_array(ivec array) {
    cout << endl;
    for (int p : array) {
        cout << p << ", ";
    }
    cout << endl;
}

void solve() {
    int n, k, x; cin >> n >> k >> x;
    ivec nums(n);
    int maxV = -1e9;

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    sort(nums.begin(), nums.end(), greater<int>());

    for (int i = 1; i < n; i++) {
        nums[i] += nums[i-1];
    }

    // alice optmical move is removing the greatest
    // bob optmical move is -1 the greatest
    // for each alice optmical move (0 - k) seeing the result and getting the greatest one
    for (int i = 0; i <= k; i++) {
        if (n-1-i < 0) {
            maxV=max(maxV,0);
            continue;
        }
        int result=nums[n-1]-(2*nums[min(i+x-1,n-1)]);
        result += (i == 0) ? 0 : nums[i-1];
        maxV=max(maxV,result);
    }

    print(maxV);
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int nt;
    cin >> nt;

    while (nt--) {
        solve();
    }

    return 0;
}
