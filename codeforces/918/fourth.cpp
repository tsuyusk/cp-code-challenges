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

int is_vowel (char c) {
    return c == 'a' || c == 'e';
}

int is_consonant(char c) {
    return c != 'a' || c != 'e';
}

void solve() {
    int n; cin >> n;
    string txt; cin >> txt;
    vector<string> output;

    for (int i = 0; i < n; i++) {
        if (is_vowel(txt[i])) continue;
        if ((i + 2) < (n)) {
            if (!is_vowel(txt[i + 2]) && !is_vowel(txt[i + 3])) {
                output.push_back({txt[i], txt[i+1], txt[i+2]});
                i += 2;
            } else {
                output.push_back({txt[i], txt[i+1]});
                i++;
            }
        } else {
            output.push_back({txt[i], txt[i+1]});
        }
    }

    for (int i = 0; i < output.size(); i++) {
        cout << output[i];
        if (i != output.size()-1) {
            cout << '.';
        }
    }

    cout << endl;
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
