#include <iostream>
#include <algorithm>

using namespace std;

void log_array(int size, int* array) {
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }

    cout << endl;
}

int main() {
    int size; cin >> size;
    int sequence[size];
    int ordered_sequence[size];
    int digits_to_order[size];
    int amount_of_digits_to_order = 0;

    for (int i = 0; i < size; i++) {
        int current_integer; cin >> current_integer;

        sequence[i] = current_integer;
        ordered_sequence[i] = current_integer;
    }

    sort(ordered_sequence, ordered_sequence + size);

    for (int i = 0; i < size; i++) {
        int current_unordered_number = sequence[i];
        int current_ordered_number = ordered_sequence[i];

        if (current_ordered_number != current_unordered_number) {
            digits_to_order[amount_of_digits_to_order] = current_ordered_number;
            amount_of_digits_to_order++;
        }
    }

    cout << amount_of_digits_to_order << endl;

    if (amount_of_digits_to_order > 0) {
        log_array(amount_of_digits_to_order, digits_to_order);
    }
}
