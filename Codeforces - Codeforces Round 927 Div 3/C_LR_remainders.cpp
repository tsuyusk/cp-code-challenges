#include <bits/stdc++.h>

#define endl ('\n')
#define print(x) cout << x << endl
#define print_s(x) cout << x << ' '

#define fin(x, y) for(auto& x : y)
#define midp(x, y) ((x + y) / 2)
#define has(x, y) (x.find(y) != x.end())
#define all(x) x.begin(), x.end()
#define sz(x) (x.size())
#define minel(x) *min_element(all(x))
#define maxel(x) *max_element(all(x))
#define f first
#define s second
#define pb push_back

using namespace std;

using ll = long long;
using ull = unsigned long long;
using ii = pair<int, int>;
using ivec = vector<int>;
using imat = vector<vector<int>>;
using str = string;

constexpr int inf = 3e5 + 100;
constexpr int mod = 1e9 + 7;
constexpr ll maxnum = 2e9 + 1;


void solve() {
    ll n, m; cin >> n >> m;
    vector<ll> a(n);
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    int ptr1 = 0; int ptr2 = n-1;
    string x; cin >> x;
    for (int i=0; i<n-1; i++) {
        if (x.at(i)=='L') {ptr1++;}
        if (x.at(i)=='R') {ptr2--;}
    }
    vector<ll> answers;
    ll ans = a[ptr1]%m;
    answers.pb(ans%m);
    for (ll i=n-2; i>=0; i--) {
        if (x.at(i)=='L') {
            ptr1--;
            ans = ((ans%m)*(a[ptr1]%m))%m;
            answers.pb(ans);
        }
        else {
            ptr2++;
            ans = ((ans%m)*(a[ptr2]%m))%m;
            answers.pb(ans);
        }
    }
    for (int i=n-1; i>=0; i--) {
        cout << answers[i] << ' ';
    }
    cout << endl;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int nt; cin >> nt;
    while (nt--) {
        solve();
    }
    return 0;
}
