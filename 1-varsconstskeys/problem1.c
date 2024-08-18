#include <stdio.h>

int main(){
    float a , b ;
    printf("the value of a is\n");
    scanf("%f", &a);

    printf("the value of b is\n");
    scanf("%f", &b);

    printf("sum = %f\n", a+b);
    printf("diference = %f\n", a-b);
    printf("product = %f\n", a*b);

if (b == 0)
{
    printf("quotient error: tried dividing by zero\n");
}
else 
{
    printf("the quotient is %f\n", a/b);  
}
    printf("Press Enter to exit...");
    getchar(); // To consume the newline character left in the buffer
    getchar(); // To wait for the user to press Enter
       return 0;
}