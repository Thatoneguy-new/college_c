#include<stdio.h>
int main()
{
    int n, hra, ta, da;
    printf("Plz enter your salary: ");
    scanf("%d", &n);

    if (n < 35000)
    {
      hra = n*0.03;
      ta = n*0.01;
      printf("your hra is %d and ta is %d", hra, ta);
    }else if (n > 35000 || n < 80000)
    {
        da = n*0.01;
        ta = n*0.02;
        hra = n*0.02;
        printf("hra = %d ta= %d da= %d", hra, ta, da);
    }else
    {
        hra= n*0.05;
        printf("your hra= %d, ta=%d, da= %d", hra, hra, hra);
    }
    return 0;
}