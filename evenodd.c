#include<stdio.h> 
int main() {
 int input;
 int sum, eSum, oSum; 
printf("Enter an integer: \t"); 
scanf(" %d", &input);
 sum = eSum = oSum = 0; // initialization.
 while (input != -1) 
 { 
   sum += input;
   switch (input % 2) {
     case 0: eSum += input; break; 
     case 1: oSum += input; break;
   }
   printf("Enter an integer: \t"); 
   scanf(" %d", &input);
 }
 printf("sum = %d, oddSum = %d, evenSum = %d\n", sum, oSum, eSum); 
return 0;
}
