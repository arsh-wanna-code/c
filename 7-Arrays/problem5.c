/* 
Write a program containing functions which counts the number of positive integers in an array.
*/


#include <stdio.h>
    int count(int arr[], int n)
    {
        int no_of_positive_terms = 0;
        for (int i = 0; i < n; i++)
        {
        if(arr[i]>0)
        {
           no_of_positive_terms++;
        }
        }
        return no_of_positive_terms;
        
    }
int main(){
    int n;
    printf("Enter the count:\n");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter the terms: \n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("number of positive integers in the array is %d\n", count(arr, n));
    return 0;
}