#include <stdio.h>
#define PI 3.14159
#define maxsize 100

int main(){
    
    int size, i;
    printf("ENTER the size of array: ");
    scanf("%d", &size);
    int array[size];
    printf("enter the elements of array: ");
    for (i=0; i < size; i++)
    {
        scanf("%d",&array[i]);
    }
    printf("array elements are: ");
    for ( i = 0; i < size; i++)
    {
        printf("%d\t",array[i]);
    }
    return 0;
    
}