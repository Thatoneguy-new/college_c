#include <stdio.h>

int main()
{
    int temp;
    printf("what the temperature today(℃): ");
    scanf("%d", &temp);

    if (temp < -20)
    {
        printf("Too cold to be alive.");
    }else if (temp < -5)
    {
        printf("still too cold.");
    }else if (-5 < temp && temp < 10)
    {
        printf("Still need a heavy blanket");
    }else if (15 > temp && temp > 10)
    {
        printf("get a good blancket");
    }else if (15 < temp && temp < 25)
    {
        printf("sleep with fan onn and blanket");
    }else if (35 > temp && temp > 25)
    {
        printf("cooler is enough");
    }else if (60> temp && temp > 35)
    {
        printf("use air conditioner");
        
    }else
    {
        printf("Too hot to be alive.");
    }
    
    return 0;
}