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


void swap(std::vector<int> &vec, int index1, int index2) {
    int temp = vec[index1];
    vec[index1] = vec[index2];
    vec[index2] = temp;
}

void solve() {
    int n; cin >> n;
    ivec ns(n);
    for (auto& i: ns) {
        cin >> i;
    }

    // nao posso deixar um numero que eh multiplo do proximo um na frente do outro



    // caminhando e alterando ?

    int mod;
    int tries;
    for (int i = 0; i < n; i++) {
        tries = 0;
        label:
        if (tries >= n*2) {
            print("NO");
            return;
        }
        mod = ns[i] % ns[i+1];

        if (mod == 0) {
            int nvi = i+1;
            for (int j = nvi; j < n; j++) {
                if (ns[i] % ns[j] != 0) {
                    nvi = j;
                }
            }

            swap(ns, i+1, nvi);
            tries++;
            goto label;
        }
    }

    for (auto &k:ns) {
        cout << k << " ";
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
