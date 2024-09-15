/* 
write a program to check whether a given character is present in a string or not.
*/

#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <math.h>
#include <time.h>
#include <stddef.h>
#include <stdlib.h>
    int prsnc_chckr(char st[], char a)
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
    if (prsnc_chckr(str, a) > 0)
    {
    printf("%c appears in the string\n", a);
    }
    else{
         printf("%c does not appear in the string\n", a);
    }
    return 0;
}