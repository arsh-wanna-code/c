#include <stdio.h>
    int print(int arr[], int n)
    {
        for (int i = 0; i < n; i++)
        {
             printf("%d ", arr[i]);
        }

    }
    void reverse(int arr[], int n)
    {
        int temp;
        for (int i = 0; i < (n/2); i++)
        {
            temp = arr[i];
            arr[i] = arr[n-i-1];
            arr[n-i-1] = temp;
        }
        
    }
int main(){
    int n;
    printf("Enter the count:\n");
    scanf("%d", &n);
    
    int array[n];
    printf("Enter the terms: \n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
        
    printf("array before: ");
    print(array, n);
    printf("\n");
    reverse(array, n);
    printf("array after: ");
    print(array, n);
    
    return 0;
}