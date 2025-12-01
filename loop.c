#include<stdio.h>
int main()
{
    int x, y = 1;
    printf("How many times:");
    scanf("%d", &x);
     
    while (y <= x)
    {
        printf("meow\n");
        y++;
    }
    return 0;
    
}