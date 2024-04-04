#include <bits/stdc++.h>

using namespace std;

bool is_num(char c) {
    return c >= '0' && c <= '9';
}

bool is_num_z(char c) {
    return c >= '1' && c <= '9';
}

void solve() {
    string s; cin >> s;

    int last_i = 0;

    for (int i = s.size() - 1; i >= 0; i--) {
        if (is_num(s[i+1]) && !is_num(s[i])) {
            last_i = i;
            break;
        }
    }

    for (int i = last_i; i < s.size(); i++) {
        if (is_num_z(s[i])) {
            last_i = i-1;
            break;
        }
    }

    string un = s.substr(0, last_i+1);

    cout << un << "\n";
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
