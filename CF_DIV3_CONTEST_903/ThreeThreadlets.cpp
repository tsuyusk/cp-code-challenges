#include <bits/stdc++.h>
#define cout(x) cout << x
#define endl ('\n')
#define pb push_back
#define add insert
#define has(x, y) (x.find(y) != x.end())
#define all(x) x.begin(), x.end()

using namespace std;

void solve() {
    vector<int> nums(3);
    for (int i = 0; i < 3; ++i) {
        cin >> nums[i];
    }

    int min = *min_element(all(nums));
    vector<int> bigger;
    for (int i = 0; i < 3; ++i) {
        if (nums[i] > min) bigger.push_back(nums[i]);
    }

    int ops = 3;

    for (int i = 0; i < bigger.size(); ++i) {
        while(bigger[i] > min) {
            bigger[i] -= min;
            ops--;
            if (bigger[i] < min) {
                cout("NO\n");
                return;
            }
        }
    }

    if (ops >= 0) {
        cout("YES\n");
    } else {
        cout("NO\n");
    }
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int nt;
    cin >> nt;

    while(nt--) {
        solve();
    }

    return 0;
}