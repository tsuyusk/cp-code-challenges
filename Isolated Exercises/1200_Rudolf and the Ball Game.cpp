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

void solve() {
    int n, m, x; cin >> n >> m >> x;

    int clock = x, cclock = x;
    set<int> pp[2];
    int ix = 0;
    // ix pra alternar
    pp[ix].insert(clock);

    for (int i = 0; i < m; i++) {
        int r; cin >> r;
        char c; cin >> c;

        while (!pp[ix].empty()) {
            // pega um item de pp[ix], processa ele (clockwise e counterclockwise), manda pra proxima lista,
            // remove ele de pp[ix] e faz isso com o proximo
            // ate nao sobrar items aqui, ai ele processa o proximo conjunto de operacoes clockwise ou counter clockwise
            // no outro vetor dos items que sofreram as alteracoes daqui
            // forma maneira de implementar
            int u = *(pp[ix].begin());
            pp[ix].erase(u);

            clock = (u+r-1)%n + 1;
            cclock = (u-r-1 + n)%n + 1;

            if (c == '?') {
                pp[ix^1].insert(clock);
                pp[ix^1].insert(cclock);
            } else if (c == '1') {
                pp[ix^1].insert(cclock);
            } else {
                pp[ix^1].insert(clock);
            }

            // alterna entre 0 e 1
        }
            // reduz 1 pra calcular e dps soma 1 pra normalizar
        ix = ix ^ 1;
    }

    // pp[ix] pra saber qual nosso atual
    cout << pp[ix].size() << endl;
    for ( auto& v: pp[ix] ) {
        cout << v << " ";
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
