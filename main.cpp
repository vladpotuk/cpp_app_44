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

    std::cout << "������ ������ �������: ";
    std::cin >> base;

    std::cout << "������ �������� �������: ";
    std::cin >> exponent;

    calculatePower(base, exponent, result);

    std::cout << base << " � ������ " << exponent << " ������� " << result << std::endl;

    return 0;
}

