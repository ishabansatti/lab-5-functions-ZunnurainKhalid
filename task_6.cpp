#include <iostream>
using namespace std;

int main() {
    int counter = 0;
    auto increment = [&counter]() {
        counter++;
    };
    increment();
    cout << counter << endl;
    increment();
    cout << counter << endl;
    increment();
    cout << counter << endl;
    return 0;
}