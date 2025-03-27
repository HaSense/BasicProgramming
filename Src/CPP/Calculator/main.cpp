#include <iostream>
#include "Calculator.h"
using namespace std;

int main() {
    Calculator calc;

    double a = 10, b = 5;

    cout << "덧셈: " << calc.Add(a, b) << endl;
    cout << "뺄셈: " << calc.Subtract(a, b) << endl;
    cout << "곱셈: " << calc.Multiply(a, b) << endl;
    
    try {
        cout << "나눗셈: " << calc.Divide(a, b) << endl;
    } catch (const exception& e) {
        cout << "오류: " << e.what() << endl;
    }

    return 0;
}
