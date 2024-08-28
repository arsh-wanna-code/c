#include <stdio.h>
#include <stdlib.h>

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a, b;
    int *x = &a;
    int *y = &b;
    printf("enter numbers for swapping\n");
    printf("enter a\n");
    scanf("%d", &a);
    printf("enter b\n");
    scanf("%d", &b);
    system("cls");
    printf("before swapping\na = %d and b = %d\n\n", a, b);
    swap(&a, &b);
    printf("after swapping\na = %d and b = %d", a, b);
    return 0;
}
