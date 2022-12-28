#include <stdio.h>

int main(void)
{
    char star = '*', dash = '-', Options;

    // Printing the Message about Program and Task
    printf("\n");
    for(int i=1; i<=10; i++)
    {
        printf("%c", star);
    }
    printf(" This is a Minor Project Using C language in MCA ");
    for(int i=1; i<=10; i++)
    {
        printf("%c", star);
    }

    // Printing Message for Choose Options To execute
    printf("\n\n");
    printf("\t\t Choose any Option for a Specific Task:\n");
    printf("\t\t\t 1. Print Hello World\n");
    printf("\t\t\t 2. Print User Name\n");
    printf("\t\t\t 3. Print Friends Name\n");
    printf("\t\t\t 4. Print Internet Name\n");
    printf("\t\t\t 5. Print Laptop Name\n");

    printf("Please Enter an Option to Run that program: ");
    scanf("%c", &Options);

    switch (Options)
    {
    case '1':
        
        break;
    
    default:
        break;
    }
}


