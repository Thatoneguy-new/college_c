// write a program to check if number is negative positive or zero
#include<stdio.h>
int main(){

    int x;
    printf("Give me a number");
    scanf("%d", &x);
    if (x >= 0)
    {
        if (x > 0)
        {
            printf("Your number is positive");
        }else
        {
            printf("your number is zero");
        }
        
    }else
    {
        printf("Your number is negative");
    }
    
return 0;
}