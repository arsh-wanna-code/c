/* 
Repeat problem 6 for a custom input given by the user.
*/

#include <stdio.h>
    
int main(){
    int i=3, j=10;
    int arr[3][10];
    printf("enter any 3 numbers:\n");
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    for (int i = 0; i < 3; i++)
    {
       if (i == 0)
       {
        for (int j = 0; j < 10; j++)
        {
            arr[i][j] = a * (j+1);
        }
        
       }
       else if (i == 1)
       {
        for (int j = 0; j < 10; j++)
        {
            arr[i][j] = b * (j+1);
        }
        
       }
       else if (i == 2)
       {
        for (int j = 0; j < 10; j++)
        {
            arr[i][j] = c * (j+1);
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