//Write a program to swap two numbers without using a third variable.

#include <stdio.h>

int main() 
{
    int a, b;

    printf("Enter two integers:\n");
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);

    printf("\nBefore swapping: a = %d, b = %d\n", a, b);



    printf("After swapping: a = %d, b = %d\n", b, a);

    return 0;
}
