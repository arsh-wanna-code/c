/* 
Create an array of size 3 x 10 containing multiplication tables of the numbers 2,7 and 9 respectively.
*/

#include <stdio.h>
    
int main(){
    int i=3, j=10;
    int arr[3][10];
    for (int i = 0; i < 3; i++)
    {
       if (i == 0)
       {
        for (int j = 0; j < 10; j++)
        {
            arr[i][j] = 2 * (j+1);
        }
        
       }
       else if (i == 1)
       {
        for (int j = 0; j < 10; j++)
        {
            arr[i][j] = 7 * (j+1);
        }
        
       }
       else if (i == 2)
       {
        for (int j = 0; j < 10; j++)
        {
            arr[i][j] = 9 * (j+1);
        }
        
       }
       else
       {
        printf("error!!!");
       }

    }
    for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 10; j++)
                {
                    printf("%d ", arr[i][j]);
                }
                printf("\n");
        }
    return 0;
}