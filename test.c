#include <stdio.h>

int main()
{
    int a=125;
    for (int j = 5; j >= 1; j--)
    {
        printf("%dx", j);
    }
    // printf("f");
    printf("\b = %d", a);
    printf("\nSuccess");
}