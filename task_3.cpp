#include <iostream>
using namespace std;

int multiply(const int &a, const int &b);

int main() {
    int x = 263, y = 273;
    cout << multiply(x, y);
    return 0;
}

int multiply(const int &a, const int &b) {
    return a * b;
}