#include<stdio.h>
int main(){{
    char x[70];
    int num1, num2, result, choice, temp, y = 1;
    printf("hello, what is your first name: ");
    scanf("%s", x);
    printf("hello %s, welcome to this everthing program \n", x);
    printf("Here I make everything i have learnt till now\n");
    printf("I request please dont write any word or character where you should write an integer or a loop will start and this program will get fucked\n");
    printf("so now for calculator enter your first no: ");
    scanf("%d", &num1);
    printf("Now give me second no: ");
    scanf("%d", &num2);
    printf("now %s, choose one from the following:\n", x);
    printf("1. addition\n");
    printf("2. substraction\n");
    printf("3. Multiplication\n");
    printf("4. division\n");
    printf("5. modulus\n");
    printf("6. swap no\n");
    printf("7. repeat my name as much as 1st no\n");
    do
    {
        printf("Make a choice between 1 to 8\n");
    scanf("%d", &choice);
    if (choice < 1 || choice > 8)
    {
        printf("told you to select a no between 1 to 8 now do it again\n");
    }
    
    } while (choice < 1 || choice > 8);
    
    
    if (choice == 1)
    {
        result = num1 + num2;
        printf(" addition of %d and %d = %d\n", num1, num2, result);
    }else if (choice == 2)
    {
        result = num1 - num2;
        printf(" substraction of %d and %d = %d\n", num1, num2, result);
    }else if (choice == 3)
    {
        result = num1 * num2;
        printf(" multiplication of %d and %d = %d\n", num1, num2, result);
    }else if (choice == 4)
    {
        result = num1 / num2;
        printf(" division of %d and %d = %d\n", num1, num2, result);
    }else if (choice == 5)
    {
        result = num1 % num2;
        printf(" modulus of %d and %d = %d\n", num1, num2, result);
    }else if (choice == 6)
    {
        temp = num1;
        num1 = num2;
        num2 = temp;
        printf("after swap num1= %d and num2= %d", num1, num2);
    }else if (choice == 7) 
    {
        temp = 1;
        while (temp <= num1) {
            printf("%s\n", x);
            temp++;
        }

    
    }else if (choice == 8)
    {
       char c;
    int age;
    printf("Enter character 'I' or 'i' if you are Indian");
    scanf("%c",&c);
    char c;
    int age;
    printf("Enter character 'I' or 'i' if you are Indian");
    scanf("%c",&c);
    if(c=='I'||c=='i')
     {
        printf("Great!Enter yor age ");
        scanf("%d",&age);
        if(age>=18)
       printf("The age is %d and you are eligible for vote",age);
         else 
       printf("The age is %d and you are not eligible for vote",age);
     }else 
       printf("sorry!! You are not indian");   
        
    }else
    {
        printf("NO you are not eligible");
    }
}