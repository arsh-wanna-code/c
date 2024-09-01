#include <stdio.h>

int main(){
    int arr2d[3][3] =
    {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int arr3d[2][3][4] =
    {
        {
            {1,2,3,4},
            {5,6,7,8},
            {9,10,11,12}            
        },
        {
            {13, 14, 15, 16},
            {17, 18, 19, 20},
            {21, 22, 23, 24}
        }
    };
    int choice;
    printf("choose: \n1) 2d \n2) 3d\n");
    scanf("%d", &choice);
    
    if(choice == 1)
    {
    for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
                {
                    printf("value at [%d][%d] is %d\n", i, j, arr2d[i][j]);
                }
        }
    
        
    }
    else if(choice == 2)
    {
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                for (int k = 0; k < 4; k++)
                {
                    printf("value at [%d][%d][%d] is %d\n", i, j, k, arr3d[i][j][k]);
                }
            }
        }
        
    }
    else{printf("error!");}
     
    return 0;
}