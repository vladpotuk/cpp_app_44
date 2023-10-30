#include "Func.h"

void calculatePower(double base, int exponent, double& result) {
    result = 1.0;  

    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
}

int main() {
    system("chcp 1251");
    system("cls");
    double base, result;
    int exponent;

    std::cout << "¬вед≥ть основу степен€: ";
    std::cin >> base;

    std::cout << "¬вед≥ть показник степен€: ";
    std::cin >> exponent;

    calculatePower(base, exponent, result);

    std::cout << base << " в ступен≥ " << exponent << " дор≥внюЇ " << result << std::endl;

    return 0;
}

