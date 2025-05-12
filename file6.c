#include<stdio.h>
int main()
{
    float celsius,Fahrenheit;
    printf("celsius value:");
    scanf("%f",&celsius);
    Fahrenheit=celsius*9/5+32;
    printf("temperatore of Fahrenheit %.2f.\n",Fahrenheit );
    return 0;
}