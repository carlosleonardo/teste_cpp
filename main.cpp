#include <iostream>
#include <string>
#include "mylib/my_atoi.h"

int main(int, char**)
{
    setlocale(LC_ALL, ".UTF-8"); // Set locale to the user's default environment
    std::cout << "Implementação de atoi em C++!\n";
    std::cout << "Digite um número: ";
    std::string input;
    std::cin >> input;
    int number = my_atoi::atoi(input);
    std::cout << "O número convertido é: " << number << std::endl;

    return 0;
}
