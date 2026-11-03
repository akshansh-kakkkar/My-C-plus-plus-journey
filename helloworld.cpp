#include <iostream>
#include <cmath>
int main()
{
    double a;
    double b;
    double c;
    std::cout << "Enter number A: ";
    std::cin >> a;
    std::cout << "Enter number B: ";
    std::cin >> b;
    c = std::sqrt(std::pow(a, 2) + std::pow(b, 2));
    std::cout << c;
    return 0;
}