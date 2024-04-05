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

int solveForK(int* array, int size, int k, bool shouldChange) {
    int ops = 1e9;
    int smallestIndex = -1;

    for (int i = 0; i < size; i++) {
        int v = array[i];
        int res = k-(v%k);
        int opsOldVal = ops;
        ops = min(ops, res);

        // teve update
        if (opsOldVal != ops) {
            smallestIndex = i;
        }
    }
    if (shouldChange) {
        array[smallestIndex] += k-(array[smallestIndex]%k);
    }

    return ops;
}

void solve() {
    int n, k; cin >> n >> k;
    // k entre 2 e 5
    int ops, even=0;
    int nums[n];
    for (int i = 0; i < n; i++) {
        int v; cin >> v;
        nums[i] = v;
        if (v % 2 == 0) {
            even++;
        }
    }

    if (k == 4) {
        ops=2;
        for (int i = 0; i < n; i++) {
            int val = nums[i];
            ops = min(ops, (k - val % k) % k);
        }
        ops = min(ops, 2-min(2, even));
    } else {
        ops = k - 1;

        for (int i = 0; i < n; i++) {
            int val = nums[i];
            ops = min(ops, (k - val % k) % k);
        }
    }

    print(ops);
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
