#include<stdio.h>

int main()
{{{{{{
    int num,f,l
    printf("Enter a number: ");
    scanf("%d", &num);

    l = num % 10;  

    f = num;
    while (f >= 10) {
        f = f / 10;
    }

    printf("First digit: %d\n", f);
    printf("Last digit: %d\n", l);

    return 0;
}}}}}}