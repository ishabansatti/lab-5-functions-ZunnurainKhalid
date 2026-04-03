#include <iostream>
using namespace std;

int area(int side);
int area(int length, int width);
double area(double radius);
int main() {
    cout << area(4) << endl;
    cout << area(5, 3) << endl;
    cout << area(2.5) << endl;
    return 0;
}
int area(int side) {
    return side * side;
}
int area(int length, int width) {
    return length * width;
}
double area(double radius) {
    return 3.14159 * radius * radius;
}