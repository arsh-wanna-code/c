#include <stdio.h>

int main(){
    int n, i ;
    printf("this is a table generator\n");
    printf("enter number\n");
    scanf("%d", &n);
    for(i = 1; i<11;i++){
        printf("%d x %d = %d\n", n, i, n*i);
    }
    return 0;
}
