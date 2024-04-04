#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;
using ll = long long;

void solve() {
    int n;
    cin >> n;

    int greetings = 0;

    vector<ll> positions(n);

    for (int i = 0; i < n; ++i) {
        ll x1, x2;
        cin >> x1 >> x2;

        positions[i] = x1;
    }

    unordered_map<ll, int> position_count;

    for (int i = 0; i < n; ++i) {
        position_count[positions[i]]++;
    }

    for (const auto& entry : position_count) {
        int count = entry.second;
        greetings += count * (count - 1) / 2; // Combination formula C(n, 2) = n * (n - 1) / 2
    }

    cout << greetings << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int nt;
    cin >> nt;

    while (nt--) {
        solve();
    }

    return 0;
}
