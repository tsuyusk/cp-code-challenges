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

void solve() {
    int a, b, c;
    cin >> a >> b >> c;

    if (a == b) {
        cout << 0 << endl;
        return;
    }
    if (c > a && c > b) {
        cout << 1 << endl;
        return;
    }

    int ops = 1;
    // enquanto for inteiro
    while (abs(a - b) > 2*c) {
        if (a > b) {
            a -= c;
            b += c;
        } else {
            b -= c;
            a += c;
        }
        ops++;
    }

    cout << ops << endl;
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
