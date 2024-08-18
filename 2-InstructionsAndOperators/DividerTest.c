#include <stdio.h>

int main()
{
    int a, b, rem;

printf("check if a is divisible by b\n");

    printf("enter a\n");
    scanf("%d", &a);
    printf("enter b\n");
    scanf("%d", &b);

    if (a == 0)
    {
        printf("error: tried dividing by zero\n");
    }
    else if (b == 0)
    {
        printf("error: tried dividing by zero\n");
    }
    else
    {
        rem = a % b;
        if (rem == 0)
        {
            printf("number is divisible\n");
        }
        else
        {
            printf("number is not divisible");
        }
    }

    return 0;
}