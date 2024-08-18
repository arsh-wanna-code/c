#include <stdio.h>

int main(){
    int n;
    printf(" enter no.");
    scanf("%d", &n);

    for(int i = n ; i ; i--) // why simply 'i' as the test works is that, bcz no value is assigned to it, it only thrives to be true
                             // and not false(0), hence making a test similar to that of (i != 0), 
                             // so it decrements till 1 and the moment it reaches zero it terminates the loop just before printing
                               
        printf(" the walue of i is %d\n", i);
    return 0;
}
