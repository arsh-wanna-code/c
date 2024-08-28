#include <stdio.h>


int summation(int a)
{
    if (a == 0)
    {return a;}
    else
    {return summation(a-1) + a;}
}
int main(){
    int a = 5;
    int result = summation(a);
    printf("%d", result);
    
    return 0;
}