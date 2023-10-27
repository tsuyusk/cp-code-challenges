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

void log_matrix(ivec &array) {
    for (int i = 0; i < array.size(); i++) {
        cout << "[" << i << "]: " << array[i] << " . ";
    }
    cout << endl;
}
void solve() {
    // nao consegui resolver ainda.
    int n;
    cin >> n;
    ivec nums(3);

    if (n < 7) {
        cout << "NO" << endl;
        return;
    }

    nums[0] = (n/2) + (n%2);
    nums[1] = 1;
    nums[2] = nums[0] - nums[1];

    int sum = nums[0] + nums[1] + nums[2];
    if (sum > n) {
        int dif = sum - n;

      if (nums[2] - dif % 3 != 0){
            nums[2] -= dif;
        } else if (nums[0] - dif % 3 != 0) {
          nums[0] -= dif;
        } else if (nums[1] - dif % 3 != 0) {
          nums[1] -= dif;
          }
    }

    if (nums[2] % 3 == 0) {
        nums[2]--;
        if ((nums[0]+1) % 3 != 0) {
            nums[0]++;
        } else {
            nums[1]++;
        }
    }

    set<int> single_nums;
    for (int i = 0; i < 3; i++) {
        if ((nums[i] % 3) == 0) {
            cout << i << ": " << nums[i] << endl;
            cout << "NO" << endl;
            return;
        }

        single_nums.insert(nums[i]);
    }

   // log_matrix(nums);
    if (single_nums.size() < 3) {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;

    for (int i = 0; i < 3; i++) {
        cout << nums[i] << " ";
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
