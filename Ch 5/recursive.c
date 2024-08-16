#include <stdio.h>

    int factorial(int);
    int factorial(int x)
    {
        if (x == 0)
        {
            return 1;
        }

        else
        {
            return factorial(x-1)*x;
        }
    }
int main(){
    int x = 6;
    printf("the factorial of %d is %d", x, factorial(x));
    return 0;
}