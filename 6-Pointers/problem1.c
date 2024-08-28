/* 
Write a program having a variable ‘i’. Print the address of ‘i’. 
Pass this variable to a function and print its address.

Are these addresses same?   =>  Yes
Why?                        =>  Call by Reference
*/


#include <stdio.h>
int address(int *a)
{
    printf("function address = %p", a);
    return  5 ;
}
int main(){
    int x;
    int *a = &x;
    printf("enter the number of choice\n");
    scanf("%d", &x);
    printf("direct address = %p\n", a);
    address(a);
    return 0;
}