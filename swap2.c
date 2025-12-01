#include<stdio.h>
// wap to swap 2 digits
void swap(int a, int b)
{
    printf("Enter two numbers\n");
    scanf("%d %d", &a, &b);
    printf("before swapping the value of a: %d and b: %d\n", a, b);
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("the value of a: %d and b: %d\n", a, b);
}
int main()
{
    int x, y;
    swap(x, y);
    printf("the value of x: %d and y: %d after swapping\n", x, y);
    return 0;
}