#include <stdio.h>

int main(){
    int i[3] = {1, 2, 3};

    int *a = &i[0]; // a = 87994 
    a++; // address of i or value of a = 87998 

    /*
    these can be used depending on the type of data

    char a = 'A'; 
    char *b = &a; // a= 87994 
    b++; // now a = 87995 
    float i = 1.7; 
    float *a = &i; // now a = 87994 
    a++;
    */

    return 0;
}