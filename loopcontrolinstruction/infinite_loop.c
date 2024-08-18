#include <stdio.h>

int main()
{
    int i = 0;
    while (2 < 10) //2is always less than 10 i.e, 2<10 is true at all times...
    {
        printf("the value of i is %d\n", i);
        i++; //i++ which can be written as i = i + 1, exists and so keeps incrementing i while 2<10 i.e, always
    }
    return 0;
}