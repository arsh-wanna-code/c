#include <stdio.h>
#include <string.h> 
    
int main(){
    char c;
    printf("enter character :\n");
    scanf("%s", &c);
    printf("the ASCII value of %c is %d", c, c);
    return 0;
}