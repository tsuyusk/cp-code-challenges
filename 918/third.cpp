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

bool is_perfect_square(long long n){
    double guess = sqrt(n);
    long long r = floor(guess);
    if(r*r == n) return true;
    else {
        r = ceil(guess);
        return r*r == n;
    }
}

void solve() {
    int n; cin >> n;
    ll total = 0;

    for (int i = 0; i < n; i++) {
        ll v; cin >> v;
        total += v;
    }

    if (is_perfect_square(total)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
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
