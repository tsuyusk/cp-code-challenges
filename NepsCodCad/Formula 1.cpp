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

struct Pilot {
    int total;
    ivec positions;
};

int compare(Pilot a, Pilot b) {
    return a.total < b.total;
}

void log_array(Pilot* array, int size) {
    for (int i = 0; i < size; i++) {
        cout << i+1 << " : " << array[i].total << " | ";
    }

    cout << endl;
}

void solve(int g, int p) {
    Pilot pilots[p];

    int g_val = g;
    for (int i = 0; i < p; i++) {
        pilots[i] = {0, {}};
    }

    for(int index = 0; g > 0; g--,index++) {
        for (int i = 0; i < p; i++) {
            int pos;
            cin >> pos;

            pilots[i].positions.push_back(pos);
        }
    }

    int s; // numero de sistemas de pontuacoes
    cin >> s;

    while (s--) {
        int k;  /// ate quando recebe pontos
        cin >> k;

        for (int i = 0; i < k; i++) {
            int pos_value; // valor pra quem ta na posicao i
            cin >> pos_value;

            for (int j = 0; j < p; j++) {
                for (int l = 0; l < g_val; l++) {
                    if (pilots[j].positions[l] == (i+1)) {
                        pilots[j].total += pos_value;
                    }
                }
            }
        }

        Pilot greatest_el = *max_element(pilots, pilots+p, compare);

        for (int l = 0; l < p; l++) {
//            cout << greatest_el.total << " : " << pilots[l].total << endl;
            if (greatest_el.total == pilots[l].total) {
                cout << l + 1 << " ";
            }
        }
        cout << endl;

        for (int l = 0; l < p; l++) {
            pilots[l].total = 0;
        }
    }

}

int main() {
    int g, p;

    while (1) {
        cin >> g >> p;

        if (g == 0 || p == 0) {
            return 0;
        }

        solve(g, p);
    }
}
