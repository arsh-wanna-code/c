#include <stdio.h>

float ftc(float t1)
{
    return (t1 - 32) * (5.0 / 9.0);
}

float ctf(float t2)
{
    return ((9.0 / 5.0) * t2) + 32;
}

int main()
{
    int conversion;
    float temp, result;
    printf("select option :\n1) Celsius to Farhenite\n2) Farhenite to Celsius\n\n");
    scanf("%d", &conversion);

    if (conversion == 1)
    {
        printf("enter temperature\n");
        scanf("%f", &temp);
        result = ctf(temp);
        printf("%.1fF", result);
    }
    else if (conversion == 2)
    {
        printf("enter temperature\n");
        scanf("%f", &temp);
        result = ftc(temp);
        printf("%.1f°C", result);
    }
    else
    {
        printf("error 505!");
    }
    return 0;
}