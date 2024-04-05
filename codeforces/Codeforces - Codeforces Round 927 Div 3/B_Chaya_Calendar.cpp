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
constexpr ll
maxnum = 3e5 + 100;

int glge(int a, int b) {
    int c = a;

    while (c < b) {
        c += a;
    }
    if (c > a) {
        c -= a;
    }

    return c;
}

void solve() {
    int n; cin >> n;
    ivec a;
    for (int i = 0; i < n; i++) {
        int k; cin >> k;
        a.push_back(k);
    }

    int cy = a[n-1];

    int is_valid = 0;
    while (is_valid == 0) {
        int prev = cy;
        int parsedY;
        for (int i = n - 2; i >= 0; i--) {
            parsedY = glge(a[i], prev);

            if (parsedY >= prev) {
                is_valid = 0;
                cy += a[n - 1];
                break;
            } else {
                is_valid=1;
            }
            prev = parsedY;
        }
    }

    cout << cy << "\n";
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
