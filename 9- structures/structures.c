#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <math.h>
#include <time.h>
#include <stddef.h>
#include <stdlib.h>
    struct person
    {
        char name[32];
        float age;
        int exp_in_months;
    };
int main(){
    struct person arsh;
    {
        /*
        strcpy(arsh.name, "Arsh Tiwari");
        arsh.age = 17.6;
        arsh.exp_in_months = 2; 
        */

        // OR

        /*  
        struct person arsh = {"Arsh", 17.6, 2};  
        struct person nobody = {0};  All elements set to zero.
        */

        // OR

        printf("Enter Name : ");
        scanf("%s", &arsh.name);
        printf("Enter Age : ");
        scanf("%s", &arsh.age);
        printf("Enter Experience (in months) : ");
        scanf("%s", &arsh.exp_in_months);

    };
    return 0;
}