#include <iostream>
using namespace std;

int main() {
    int x = 5, y = 6;
    auto function = [x, y]() {
        cout << x + y << endl;
        cout << x * y << endl;
    };
    function();
    return 0;
}