/*In this problem, you will develop a program that can find how many times an integer number
can be divided by Two (2).*/
#include <stdio.h>
int main()
{
    int a, num = 0, count = 0;

    printf("Enter a integer: ");
    scanf("%d", &a);
    int original = a;
    while (num == 0)
    {
        num = a % 2;
        a /= 2;
        count++;
    }
    printf("The number %d can be divided by 2 exactly %d times.", original, count - 1);

    return 0;
}