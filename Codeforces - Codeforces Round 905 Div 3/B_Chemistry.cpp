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
    int n, k;
    str string;
    cin >> n >> k;
    cin >> string;

    set<char> single_chars;

    for (int i = 0; i < string.size(); i++) {
        single_chars.insert(string[i]);
    }

    if (k == 0) {
        if (single_chars.size() == 1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }

        return;
    }

    if ((single_chars.size() - k) <= 1) {
        cout << "YES" << endl;
    } else {
        if ((single_chars.size() - k) % 2 == 0) {
            cout << "YES" << endl;
            return;
        }

        if (((n) % 2 != 0 && (single_chars.size() - k < 2))) {
            cout << "YES" << endl;
        }else {
                cout << "NO" << endl;
            }
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
