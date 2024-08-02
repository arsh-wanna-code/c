#include <stdio.h>

int main(){
    int i = 5;
    printf("the value of i is %d\n", i);
    i = i + 5;
    printf("the value of i is %d\n", i);
    //i++; prints first then increments (post increment opperator)
    //++i; increments first then prints (pre increment opperator)
    printf("the value of i is %d\n", i++);
    printf("the value of i is %d\n", ++i);
    return 0;
}
/*output:
the value of i is 5
the value of i is 10
the value of i is 10
(the opperator prints 10 and increments to 11. however,the increment isn't seen in the output as it occurs after print)
the value of i is 12 
(the operator has previously increment 10 to 11 after printing 10. further it increments again from 11 to 12 before printing)
*/