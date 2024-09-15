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
    struct friend mitra[8];
    for (int i = 0; i < 8; i++)
    {
        mitra[i].age = 20*i+19;
    }
    
    struct friend *ptr;
    ptr = mitra;
    int c = 0;
    while(1)
    {
        if(c>=8)
        {
            break;
        }
    printf("%f\n", ptr->age);
    ptr++;
    c++;
    }
    return 0;
}