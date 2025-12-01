#include<stdio.h>
int main()
{   int num1, num2, result, choice, temp;
         printf("hello, world this is a program similar to calculator");
    printf("so give me two numbers ");
    printf("so give me First no:");
     scanf("%d", &num1);
     printf("Now give me second no:");
    scanf("%d", &num2);
     printf("Now choose from following:");
    printf(" 1. addition");
     printf(" 2. substraction");
     printf(" 3. multiplication");
    printf(" 4. division");
     printf(" 5. modulus");
     printf(" 6. swap1");
    printf(" 7. swap2 ");
    scanf("%d", &choice);
      if (choice == 1)
      {
         result = num1 + num2;
         printf( "%d + %d = %d", num1, num2, result);
     }else if (choice == 6)
     {
         num1 = num1 + num2;
          num2 = num1 - num2;
        num1 = num1 - num2;
          printf("after swap num1 = %d and num2 = %d", num1, num2);
     }else if (choice == 7)
    {
       temp = num1;
       printf("temp=%d and num1=%d\n",temp, num1);
      num1 = num2;
      printf("num1=%d and num2=%d\n",num1, num1);
       num2 = temp;
       printf("num1 = %d and num2 = %d\n", num1, num2);
    }
    
 }


