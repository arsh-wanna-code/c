#include <stdio.h>

int main(){
    int arr[] = {78, 87, 93, 52};
    int *ptr = &arr[0];

    for(int i = 0; i<4; i++)
    {
        printf("value at index %d at address %p is %d\n", i, ptr, *ptr);
        ptr++;
    }
    return 0;
}