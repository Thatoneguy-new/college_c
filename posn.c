#include<stdio.h>
int main()
{
    int x;
     printf("Enter any value \n");
      scanf("%d",&x);
    {
      printf((x>=0)?((x == 0)?"Zero":"positive"): "negative");
    }
      
    return 0;
}