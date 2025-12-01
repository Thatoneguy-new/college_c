#include <stdio.h>
#include <math.h>
// wap to swap first and last digit of a number
int main()
{
    int num, first, last, digit, swap=0, temp;
    //printf("Enter a number: ");
    //scanf("%d", &num);
    num=12345;
    last = num % 10;
    temp = num;
    digit = 0;
    while (temp > 0)
    {
        temp /= 10;
        digit++;
    }
    int count=digit;
    first = num / (int)pow(10, digit - 1);
    printf("first number is %d\n", first);
    printf("last number is %d\n", last);
    int p=(int) round(pow(10, count-1));
    swap=num; 
    swap*=p;
    swap+=num%p;
    swap-=last;
    swap+=first;
    swap-=first*p;
    swap+=last*p;
    printf("The Original number is: %d\n", num);
    printf("After swapping first and last digit: %d\n", swap);
    return 0;
}