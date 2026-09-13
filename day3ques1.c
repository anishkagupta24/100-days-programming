//Write a program to convert temperature from Celsius to Fahrenheit.
#include <stdio.h>
int main()
{
    float celcius, farenheit;
    printf("enter the temp in celsius\n");
    scanf("%f",&celcius);
    farenheit=(celcius*9/5)+32;
    printf("the converted temperature is %.3f\n",farenheit);
    return 0;
}
