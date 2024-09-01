/* 
Write a program to create an array of 10 integers and store multiplication table of a number in it.
*/
#include <stdio.h>

int main()
{
        int a;
        printf("enter number of choice:\n");
        scanf("%d", &a);
    int arr [10];
    for (int i = 0; i < 10; i++)
    {
        arr[i] = a*(i+1);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d x %d = %d\n",a, i+1, arr[i]);
    }
    return 0;
}