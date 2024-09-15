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
    struct friend allen[20];
    {
        
        strcpy(allen[0].name, "Kushan Chaudhary");
        allen[0].age = 17.6;
        allen[0].goofy_rate_out_of_10 = 9; 

        strcpy(allen[1].name, "Roshan Singh");
        allen[1].age = 18.3;
        allen[1].goofy_rate_out_of_10 = 6; 

        strcpy(allen[2].name, "Jash Panchal");
        allen[2].age = 18.1;
        allen[2].goofy_rate_out_of_10 = 10; 
       
    };
    return 0;
}