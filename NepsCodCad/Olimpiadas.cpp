#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, k; cin >> n >> k;
    int contestants[n], amount_of_people_who_pass = 0;

    for (int i = 0; i < n; i++) {
        cin >> contestants[i];
    }

    for (int i = 0; i < n; i++) {
        int curr = contestants[i];
        if (curr <= 0) {
            continue;
        }

        if (curr >= contestants[k - 1]) {
            amount_of_people_who_pass++;
        }
    }

    cout << amount_of_people_who_pass;

    return 0;
}