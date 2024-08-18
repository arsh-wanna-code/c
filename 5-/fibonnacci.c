#include <stdio.h>

int main(){
    int first = 0, second = 1, next, n;
    printf("enter the desired number of terms in fibonacci series\n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            printf("%d\n", first);
            continue;
        }
        else if (i == 1)
        {
        printf("%d\n", second);
        continue;
        }
        else if(i == 47)
        {
        break;
        }
        next = first + second;
        first = second;
        second = next;
        printf("%d\n", next);
    }
    if (n > 47)
    {
    printf("\nwill print only till the 47th term...\ncuz fuck you think i am??\nA Quantum Computer!!!\n\n\n");
    }
    return 0;
}