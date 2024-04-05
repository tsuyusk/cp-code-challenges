#include <bits/stdc++.h>
#define endl ('\n')
#define print(x) cout << x << endl;
#define forin(x, y) for(auto& x : y)
#define has(x, y) (x.find(y) != x.end())
#define all(x) (x.begin(), x.end())
using namespace std;
using ll = long long;
using ull = unsigned long long;
using ii = pair<int, int>;
using ivec = vector<int>;
using str = string;
constexpr int infin = 2e9 + 1;
constexpr int mod = 1e9 + 7;
constexpr ll maxnum = 3e5 + 100;
void solve() {
    int n, k;
    cin >> n >> k;
    ivec a(n), b(n);
    forin(val, a) cin >> val;
    forin(val, b) cin >> val;
    int sum=0,local_m=-infin,maxv=-infin;
    for (int i=0;i<k;i++) {
        if (i <= n-1) {
            sum += a[i];
            local_m = max(local_m, b[i]);
            int repetitions = local_m*(k-i-1) > 0 ?local_m*(k-i-1) : 0;
            int v=sum+repetitions;
            maxv = max(maxv, v);
        }
    }
    cout << (maxv) << endl;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t;cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}