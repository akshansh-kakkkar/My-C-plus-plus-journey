#include <iostream>

int main(){
    int month;
    std::cout  << "Enter a month between 1-12 : ";
    std::cin >> month;

    switch (month)
    {
    case 1:
        std::cout << "It is January";
        break;
    
    default:
    std::cout << "It is February";
        break;
    }
    
}