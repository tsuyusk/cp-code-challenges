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
using namespace std;

int main() {
    int n, h; cin >> n >> h;
    ivec p(n);

    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }

    int ops = 0;

    for (int i = 0; i < n; i++) {
        int ind = i;

        int dist = abs(h - p[ind]);
        if (p[ind] < h) {
            p[ind] += dist;
            p[ind+1] += dist;
        } else if (p[ind] > h) {
            p[ind] -= dist;
            p[ind+1] -= dist;
        }

        ops += dist;
    }


    cout << ops << endl;
}