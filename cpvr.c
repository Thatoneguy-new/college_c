#include <stdio.h>
#include <math.h>

int main() {
    int num, first, last, digits = 0, temp, pow10, middle, swapped;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    last = temp % 10;

    while (temp >= 10) {
        temp /= 10;
        digits++;
    }
    first = temp;
    pow10 = (int)pow(10, digits);

    middle = (num % pow10) / 10;

    swapped = last * pow10 + middle * 10 + first;

    printf("The Original number is: %d\n", num);
    printf("After swapping first and last digit: %d\n", swapped);

    return 0;
}