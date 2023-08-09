#include <stdio.h>

void vulnerableFunction(char *input) {
    char buffer[10];
    strcpy(buffer, input); // Potential buffer overflow vulnerability
}

int main() {
    int x = 10;
    int y = 20;
    printf("Sum: %d\n", x+y); // Unused variables x and y

    char *password = "123456"; // Potential hardcoded password vulnerability
    char userInput[20];
    printf("Enter password: ");
    scanf("%s", userInput);

    if (strcmp(userInput, password) == 0) {
        printf("Access granted!\n");
    } else {
        printf("Access denied!\n");
    }

    return 0;
}
