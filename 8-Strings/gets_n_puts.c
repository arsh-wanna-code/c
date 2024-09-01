#include <stdio.h>
    
int main(){
     char st[100];
     // gets(st); can be used but it's unsafe and should'nt be used in modern code rather use fgets.
     fgets(st, 100, stdin); // stdin  => standard input
     


   // printf("%s", st); can be used too.
    puts(st);  // points cursor on the next line. (execute the above printf() instead of puts() and you'd understand...)
    printf("hey"); // don't change this!
    return 0;
}