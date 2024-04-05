#include <bits/stdc++.h>
using namespace std;

#define ivec vector<int>

ivec get_greatest_3(ivec a) {
    ivec res(3);

    int mx1=-1, mx2=-1, mx3=-1;


    for (int i = 0; i < a.size(); i++) {
        if (mx1==-1 || a[i] > a[mx1]) {
            mx3=mx2;
            mx2=mx1;
            mx1=i;
        }
        else if(mx2==-1 || a[i] > a[mx2]) {
            mx3=mx2;
            mx2=i;
        }
        else if (mx3==-1 || a[i] > a[mx3]) {
            mx3=i;
        }
    }

    res[0] = mx1;
    res[1] = mx2;
    res[2] = mx3;

    return res;
}

void solve() {
    int d; cin >> d;

    ivec a(d), b(d), c(d);

    for (auto &i:a) cin >> i;
    for (auto &i:b) cin >> i;
    for (auto &i:c) cin >> i;

    ivec ag3 = get_greatest_3(a);
    ivec bg3 = get_greatest_3(b);
    ivec cg3 = get_greatest_3(c);


    int res = -1;

    for (auto & i: ag3) {
        for (auto &j : bg3) {
            for (auto &k: cg3) {
                if (i != j && i != k && j != k) {
                    res = max(res, a[i] + b[j] + c[k]);
                }
            }
        }
    }

    cout << res << "\n";

}

int main()
{
    int nt; cin >> nt;

    while (nt--) {
        solve();
    }

    return 0;
}
