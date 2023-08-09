#include <iostream>
#include <cstring>

void vulnerableFunction(char *input) {
    char buffer[10];
    strcpy(buffer, input); // Potential buffer overflow vulnerability
}

int main() {
    int x = 10;
    int y = 20;
    std::cout << "Sum: " << x+y << std::endl; // Unused variables x and y

    char *password = "123456"; // Potential hardcoded password vulnerability
    char userInput[20];
    std::cout << "Enter password: ";
    std::cin >> userInput;

    if (strcmp(userInput, password) == 0) {
        std::cout << "Access granted!" << std::endl;
    } else {
        std::cout << "Access denied!" << std::endl;
    }

    return 0;
}
