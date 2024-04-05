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
    str s;
    cin >> s;

    int lzi = -1;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '0' && s[i+1] != '0') {
            lzi = i+1;
            break;
        }
    }

    string s1, s2;
    if (lzi == -1) {
        // no 0
        s1 = s[0];
        s2 = s.substr(1);
    } else {
        s1 = s.substr(0, lzi);
        s2 = s.substr(lzi);
    }

    if (!s1.empty() && !s2.empty()) {
        int ns1 = stoi(s1), ns2 = stoi(s2);

        if (ns2 > ns1 && ns2 != 0 && ns1 != 0) {
            cout << ns1 << " " << ns2 << endl;
        } else {
            cout << "-1" << endl;
        }
    } else {
        cout << "-1" << endl;
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
