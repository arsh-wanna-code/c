  // using for loop

#include <stdio.h>

int main(){
    int sum = 0 ;
    for(int i = 1; i <= 10; i++)
        {
        sum +=i;
        }
    printf(" the sum = %d", sum);
    return 0; 
    }





/* 

// using do_while loop
#include <stdio.h>

int main(){
    int i = 1, sum = 0 ;
    do
    {
        sum +=i;
        i++;
    }
    while(i <= 10);
    printf(" the sum = %d", sum);
    return 0; 
}


// using while loop
#include <stdio.h>

int main(){
    int i = 1, sum = 0 ;
    while(i <= 10){
        sum +=i;
        i++;
    }
    printf(" the sum = %d", sum);
    return 0;
}
*/