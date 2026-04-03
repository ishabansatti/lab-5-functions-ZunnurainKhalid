#include <iostream>
using namespace std;

int calculate(int a, int b, char op);
double calculate(double a, double b, char op);
double power(double base, int exp);
int total_calc();

int main() {
    auto absDiff = [](double a, double b) {
        double diff = a - b;
        if (diff < 0) diff = -diff;
        cout << "Absolute difference: " << diff << endl;
    };

    cout << "10 + 5 = " << calculate(10, 5, '+') << endl;
    total_calc();

    cout << "10.5 - 3.2 = " << calculate(10.5, 3.2, '-') << endl;
    total_calc();

    cout << "2 ^ 8 = " << power(2, 8) << endl;
    total_calc();

    absDiff(10, 5);

    cout << "Total calculations performed: " << total_calc() << endl;

    return 0;
}

int calculate(int a, int b, char op) {
    if (op == '+') return a + b;
    if (op == '-') return a - b;
    if (op == '*') return a * b;
    if (op == '/') {
        if (b == 0) {
            cout << "Error: Division by zero" << endl;
            return 0;
        }
        return a / b;
    }
    return 0;
}

double calculate(double a, double b, char op) {
    if (op == '+') return a + b;
    if (op == '-') return a - b;
    if (op == '*') return a * b;
    if (op == '/') {
        if (b == 0) {
            cout << "Error: Division by zero" << endl;
            return 0;
        }
        return a / b;
    }
    return 0;
}

double power(double base, int exp) {
    if (exp == 0) return 1;
    return base * power(base, exp - 1);
}

int total_calc() {
    static int count = 0;
    return count++;
}