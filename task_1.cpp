#include <iostream>
using namespace std;

int square(int n);

int main() {
    int a = square(7);
    cout << "Square is: " << a;
    return 0;
}

int square(int n) {
    return n * n;
}