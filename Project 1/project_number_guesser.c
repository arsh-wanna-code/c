#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0)); // seeding the random number generator to ensure that the sequence of
                    // random numbers is different each time you run the program.

    int randomnumber = (rand() % 100) + 1; // rand() function is used to generate a random no.
    int guessed;
    int number_of_guesses = 1; // this initialises to zero

    printf("\nguess the number!\n");
    do
    {
    
    scanf("%d", &guessed);

        if (guessed < randomnumber)
        {
            printf("higher number please!\n");
        }
        else if (guessed > randomnumber)
        {
            printf("lower number please!\n");
        }
    else
    {
        printf("that's correct!\n but the best part is...\nit only took you %d guesses", number_of_guesses);
    }
        number_of_guesses++; // while this keeps adding 1 till the loop executes i.e, untill you guessed it right.
    } while (guessed != randomnumber);


    return 0;
}