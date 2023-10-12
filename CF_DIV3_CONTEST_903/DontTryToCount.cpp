#include <iostream>
#include <string>

using namespace std;

int main2() {
    int test_cases; cin >> test_cases;

    for (int i = 0; i < test_cases; i++) {
        int amount_of_tests = 0;
        int first_length, second_length; cin >> first_length >> second_length;
        string x; cin >> x;
        string s; cin >> s;

        if (x == s) {
            cout << amount_of_tests << endl;
            continue;
        }

        while (x.find(s) == string::npos) {
            x.append(x);

            amount_of_tests++;

            if (x.find(s) == string::npos && x.size() > (s.size() * 2)) {
                amount_of_tests = -1;
                break;
            }
        }

        cout << amount_of_tests << endl;
    }

    return 0;
}

