#include<stdio.h>
int main()
{
    int num1, num2, choice, result;
    printf("What is the first number:");
    scanf("%d", &num1);
    printf("What is second number:");
    scanf("%d", &num2);
    printf("choose one of the following");
    printf("1.  sum");
    printf("2.  substraction");
    printf("Chose your option 1 or 2");
    scanf("%d", &choice);
    if (choice == 1)
    {
        result = num1 + num2;
        printf("%d + %d = %d", num1, num2, result);
    }else
    {
        printf("i do not know");
    }
    
    return 0;
}