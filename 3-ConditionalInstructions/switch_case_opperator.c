#include <stdio.h>

int main()
{
    int a;
    printf("enter a ");
    scanf("%d", &a);

    switch (a)
    {
    case 1:
        printf("you entered 1\n");
        break;
    case 2:
        printf("you entered 2\n");
        break;
    case 3:
        printf("you entered 3\n");
        break;
    case 4:
        printf("you entered 4\n");
        break;
    case 5:
        printf("you entered 5\n");
        break;
    // there's also a default case(not neccesary), as here...
    default:
        printf("nothing matched");

        // now the thing is, that all the cases after the selected case are executed, including the default case
        // unless break; is used.
        // (run the code with and without break; for further clarity)
        // also nos. arent necessary a, b, c, d, e, can be used instead of 1, 2, 3, 4, 5.
    }
    return 0;
}