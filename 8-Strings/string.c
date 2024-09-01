#include <stdio.h>
    
int main(){
    // char st[] = {'a', 'b', 'c', '\0'};     \0 (null character) acts as a terminator, signaling end of string to the compiler.
    // or 
    // char st[] = "abc";                     \0 is not needed here as compiler understands it automatically.
    char st[5];
    scanf("%s", st);
    // this wont take any blankspaces... but gets() will.
    printf("%s", st);
    // this wont print any blankspaces... but puts() will.
    return 0;
}

/* 
string is basically an character array.
all that happens to array can happen to a string.
*/