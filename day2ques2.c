//Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>
int main()
{
    float radius, area, circ, pi;
    printf("enter the radius:\n");
    scanf("%f",&radius);
    pi=3.14159;
    area=pi*radius*radius;
    circ=2*pi*radius;
    printf("the area of the circle is %.2f\n",area);
    printf("th circumfrence of the circle is %.2f\n",circ);
    
}
