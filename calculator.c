#include <stdio.h>

int main() {
    int a, b;
    char c;

    for (int i = 1; ; i++) {
        printf("\nEnter the operation (+, -, *, /, or 'e' to exit): ");
        // Note the space before %c to consume any leftover newline characters
        scanf(" %c", &c); 

        if (c == 'e') {
            break;
        }

        printf("Enter two numbers: ");
        scanf("%d %d", &a, &b);

        if (c == '+') {
            printf("Result: %d\n", a + b);
        }
        else if (c == '-') {
            printf("Result: %d\n", a - b);
        }
        else if (c == '*') {
            printf("Result: %d\n", a * b);
        }
        else if (c == '/') {
            if (b != 0) {
                printf("Quotient: %d, Remainder: %d\n", a / b, a % b);
            } else {
                printf("Error: Division by zero.\n");
            }
        }
        else {
            printf("Wrong input.\n");
        }
    }

    return 0;
}