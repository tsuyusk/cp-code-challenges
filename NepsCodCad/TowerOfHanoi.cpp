#include <iostream>
#include <math.h>
using namespace std;

void solve(int ts, int i) {
    int ops = pow(2, ts) - 1;

    if (i != 1) {
        cout << "\n\n";
    }
    cout << "Teste " << i << "\n" << ops;
}

int main() {
    int ns[100];
    int n, numTestCases = 0;

    while (true) {
        cin >> n;

        if (n == 0) {
            break;
        }

        ns[numTestCases] = n;
        numTestCases++;
    }

    for (int i = 0; i < numTestCases; i++) {
        solve(ns[i], i + 1);
    }

    return 0;
}
