/* 
Write a program to count the occurrence of a given character in a string.
*/

#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <math.h>
#include <time.h>
#include <stddef.h>
#include <stdlib.h>
    int counter(char st[], char a)
    {
        int len = strlen(st);
        int count = 0;
        for (int i = 0; i < len; i++)
        {
            if (st[i] == a)
            {
                count++;
            }

        }
        return count;
        
    }
int main(){
    char str[500];
    char a;
    printf("enter string :\n");
    fgets(str, 500, stdin);
    printf("enter character to search: \n");
    scanf("%c", &a);
    printf("%c appears %d times in the string\n", a, counter(str, a));
    return 0;
}           