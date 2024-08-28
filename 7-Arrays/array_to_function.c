#include <stdio.h>

void printArray(int *i, int n); 
// or 
// void printArray(int i[], int n);
int main(){
    int arr[] = {2, 3, 4, 5, 6};
    int i;
    printf("enter number of elements of array\n");
    scanf("%d", &i);
    printArray(&arr[0], i);
    return 0;
}
void printArray (int arr[], int i)
{
    for (int i = 0; i < 5; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
}