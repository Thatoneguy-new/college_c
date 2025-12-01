#include <stdio.h>
#include <math.h>

int main()
{
    int choice;
    printf("Welcome to the Big Project\n");
    printf("Select an option:\n");
    printf("1. open calculator\n");
    printf("2. exit\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            // Open calculator
            {
                int calc_choice, a, b, result;
                printf("Calculator Options:\n");
                printf("1. Add\n");
                printf("2. Subtract\n");
                printf("3. Multiply\n");
                printf("4. Divide\n");
                printf("5. Modulus\n");
                scanf("%d", &calc_choice);
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);

                switch (calc_choice) {
                    case 1:
                        // Addition
                        printf("Result: %d\n", a + b);
                        break;
                    case 2:
                        // Subtraction
                        printf("Result: %d\n", a - b);
                        break;
                    case 3:
                        // Multiplication
                        printf("Result: %d\n", a * b);
                        break;
                    case 4:
                        // Division
                         result = a / b;
                        printf("Result: %d\n", result);
                        break;
                    case 5:
                        // Modulus
                         result = a % b;
                        printf("Result: %d\n", result);
                        break;
                    default:
                        printf("Invalid choice.\n");
                        break;
                }
            }
            break;
        case 2:
            // Exit
            break;
        default:
            printf("Invalid choice.\n");
            break;
    }
    printf("Exiting the Big Project. Goodbye!\n");
    printf("IF You don't like this project then \"Fuck you!\"\n");

    return 0;
}
