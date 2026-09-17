#include <stdio.h>

/*WELCOME TO BILLCALC!*/
/*Your bill calculator!*/

/*this program calculates the amount of your bill, tip percentage, 
and the amount of equal shares per person! */

/*IPO
INPUT: the amount of bill, tip percent, and number of people
PROCESS: calculate the total bill and shares between the number of people using
formulas
OUTPUT: displays the total bill and the share of each person equally*/

int main (void)
{

    int bill;
    int tipPercent;
    int numPpl;

    printf ("WELCOME TO BILLCALC!\n");
    printf ("Time to Calculate your orders!\n");
    printf ("Please enter the following: \n");
    printf ("BILL: ");
    scanf ("%d", &bill);
    printf ("TIP PERCENTAGE: ");
    scanf ("%d", &tipPercent);
    printf ("NUM. PEOPLE: ");
    scanf ("%d", &numPpl);


    float tip = bill * (tipPercent/100.0);
    float totalbill = bill + tip;
    float share = totalbill / numPpl;

    printf ("Total Bill: %.2f\n", totalbill);
    printf ("Sharing Amount: %.2f\n", share);
    printf ("\n");
    printf ("THANK YOU FOR USING BILLCALC!");

    




    return 0;

}