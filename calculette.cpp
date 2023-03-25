#include <iostream>

// Déclaration des fonctions pour chaque opération
double addition(double a, double b);
double soustraction(double a, double b);
double multiplication(double a, double b);
double division(double a, double b);

int main() {
    int continuer;
    do {
        std::cout << "Choisissez une opération (+, -, *, /): " << std::endl;
        char op;
        std::cin >> op;
        std::cout << "Entrez deux nombres: " << std::endl;
        double a, b;
        std::cin >> a >> b;
        double result;
        switch (op) {
            case '+':
                result = addition(a, b);
                break;
            case '-':
                result = soustraction(a, b);
                break;
            case '*':
                result = multiplication(a, b);
                break;
            case '/':
                if (b == 0) {
                    std::cout << "Division par zéro" << std::endl;
                } else {
                    result = division(a, b);
                }
                break;
            default:
                std::cout << "Opération invalide" << std::endl;
                return 1;
        }
        std::cout << "Le résultat est: " << result << std::endl;
        std::cout << "Appuyez sur 1 pour continuer, ou sur 0 pour quitter..." << std::endl;
        std::cin >> continuer;
    } while (continuer == 1);
    return 0;
}

// Implémentation des fonctions pour chaque opération
double addition(double a, double b) {
    return a + b;
}

double soustraction(double a, double b) {
    return a - b;
}

double multiplication(double a, double b) {
    return a * b;
}

double division(double a, double b) {
    return a / b;
}
