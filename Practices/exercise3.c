#include <stdio.h>

/*this code is exercise in conditionals
still going to imrove*/
/* seb io*/
int main (void)
{



    char C;
    printf ("Is it right or wrong?? (Y/N):\n");

    scanf (" %c", &C);

    if (C == 'Y' || C == 'y')

        {
            printf ("You are absolutely right!");
        }
    else if (C == 'n' || C == 'N')
    {
        printf ("YOU ARE ABSOLUTELY WRONG!");
    }

    else 
    {
        printf ("YES OR NO NGANI!!!");
    }


}

