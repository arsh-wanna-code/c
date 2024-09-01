#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <math.h>
#include <time.h>
#include <stddef.h>
#include <stdlib.h>
    
    char *sliced(char st[], int m, int n)
    {
        int i = 0;
        char *ptr1 = &st[m-1];  // m-1 bcz my input will be 1 but the location would be that of st[0].
        char *ptr2 = &st[n];    // no need for n-1 bcz st[n] = '\0', so anyways it will print only till n-1

        st = ptr1;
        st[n] = '\0';
        return st;
    }
int main(){
    char str[23] = "arshwannacode";
    int m, n;
    printf("%s is you string give limits to slice\n", str);
    scanf("%d %d", &m, &n);
    printf("%s", sliced(str, m, n) );
    return 0;
}