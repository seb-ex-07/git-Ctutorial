#include <stdio.h>
/*WELCOME TO GRAVITY CALCULATOR!*/

/*This program turns input earth weight in kg into weight of it in mars, moon ,and 
in jupiter, all in kg!*/

/*IPO
INPUT: earth weight in kg
PROCESS: use formulas for conversion
OUTPUT: display the weights in the gravity of mars, moon, and jupiter*/

int main (void)
{

    float earthW;


    printf ("WELCOME TO GRAVITY CALC!\n");
    printf ("Please enter the weight in Earth (in kg): ");
    scanf ("%f", &earthW);

    float marsW = earthW * 0.38;
    float moonW = earthW * 0.165;
    float jupiterW = earthW * 2.34;

    printf ("Weight in Mars: %.2fkg\n", marsW);
    printf ("Weight in Moon: %.2fkg\n", moonW);
    printf ("Weight in Jupiter: %.2fkg\n", jupiterW);
    printf ("\n");
    printf ("THANK YOU FOR USING GRAVCALC!");



    return 0;
}
