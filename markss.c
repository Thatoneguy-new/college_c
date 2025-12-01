#include<stdio.h>
int main ()
{
    int x;
    printf("What marks did you get: ");
    scanf("%d", &x);
    if (x >= 80 && x < 100)
    {
        printf("a+");
    }else if (x >= 70 && x < 80)
    {
        printf("b");
    }else if (x >= 60 && x < 70)
    {
        printf("b-");
    }else if (x >= 50 && x < 60)
    {
        printf("c");
    }else
    {
        printf("YOU failed or got too much marks for good hand writting");
    }
    
return 0;
}