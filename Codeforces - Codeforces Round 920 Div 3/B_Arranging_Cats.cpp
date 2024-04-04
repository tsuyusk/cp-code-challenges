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
    str ss1, ss2; cin >> ss1 >> ss2;
    int toadd = 0, toreduce=0;
    for (int i = 0; i < n; i++) {
        if (ss1[i] == '0' && ss2[i] == '1') {
            toadd++;
        }
        if (ss1[i] == '1' && ss2[i] == '0') {
            toreduce++;
        }
    }

    int differences = max(toadd, toreduce);

    print(differences);
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
