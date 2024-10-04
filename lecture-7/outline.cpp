// bitwise operators (&, |, ^)
// left shift(<<) and right shift(>>) operators
// operator precedence
// variable scope - local and Global
// datatype modifiers - long, short, long long, signed and unsigned 
#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
    if (n <= 0) {
        return false;
    }

    while (n % 2 == 0) {
        n /= 2;
    }

    return n == 1;
}

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (isPowerOfTwo(number)) {
        cout << number << " is a power of 2." << endl;
    } else {
        cout << number << " is not a power of 2." << endl;
    }

    return 0;
}