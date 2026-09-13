//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include <stdio.h>
int main()
{
    float len, wid, area, per;
    printf("enter the length:\n");
    scanf("%f",&len);
    printf("enter the width:\n");
    scanf("%f",&wid);
    area= len*wid;
    per= 2*(len+wid);
    printf("area of the given rectangle is %.2f\n",area);
    printf("the perimeetr of the rectangle is %.2f\n",per);
    return 0;
    
}
