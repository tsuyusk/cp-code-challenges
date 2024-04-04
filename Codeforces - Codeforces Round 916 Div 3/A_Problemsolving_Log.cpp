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
    int size;
    cin >> size;
    string text;
    cin >> text;

    map<char, int> occourences;
    for (int i = 0; i < size; i++) {
        char c = text[i];
        if (has(occourences, c)) {
            occourences[c]++;
        } else {
            occourences.insert({c, 1});
        }
    }

    int total = 0;
    for (auto const& [key, val] : occourences) {
        int need_to_appear = int(key) - 64;
        if (need_to_appear <= val) {
            total++;
        }
    }

    cout << total << endl;
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
