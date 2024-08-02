#include <stdio.h>

int main(){
    int sum = 0, n;
    printf("enter number\n");
    scanf("%d", &n );
    for(int i = 1; i <= 10; i++)
    {
        sum += (n*i);
    }
    printf("sum of the table of 8 is %d\n", sum);
    return 0;
}