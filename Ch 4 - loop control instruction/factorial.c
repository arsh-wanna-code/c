#include <stdio.h>

int main(){
    int n, product = 1;
    printf("enter number for factorial\n");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
      product *= i;
    }
    printf("%d! = %d", n, product);
    return 0;
}