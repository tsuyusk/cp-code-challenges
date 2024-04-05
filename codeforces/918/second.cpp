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
    vector<vector<char>> m(3, vector<char>(3));

    int qi, qj;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            char c;
            cin >> c;
            m[i][j] = c;

            if (c == '?') {
                qi = i;
                qj = j;
            }
        }
    }

    char letter;
    int hasA = 0, hasB = 0, hasC = 0;
    for (int j = 0; j < 3; j++) {
        char val = m[qi][j];

        if (val == 'A') hasA = 1;
        if (val == 'B') hasB = 1;
        if (val == 'C') hasC = 1;
    }

    if (hasA == 0) letter = 'A';
    if (hasB == 0) letter = 'B';
    if (hasC == 0) letter = 'C';

    cout << letter << endl;
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
