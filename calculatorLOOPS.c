#include <stdio.h>

int main() {
    char op;
    float num1, num2, result;
    char choice;

    do {
        
        printf("\nEnter first number: ");
        scanf("%f", &num1);
        printf("Enter an operator (+, -, *, /): ");
        scanf(" %c", &op); 
        printf("Enter second number: ");
        scanf("%f", &num2);

        
        switch (op) {
            case '+':
                result = num1 + num2;
                printf("Result: %f\n", result);
                break;
            case '-':
                result = num1 - num2;
                printf("Result: %f\n", result);
                break;
            case '*':
                result = num1 * num2;
                printf("Result: %f\n", result);
                break;
            case '/':
                if (num2 != 0)
                    result = num1 / num2;
                else {
                    printf("Error: Division by zero!\n");
                    break;
                }
                printf("Result: %f\n", result);
                break;
            default:
                printf("Invalid operator\n");
        }

    
        printf("Do you want to continue? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    printf("THANK YOU");
    return 0;
}
