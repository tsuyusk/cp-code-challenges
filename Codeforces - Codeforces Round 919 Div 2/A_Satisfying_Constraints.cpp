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
    int n; cin >> n;
    ll greaterThan = 0, lessThan = -1;
    set<ll> mustNotBe;

    for (int i = 0; i < n; i++) {
        ll a, x; cin >> a >> x;

        if (a == 1) {
            if (x >= greaterThan) {
                greaterThan = x;
            }
        } else if (a == 2) {
            if (lessThan == -1) {
                lessThan = x;
                continue;
            }
            if (x <= lessThan) {
                lessThan = x;
            }
        } else {
            mustNotBe.insert(x);
        }
    }

    if (lessThan < greaterThan) {
        print(0);
        return;
    }

    ll valid =  lessThan - greaterThan + 1;
    for (auto& v : mustNotBe) {
        if (v <= lessThan && v >= greaterThan) {
            valid--;
        }
    }

    print(valid);
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int nt; cin >> nt;

    while (nt--) {
        solve();
    }

    return 0;
}
