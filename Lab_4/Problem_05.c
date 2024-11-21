/*The factorial of a nonnegative integer n is written n! (pronounced “n factorial”) and is defined
as follows:
n! = n · (n – 1) · (n – 2) · ... · 1 (for values of n greater than 1)
and n! = 1 (for n = 0 or n = 1).
For example, 5! = 5 · 4 · 3 · 2 · 1, which is 120.
Write a program that reads a nonnegative integer, and computes and prints its factorial.*/
#include <stdio.h>

int main()
{
    int n, factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Factorial is not possible for negative numbers. Try again.\n");
    }
    else
    {
        int i = 1;
        while (i <= n)
        {
            factorial *= i;
            i++;
        }
        printf("Factorial of %d is %d\n", n, factorial);
    }

    return 0;
}
