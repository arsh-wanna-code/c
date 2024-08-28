#include <stdio.h>

int main()
{
    int a = 987;
    int *j = &a;
    printf("%d\n", a);
    printf("%p\n", *j);
    printf("%p", *(&a));
    /*
    int * gives pointer to integer
    float * gives pointer to float
    char * gives pointer to character
    */
    return 0;
}