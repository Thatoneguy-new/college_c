#include<stdio.h>
int main()
{
    int x;
    printf("Give me a number: ");
    scanf("%d", &x);
    
    if (x%2 == 0)
    {
       int n1=x*5;
       printf("YOU NO is %d and after multiplication it is %d", x, n1);
    }else
    {
        int n1=x*2;
        printf("your no is odd, and after multiplication with 2 it is %d", n1);
    }
    return 0;
    
    
}