#include <stdio.h>

/*WELCOME TO ELECTRICITY BILL CALCULATOR

this program will calculate a user's electricity bill 
based on their power consumption */

/*he rate structure is:
• Up to 100 kWh: $0.50 per kWh
• 101 to 300 kWh: $0.75 per kWh
• Above 300 kWh: $1.00 per kWh*/


int main ()
{
    char name [30];
    int consump;
    float reg = 0.50;
    float mid = 0.75;
    float high = 1.00;
    float Tbill;
    float ave;

    printf ("WELCOME TO ELECTRICITY BILL CALCULATOR\n\n");
    printf ("Enter Name: ");
    scanf ("%s", name);
    printf ("Enter power consumption (kwh): ");
    scanf ("%d", &consump);


    //identification of rate and calculation of bill

    if (consump <= 100 && consump >= 0)
        {
            Tbill = consump * reg;
            ave = reg;
        }
    else if (consump >= 101 && consump <= 300)
        {
            Tbill = consump * mid;
            ave = mid;
        }
    else 
        {
            Tbill = consump * high;
            ave = high;
        }
    
    printf ("\n\n");
    printf ("%s's bill at $%.2f/Kwh is: $%.2f", name, ave, Tbill);






    return 0;

}



