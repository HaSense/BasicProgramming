#include "Calculator.h"
#include <stdexcept>

double Calculator::Add(double a, double b) {
    return a + b;
}

double Calculator::Subtract(double a, double b) {
    return a - b;
}

double Calculator::Multiply(double a, double b) {
    return a * b;
}

double Calculator::Divide(double a, double b) {
    if (b == 0) {
        throw std::runtime_error("0으로 나눌 수 없습니다.");
    }
    return a / b;
}
