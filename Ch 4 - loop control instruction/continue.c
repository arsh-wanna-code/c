#include <stdio.h>

int main(){
    for(int i = 0 ; i < 15; i++){
       
        if(i == 5){
        continue; // skips the iteration
        }
         printf("the value of i is %d\n", i);
    }
    return 0;
}