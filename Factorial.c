#include <stdio.h>
int main()
{
    int i, fact = 1, number = 5;
    // printf("Enter a number: ");
    // scanf("%d", &number);
    for (i = 1; i <= number; i++)
    {
        printf("%dx", i);
        fact = fact * i;
    }

    for (int j = 5; j<=1; j++)
    {
        printf("%dx", j);
        i = i-1;
    }

    printf("\b");

    printf("Factorial of %d is: %d", number, fact);

    return 0;
}