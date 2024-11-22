/*Write a C program to calculate x y where x is base (an integer) and y is exponent (an integer)
as follows. The program should have a while repetition statement.*/
#include <stdio.h>

int main()
{
    int expo, result = 1, base;
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &expo);
    for (int count = 0; count < expo; count++)
    {
        result *= base;
        // printf("result = %d\n", result);
    }
    printf("%d^%d = %d\n", base, expo, result);
    return 0;
}
