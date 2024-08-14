#include <stdio.h>
#include <math.h>

void area();
void volume();
void number();
int pi = 3.14159265359;
int shape1;
int shape2;
int main()
{
    int calci;

    printf("\n\n\nwhat do you want to calculate??\n1. number\n2. area\n3. volume\n\n\n");
    scanf("%d", &calci);
    
    switch (calci)
    {
    case 1:
        number();
        break;

    case 2:
        area();
        break;

    case 3:
        volume();
        break;

    default:
        printf("error bole HADIPPA!!!!\n\n\n");
        break;
    }
    return 0;
}
void number()
{
    float a,b;
    char o;
    printf("\n\n");
    scanf("%f %c %f", &a, &o, &b);
    if (o == '+')
    {
        printf("= %.3f\n\n\n", a + b);
    }
    else if (o == '-')
    {
        printf("= %.3f\n\n\n", a - b);
    }
    else if (o == '*')
    {
        printf("= %.3f\n\n\n", a * b);
    }
    else if (o == '/')
    {
        printf("= %.3f\n\n\n", a / b);
    }
    else
    {
        printf("error bole HADIPPA!!!!");
    }   
}
void area()
{

    printf("enter shape number!\n1.square  2.circle\n3.triangle  4.rectangle\n\n\n");
    scanf("%d", &shape1);

    switch (shape1)
    {
    case 1:
    {
        float a;
        printf("enter side length\n");
        scanf("%f", &a);
        printf("area = %.2fsq. units\n\n\n", pow(a, 2));
        break;
    }
    case 2:
    {
        float r;
        printf("enter radius\n");
        scanf("%f", &r);
        printf("area = %.2fsq. units\n\n\n", pi * pow(r, 2));
        break;
    }
    case 3:
    {
        float l, h;
        printf("enter length and height\n");
        scanf("%f %f", &l, &h);
        printf("area = %.2fsq. units\n\n\n", (0.5) * l * h);
        break;
    }
    case 4:
    {
        float l, b;
        printf("enter legth and breadth\n");
        scanf("%f %f", &l, &b);
        printf("area = %.2fsq. units\n\n\n", l * b);
        break;
    }

    default:
    {
        printf("error bole HADIPPA!!!!");
        break;
    }
    }
}
void volume()
{
    printf("enter shape number!\n1.cube 2.cuboid\n3.sphere  4.hemisphere\n5.cylinder  6.cone\n\n\n");
    scanf("%d", &shape2);

    switch (shape2)
    {
    case 1:
    {
        float a;
        printf("enter side length\n");
        scanf("%f", &a);
        printf("volume = %.2fcbc. units\n\n\n", pow(a, 3));
        break;
    }

    case 2:
    {
        float l, b, h;
        printf("enter length, breadth and height\n");
        scanf("%f %f %f", &l, &b, &h);
        printf("volume = %.2fcbc. units\n\n\n", l * b * h);
        break;
    }

    case 3:
    {
        float r;
        printf("enter radius\n");
        scanf("%f", &r);
        printf("volume = %.2fcbc. units\n\n\n", (4.0) / (3.0) * pi * pow(r, 3));
        break;
    }

    case 4:
    {
        float r;
        printf("enter radius\n");
        scanf("%f", &r);
        printf("volume = %.2fcbc. units\n\n\n", (2.0) / (3.0) * pi * pow(r, 3));
        break;
    }

    case 5:
    {
        float r, h;
        printf("enter radius and height\n");
        scanf("%f %f", &r, &h);
        printf("volume = %.2fcbc. units\n\n\n", pi * pow(r, 2) * h);
        break;
    }

    case 6:
    {
        float r, h;
        printf("enter radius and height\n");
        scanf("%f %f", &r, &h);
        printf("volume = %.2fcbc. units\n\n\n", (1.0) / (3.0) * pi * pow(r, 2) * h);
        break;
    }

    default:
    {
        printf("error bole HADIPPA!!!!\n\n\n");
        break;
    }
    }
}