#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <math.h>
#include <time.h>
#include <stddef.h>
#include <stdlib.h>

     struct allen
    {
        char name[32];
        float age;
        int goofy_rate_out_of_10;
    };
     
    void friends_list(struct allen friend)
    {
    printf("Name: %s\n",friend.name );
    printf("age: %.1f\n", friend.age);
    printf("goofy meter: %d\n", friend.goofy_rate_out_of_10);
    };
    
int main(){
    struct allen kushan = {"kushan", 17.7, 8};
    friends_list(kushan);
    return 0;
}