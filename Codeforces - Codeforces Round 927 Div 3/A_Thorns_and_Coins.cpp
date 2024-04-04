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

void solve() {
    int n; cin >> n;
    string s; cin >> s;

    int c = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '*' && s[i+1] == '*') {
            break;
        }
        if (s[i] == '@') {
            c++;
        }
    }

    cout << c << "\n";
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
