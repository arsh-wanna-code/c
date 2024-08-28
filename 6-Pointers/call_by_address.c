#include <stdio.h>

int sum(int *a, int *b)
{
    *a = 6; // dekhte hai ye koshish kaam aati hai ki nahi!
    return (*a + *b) ;
}
int main(){
    int x=1, y=6;
    printf("the SUM of a and b is %d\n", sum(&x, &y));
    printf("the value of x is %d", x);
    return 0;
}
/*
yaha x aur y ke 'ADDRESS' ko a aur b mein pass kar rahein hain...
address pass kar ke direct variable ko 'REFER' kiya hai and then function call kiya hence, call by REFERENCE.
isse a aur b ko x aur y ki copy ki jagah wo khud he assign ho jate hain.
hence *a = 6 wala command x ki actual value ko modify kar pata hai.
(RUN CODE FOR INSIGHT)
*/