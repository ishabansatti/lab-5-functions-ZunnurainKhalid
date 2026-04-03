#include <iostream>
using namespace std;
void printType(int);
void printType(double);
void printType(char);
void printType(string);
int main() {
    printType(5);
    printType(3.14);
    printType('A');
    printType("Hello");
    return 0;
}
void printType(int) {
    cout << "int" << endl;
}
void printType(double) {
    cout << "double" << endl;
}
void printType(char) {
    cout << "char" << endl;
}
void printType(string) {
    cout << "string" << endl;
}