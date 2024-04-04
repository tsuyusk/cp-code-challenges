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

    int a, b, c;

    if (n < 7 || n == 9) {
        printf("NO\n");
        return;
    }

    if (n % 3 == 0) {
        a = 1;
        b = 4;
        c = n-5;
    } else {
        a = 1;
        b = 2;
        c = n-3;
    }

    printf("YES\n");
    printf("%d %d %d\n", a, b, c);
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
