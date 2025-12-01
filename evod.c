#include <stdio.h>
// wap count number of even and odd number in array and put even and odd values in different different 
// we can make programs like prime pos neg etc more
#define[size]

int main()
{
    int even=0, odd=0,a;
    printf("enter the number of array: ");
    scanf("%d" ,&a[size]);
    printf("enter the array element: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d" ,&a[i]);
    }
    for (int i = 0; i < size; i++)
    {
        if (a[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("Number of even elements: %d\n", even);
    printf("Number of odd elements: %d\n", odd);    
}