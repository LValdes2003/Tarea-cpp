//
// Created by Oblitionmaster on 15/10/2023.
//
#include <iostream>

int g = 20;

int suma(int a, int b) {
    return a + b;
}

int main() {
    std::cout << "Valor de g antes de la función suma: " << g << std::endl;
    std::cout << "La suma es: " << suma(5, g) << std::endl;
    std::cout << "Valor de g después de la función suma: " << g << std::endl;

    return 0;
}
