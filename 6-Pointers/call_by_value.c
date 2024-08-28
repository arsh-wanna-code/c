#include <stdio.h>

int sum(int a, int b)
{
    a = 6; // x ki value change karne ki naakam koshish
    return a+b ;
}
int main(){
    int x=1, y=6;
    printf("the SUM of x and y is %d\n", sum(x, y));
    printf("value of x is %d", x);
    return 0;
}
/*
to x aur y ki values ko hamne a aur b mein pass kiya...
1 aur 6 ki kya pass ki? value! in the sense ki wo bas ek copy hai rather than actual x and y.
to hua kya ki hamne 'value' pass kar ke fuction call kiya.
hence... CALL BY VALUE

p.s. sum() x ki passed value ko 1 se 6 bana sakta hai q ki a = 6 ka command mila hai
     but usey x ki copy assign hui hai, jiski value vo change kar raha hai...
     wo x ki actual value ko change nahi kar sakta.... 
     (RUN CODE FOR INSIGHT)
*/