#include <stdio.h>

int main() {
    int n, i = 1;
    printf("\nthis program counts from 1 till it reaches the number of choice.\n");
    printf("your number of choice?\n");
    scanf("%d", &n);
    do{
        printf("%d\n", i);
        i++;
    }while (i<=n);
     
    
    return 0;
}

