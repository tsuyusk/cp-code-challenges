#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    vector<int> nums;
    vector<int> bigger;

    for (int i = 0; i < 3; i++) {
        int n; cin >> n;

        nums.push_back(n);
    }

    int minimal_int = *min_element(nums.begin(), nums.end());

    for (int i = 0; i < 3; i++) {
        if (nums[i] > minimal_int) {
            bigger.push_back(nums[i]);
        }
    }

    int ops = 0;

    for (int i = 0; i < bigger.size(); i++) {
        while (bigger[i] > minimal_int) {
            bigger[i] -= minimal_int;

            ops++;
            if (ops > 3 || bigger[i] < minimal_int) {
                cout << "NO" << endl;
                return;
            }
        }
    }

    cout << "YES" << endl;
}

int main() {
    int nt; cin >> nt;

    while (nt--) {
        solve();
    }

    return 0;
}