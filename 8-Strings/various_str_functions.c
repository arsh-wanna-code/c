#include <stdio.h>
#include <string.h>

int main(){
    int a;
    char st1[] = "arshwannacode";
    char cpy[100] = "pookie ;)";
    char st2[100] = "github";

    printf("string length is %d\n", strlen(st1)); //strlen tells the length of the string ie, the no. of chars in it.


    strcpy(cpy, st1);  // strcpy coppies st1 in cpy, but contents of cpy are totally overwritten. 
    printf("%s\n", cpy);


    strcat(st1, st2); // strcat concatenate (or join) the two strings. st1 will now also contain st2
    printf("%s\n", st1);


    a = strcmp("cutie", "patootie"); // strcmp compares two strings by their ASCII* value and gives +ve or -ve integer value accordingly.
                                     // if the strings are same, 0 is given as your output.
                                     // if the second string comes later, value is -ve.(as here)
                                     // if the second string comes sooner, value is +ve.
    printf("%d", a);

    return 0;
}
//  note*: ASCII is in raw language just Alphabetical order.