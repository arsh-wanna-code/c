// we alreary used break; in the switch-case program
//it warks by simply breaking/terminating the loop/queue far a sertain scenario.
// simply the presence of it shows that its gonna come to action when the compiler reaches it(as in the switch_case program).
// specified use of it, activates when the condition is reached. e.g,

#include <stdio.h>

int main(){
    for(int i = 0; i <= 1000; i++){
    printf("the value of i is %d\n", i);
    if (i == 23){
        break;
    }
    }
    return 0;
}