#include <stdio.h>

/* BASIC CALC PROG

highlights basic arithmetic operations 
Addtion (+)
Subtraction(-)
Multiplication(*)
Division(/)*/

int main (void)
{

    int x;
    int y;
    float h;
    float k;
    int dc;
    char desi = 'Y';


    while (desi == 'Y' || desi == 'y')
    {
    printf ("Welcome to BasCalc!\n");
    printf ("Please Choose your operation\n");
    printf ("Addition: (1)\n");
    printf ("Subtraction: (2)\n");
    printf ("Multiplication: (3)\n");
    printf ("Division: (4)\n");
    scanf ("%i", &dc);

    if (dc == 1) // Addition
    {
        printf ("Please enter 2 numbers: \n");
        scanf ("%d %d", &x, &y);
        printf ("The sum of %d and %d is: %d\n", x, y, x + y);
    }
    else if (dc == 2) //Subtraction this
    {
        printf ("Please enter 2 numbers: \n");
        scanf ("%d %d", &x, &y);
        printf ("The Difference of %d and %d is: %d\n", x, y, x-y);
    }
    else if (dc == 3)
    {
        printf ("Please enter 2 numbers: \n");
        scanf ("%d %d" , &x, &y);
        printf ("The Product of %d and %d is: %d\n", x, y, x*y);
    }
    else if (dc == 4)
    {
        printf ("Please enter 2 numbers: \n");
        scanf ("%d %d", &x, &y);
        printf ("The Quotient of %d and %d is: %.3f\n", x, y, (float)x/(float)y);
    }
    else if (dc != 1 && dc != 2 && dc != 3 && dc != 4 && dc > 4)
    {
        printf ("Invalid input, please try again\n");
        scanf ("%d", &dc);

    }
    else 
    {

    }
        printf ("Do you want to continue? (Y/N):\n");
        scanf (" %c", &desi);

        printf ("Thank you for using BasCalc!\n");







    }



}

   





