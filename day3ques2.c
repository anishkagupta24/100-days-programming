//Write a program to swap two numbers using a third variable.
#include <stdio.h>

int main() {
    int first, second, third;

    printf("Enter first number: ");
    scanf("%d", &first);
    printf("Enter second number: ");
    scanf("%d", &second);

    printf("\nBefore swapping:\n");
    printf("First number = %d\n", first);
    printf("Second number = %d\n", second);

    third = first;   
    first = second; 
    second = third;  
    printf("\nAfter swapping:\n");
    printf("First number = %d\n", first);
    printf("Second number = %d\n", second);

    return 0;
}

