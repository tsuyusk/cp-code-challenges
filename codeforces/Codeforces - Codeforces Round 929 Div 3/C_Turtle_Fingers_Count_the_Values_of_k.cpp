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

std::pair<int, int> maxExponents(int a, int b, int l) {
    int maxExpA = 0, maxExpB = 0;

    int l2 = l;
    while (l2 % a == 0) {
        l2 /= a;
        maxExpA++;
    }
    while (l2 % b == 0) {
        l2 /= b;
        maxExpB++;
    }

    int expb=0, expa=0;
    while (l % b == 0) {
        l /= b;
        expb++;
    }
    while (l % a == 0) {
        l /= a;
        expa++;
    }
    return {max(maxExpA,expa), max(maxExpB,expb)};
}

void solve() {
    int a, b,c; cin >> a >> b >> c;
    unordered_set<int> distinct_k;

    if ((c % a != 0) && (c % b != 0)) {
        print(1);
        return;
    }

    /// divisivel por a ou por b
    ii val = maxExponents(a, b, c);
    int mx = val.first, my = val.second;

//    print("" << mx << " " << my);

    for (int x = 0; x <= mx; x++) {
        for (int y = 0; y <= my; y++) {
            double value = c / (pow(a, x) * pow(b, y));

            if (int(value) == value) {
                distinct_k.insert(value);
            }
        }
    }

    print(distinct_k.size());
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
