#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;
    if (number < 0) {
        cout << "Liczba musi być nieujemna!" << endl;
        return 1;
    }
    cout << number << endl;
    return 0;
}

