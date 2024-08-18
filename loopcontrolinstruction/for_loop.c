#include <stdio.h>

int main()
{
    int n;
    printf("enter n\n");
    scanf("%d", &n);
    /*  for (initialisation; test; increment or decrement)
          {
           code
           }
    */
    for (int i = 0; i < n; i++)
    {
        printf("the value of i is %d\n", i);
    }
    /*  order of execution:
        initializes (only once)
        test
        code
        increment
        test
        code
        increment
        .
        .
        . and so on...
    */
    return 0;
}