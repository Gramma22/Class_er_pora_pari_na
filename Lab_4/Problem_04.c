/*Write a C program to calculate x y where x is base (an integer) and y is exponent (an integer)
as follows. The program should have a while repetition statement.*/
#include <stdio.h>

int main()
{
    int base, exponent, result = 1;

    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);

    int count = 0;
    while (count < exponent)
    {
        result *= base;
        count++;
    }
    printf("%d^%d = %d\n", base, exponent, result);

    return 0;
}
