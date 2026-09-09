#include <stdio.h>


int main (void)
{
    /*initialized variables for integer, character, and floating-point numbers */
    int integer;
    char character;
    float floating_point;


    /*assigned values to the variables as "33"*/

    integer = 33;
    character = 33;
    floating_point = 33;

    printf ("%d %c %f\n", integer, character, floating_point);

    /*assigned values to the variables as "A"*/

    integer = 'A';
    character = 'A';
    floating_point = 'A';   

    printf ("%d %c %f\n", integer, character, floating_point);


    /*assigned values to the variables as "33.33"*/

    integer = 33.33;
    character = 33.33;
    floating_point = 33.33;

    printf ("%d %c %f\n", integer, character, floating_point);

    integer = floating_point;
    floating_point = integer;  


    return 0;
}


