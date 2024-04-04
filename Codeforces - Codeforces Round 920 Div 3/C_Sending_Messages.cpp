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
    ll n, f, a, b;
    cin >> n >> f >> a >> b;
    ll curMoment = 0;
    ivec mm(n);
    for (int i = 0; i < n; i++) {
        int v; cin >> v;
        mm[i] = v;
    }

    for (auto & val : mm) {
        ll strategy1 = (val - curMoment) * a;
        ll strategy2 = (b);
        ll chosenStrategy = min(strategy1,strategy2);

        if (chosenStrategy >= f) {
            print("NO");
            return;
        } else {
            f -= chosenStrategy;
        }
        curMoment = val;
    }

    print("YES");
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
