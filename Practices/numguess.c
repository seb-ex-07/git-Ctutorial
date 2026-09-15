#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*NUMBER GUESSING GAME*/

/*A program that chooses a random number, and will make you guess
what the computer has chosen*/

/*IPO
Input: the number that the user guess
Process: the computer will choose a number and makes the user guess
until it is right
Output: "too low" "too high" "Correct! Congratulations"

*/
int main (void)
{

    srand(time(NULL));
    
    int guess;
    char cont = 'Y';


    while (cont == 'Y' || cont == 'y')
    {
        int randomNum = rand() % 100 + 1;
        printf ("WELCOME TO THE NUMBER GUESSING GAME!\n");
        printf ("choose a number between 1-100\n");
        scanf ("%d", &guess);

        while (guess != randomNum)
        {
            if (guess > randomNum)
            {
                printf ("Too high, guess again\n");
            }
            else if (guess < randomNum)
            {
                printf ("Too low, try again\n");
            }

            scanf ("%d", &guess);
           

        }

    printf ("YOU ARE CORRECT!\n");
    printf ("The number was %d\n", randomNum);
    printf ("another round? (Y/N)?: ");
    scanf(" %c", &cont);

    printf ("Thank you  for playing Guess the number!\n");
    

    
    }

    return 0;

}