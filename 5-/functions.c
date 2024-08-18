#include <stdio.h>

    // function prototype 
// output_type fuction_name(input1, input2);
    int sum(int, int);

    // function definition
    int sum(int x, int y)
    {
        printf(" the sum is %d\n", x+y);
        return x+y;
    }

int main(){
    sum(2,3);
    return 0;
}