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
  // coins 1, 3, 6, 10, 15
  int c; cin >> c;
  int a = 1e9;

  // se fosse precisar de mais de 2 uns, compensaria mais usar um 3 e k-3 uns
  for (int one = 0; one <= 2; one++) {
      for (int three = 0; three <= 1;three++) {
            for (int six = 0; six <= 3;six++) {
                for (int ten = 0; ten <= 2; ten++) {
                    // limita o problema
                    int s = one + 3*three + 6*six + 10*ten;
                    if (s <= c && (c-s)%15==0) {
                        a = min(a, one+three+six+ten+(c-s)/15);
                    }
                }
            }
      }
  }

  cout << a << endl;
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
