#include <stdio.h>

int change(int a);

int change(int a){    // this function looks like it is supposed to change the value of the input.
    a = 77;           // though it doesn't do it, as seen after running the code.
    return a;
}
int main(){
    int b = 22;
    change(b);        // it happenys bcz the function doesn't seed the 'var b' but rather a copy of it
    printf("%d", b);  // and hence the printf still print the pre-stated value of 'b'.
    return 0;
}