#include <bits/stdc++.h>

#define endl ('\n')
#define print(x) cout << x << endl
#define print_s(x) cout << x << ' '

#define loop(x, y) for(int x = 0; x < y; x++)
#define fin(x, y) for(auto& x : y)
#define midp(x, y) ((x + y) / 2)
#define has(x, y) (x.find(y) != x.end())
#define all(x) x.begin(), x.end()
#define sz(x) (x.size())
#define f first
#define s second


using namespace std;

using ll = long long;
using ull = unsigned long long;
using ii = pair<int, int>;
using ivec = vector<int>;
using imat = vector<vector<int>>;
using str = string;

constexpr int inf = 2e9 + 1;
constexpr int mod = 1e9 + 7;
constexpr ll maxnum = 3e5 + 100;

bool is_good(str& str) {
    for (int i = 0; i < sz(str); ++i) {
        if(str[i] != str[sz(str) - 1 - i]) {
            return false;
        }
    }

    return true;
}

void solve() {
    int sz_t;
    cin >> sz_t;

    str t;

    cin >> t;

    bool good = true;
    bool all_eq = true;

    if(t[0] == t[sz(t) - 1] && t[0] == '1') {
        print(-1);
        return;
    }

    for (int i = 0; i < sz(t) - 1; ++i) {
        if(t[i] != t[0]) {
            all_eq = false;
        }

        if(t[i] == t[sz(t) - 1 - i]) {
            good = false;
        }
    }

    if (good) {
        print(0);
        print("");
        return;
    }

    if(all_eq) {
        print(-1);
        return;
    }

    ivec pos;
    int s = 1;
    while (s) {
        int has_fin_loop = 0;
        for (int i = 0; i < sz(t) / 2; ++i) {
            if(sz(pos) > 300) {
                print(-1);
                return;
            }

            if(t[i] == t[sz(t) - 1 - i]) {
                pos.push_back(sz(t) - i);
                t.insert(sz(t) - i, "01");
                break;
            }

            if (i == ((sz(t) / 2) - 1)) {
                has_fin_loop = 1;
            }
        }


        if (has_fin_loop) {
            s = 0;
        }
    }

    if(sz(pos) > 300) {
        print(-1);
        return;
    }

    print(sz(pos));
    fin(val, pos) {
        print_s(val);
    }

    cout << "\n";
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
