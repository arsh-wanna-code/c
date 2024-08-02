#include <stdio.h>

int main()
{
    // condition ? expression-if-true : expression-if-false
    //  Here "?" and ":" are called Ternary Operators eg.,

    int a = 234;
    int b = 23;
    a > b ? printf("a is grater") : printf("b is greater");
    // here a>b?  works as if (a>b) and : works as else...
    // ternaries are used to short hand the if-else clause.
    return 0;
}