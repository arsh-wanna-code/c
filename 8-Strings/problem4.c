/*
Write a program to encrypt a string by adding 1 to the ascii value of its characters.
Decrypt in the next problem...
*/

#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <math.h>
#include <time.h>
#include <stddef.h>
#include <stdlib.h>
void encrypt(char st[])
{
    int i = 0;
    while (st[i] != '\0')
    {
        st[i] = st[i] + 1;
        i++;
    }
}
int main()
{

    char st[100];
    printf("enter string :\n");
    fgets(st, 100, stdin);
    
    int a = strlen(st); // Don't move this line.... (CAUSES UNKNOWN NON-CURABLE FUCKTARD ERROR)
    if (a > 0 && st[a - 1] == '\n') {
        st[a - 1] = '\0'; 
    }

    encrypt(st);
    printf("%s", st);
    return 0;
}