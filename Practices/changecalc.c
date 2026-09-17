#include <stdio.h>

/*WELCOME TO CHANGE CALCULATOR!*/

/*this program is made for getting the exact change and what bills to receive 
and the number of them*/

/*IPO
INPUT: amount to be paid and the amount that the user paid
PROCESS: will use a set of division (/)
and modulo (%) for this program to determine the change
and the numbers of the bills to be displayed
OUTPUT: the change and the number of bills that sums up to the change*/

int main (void)
{


    int oaCost;
    int bayad;

    printf ("WELCOME TO CHANGE CALCULATOR!\n");
    printf ("Please enter the amount Payable: ");
    scanf ("%d", &oaCost);
    printf ("Please enter the amount Paid: ");
    scanf ("%d", &bayad);


    int change = bayad - oaCost;
    int fchange = change;

    int b1000 = change / 1000;
    change = change % 1000;

    int b500 = change / 500;
    change = change % 500;

    int b200 = change / 200;
    change = change % 200;

    int b100 = change / 100;
    change = change % 100;

    int b50 = change / 50;
    change = change %50;

    int c20 = change / 20; 
    change = change % 20;

    int c10 = change / 10;
    change = change % 10;

    int c5 = change / 5;
    change = change % 5;

    int c1 = change / 1;


    printf ("Your Change is: %d\n", fchange);
    printf ("\n");
    printf ("1000: %d\n", b1000);
    printf ("500: %d\n", b500);
    printf ("200: %d\n", b200);
    printf ("100: %d\n", b100);
    printf ("50: %d\n", b50);
    printf ("20: %d\n", c20);
    printf ("10: %d\n", c10);
    printf ("5: %d\n", c5);
    printf ("1: %d\n", c1);

    printf ("\n");
    printf ("THANKYOU FOR USING CHANGE CALC!!!\n");






    return 0;


}
