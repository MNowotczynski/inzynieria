#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int number;
    cin >> number;

    if (number < 0) {
        cout << "Liczba musi być nieujemna!" << endl;
        return 1;
    }

    cout << number << endl; 
    cout << fibonacci(number) << endl;

    return 0;
}

