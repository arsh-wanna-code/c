#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <math.h>
#include <time.h>
#include <stddef.h>
#include <stdlib.h>
    int lengthOfLongestSubstring(char* s) {
    
    int len = strlen(s) ;
    int a = 0, b = 0;
    int prev[150];
    for (int i=0; i < 150; i++) {
        prev[i] = -1;
    }
    for (int i=0; i < len; i++) {
        if (prev[(int)s[i]] >= a) {
            a = prev[(int)s[i]] + 1;
        }

    
    prev[(int)s[i]] = i;
    
    if ((i + 1 - a) > b) {
        b = (i + 1 - a);
    }
    }
    return b;
}
int main(){
    char s[500];
    printf("\nenter string :\n");
    scanf("%s", s);
    
    printf("the length of longest substring without repetition is %d", lengthOfLongestSubstring(s));
    return 0;
}