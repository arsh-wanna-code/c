#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <math.h>
#include <time.h>
#include <stddef.h>
#include <stdlib.h>
    struct friend
     {
        char name[32];
        float age;
        int goofy_rate_out_of_10;
    };


int main(){
    struct friend f1 = {"poppa", 24.5, 5};
    struct friend *ptr;
    ptr = &f1;
    printf("%f\n", (*ptr).age);
    // OR
    printf("%f", ptr->age);
    return 0;
}