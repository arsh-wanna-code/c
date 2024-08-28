#include <stdio.h>
void multiplier(int *a, int *b)
{
    *a = *a * *b;
}
int main()
{
    int a, b;
    printf("enter number and multiplier\n");
    scanf("%d %d", &a, &b);
    multiplier(&a, &b);
    printf("the answer = %d", a);
    return 0;
}