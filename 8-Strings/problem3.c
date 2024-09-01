/* 
Write your own version of strcpy function from <string.h>
*/
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <math.h>
#include <time.h>
#include <stddef.h>
#include <stdlib.h>
    char *stcp(char st[], char cp[], int n) // n is the size of target string
    {
        int m = strlen(st);
        
            if (n <= m) // <= q ki '\0' ko bhi copy karne ki jagah honi chahiye
            {
                printf("space shortage in target string\n");
                return NULL;
            }
        for (int i = 0; i <= m; i++) // <= q ki null terminator ko bhi copy karna hai.
        {
            cp[i] = st[i];    // cp pehle aaayega q ki "cp" ko value assign karni hai
        }
            return cp;
    }
int main(){
    char st[] = "pundupundu";
    char cp[12];
    stcp(st, cp, sizeof(cp));
    printf("%s", cp);
    return 0;
}