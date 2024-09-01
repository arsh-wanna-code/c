/* 
Write your own version of strlen function from <string.h>
*/

// for user input :


#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <math.h>
#include <time.h>
#include <stddef.h>
#include <stdlib.h>
    
int main(){
    int n, count = 0;
    char st[100];
    while(1)
    {
        scanf("%s", st);
        if(strcmp(st, "stop") == 0||strcmp(st, "STOP") == 0)
        {
            break;
        }
        count++;
    }
    printf("string length is %d", count);
    return 0;
}