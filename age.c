#include<stdio.h>
int main()
{
  int age;
  char x;
    printf("are you an Indian answer in y or n:");
    scanf("%C", x);
       if (x == 'y' || x == 'i')
        {
           printf("so now give me your age:  ");
           scanf("%d", age);
           if (age >= 18)
            {
            printf("yes you can vote in india");
            }else
            {
            printf("NO, you can not vote in india");
            }
        }else
        {
            printf("jbbfjhb");
        }
        
return 0;
}