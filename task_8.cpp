#include <iostream>
using namespace std;

int accumulate(int value) {
    static int total = 0;
    total += value;
    return total;
}
int main() {
    cout << accumulate(10) << endl;
    cout << accumulate(25) << endl;
    cout << accumulate(5) << endl;
    return 0;
}
