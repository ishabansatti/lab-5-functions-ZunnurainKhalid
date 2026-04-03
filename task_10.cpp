#include <iostream>
using namespace std;

int power(int base, int exp);

int main() {
    cout << power(2, 8) << endl;
    cout << power(3, 4) << endl;
    return 0;
}

int power(int base, int exp) {
    if (exp == 0) return 1;
    return base * power(base, exp - 1);
}