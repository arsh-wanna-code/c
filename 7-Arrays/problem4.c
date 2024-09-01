/*
Write a program containing a function which reverses the array passed to it.
*/

#include <stdio.h>
#include <string.h>
int reverse(int arr[], int length)
{
    int start = 0, temp, end = (length - 1);
    while (start < end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}
int main()
{
    int array[100];
    char input[5];
    int num, length = 0;

    printf("enter a list of numbers (enter 'stop' to stop)\n");

    while (1)
        {
            scanf("%s", &input);

            if (strcmp(input, "stop") == 0)
            {
                break;
            }
            if (sscanf(input, "%d", &num) == 1)
            {
                array[length] = num;
                length++;
            }
            else
            {
                printf("enter a valid integer or \"stop\" \n");
            }
        }

    printf("original array: ");

        for (int i = 0; i < length; i++)
        {
            printf(" %d", array[i]);
        }

    printf("\n");

    reverse(array, length);

    printf("reversed array: ");

        for (int i = 0; i < length; i++)
        {
            printf(" %d", array[i]);
        }
   
    return 0;
}