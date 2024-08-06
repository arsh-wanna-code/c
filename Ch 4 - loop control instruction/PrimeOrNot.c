#include <stdio.h>

int main(){
    int p, i, rem ;
    printf("enter you number\n");
    scanf("%d", &p);
    if (p <= 1)
    {
        printf("number is not prime\n");
    }
    else{
    for(i = 2; i < p; i++)
    {
        if(p%i == 0)
        {printf("number is not prime");
        break;}
        else{
            printf("number is prime beetch!");
            break;
        }   
    }}
    return 0;
}