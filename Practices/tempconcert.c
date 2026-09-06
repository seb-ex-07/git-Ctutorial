#include <stdio.h> 
/* TEMPERATURE CONVERTER */

/* this program is a temperature converter 
it will highlight the conversion process and convert the following temperatures: 
Celsius - Fahrenheit 
Fahrenheit - Celsius 
Celsius - Kelvin
Kelvin - Celsius
Fahrenheit - Kelvin
Kelvin - Fahrenheit*/

int main (void)
{


    float temp1;
    float temp2;
    int choice;
    float constant = 273.15;
    float constant2 = 9.0/5.0;
    char cont = 'Y';


    while (cont == 'Y' || cont == 'y')
    {
    printf ("Welcome to TempConvert!\n");
    printf ("Please select what you need to Convert: \n");
    printf ("Celsius to Fahrenheit: (1)\n");
    printf ("Fahrenheit to Celcius: (2)\n");
    printf ("Celsius to Kelvin: (3)\n");
    printf ("Kelvin to Celcius: (4)\n");
    printf ("Fahrenheit to Kelvin: (5)\n");
    printf ("Kelvin to Fahrenheit: (6)\n");
    scanf ("%d", &choice);



    if (choice == 1)
        {
        printf ("Celcius: ");
        scanf ("%f", &temp1);
        temp2 = (temp1 * 9/5 + 32);
        printf ("Fahhhrenheit: %.3f\n", temp2);
        }

        else if (choice == 2)
        {
            printf ("Fahhhrenheit: ");
            scanf ("%f", &temp1);
            temp2 = ((temp1 - 32) * (5.0/9.0) );
            printf ("Celcius: %.3f\n", temp2);
        }

        else if (choice == 3)
        {
            printf ("Celsius: ");
            scanf ("%f", &temp1);
            temp2 = temp1 + constant;
            printf ("Kelvin: %.3f\n", temp2);
        }

        else if (choice == 4)
        {
            printf ("Kelvin: ");
            scanf ("%f", &temp1);
            temp2 = temp1 - constant;
            printf ("celsius: %.3f\n", temp2);
        }

        else if (choice == 5)
        {
            printf ("Fahhrenheit: ");
            scanf ("%f", &temp1);
            temp2 = ((temp1 - 32) * constant2 + constant);
            printf ("Kelvin: %.3f\n", temp2);
        }

        else if (choice == 6)
        {
            printf ("Kelvin: ");
            scanf ("%f", &temp1);
            temp2 = ((temp1 - constant) * 9/5 + 32);
            printf ("FAHHHHHrenheit: %.3f\n", temp2);
        }

        else if (choice != 1 && choice != 2 && choice != 3 && choice != 4 && choice != 5 && choice != 6)
        {
            printf ("Invalid input, please try again\n");
            scanf ("%d", &choice);
        }
        else
        
        {
        
        }
        
            printf ("Convert another temp? (Y/N):\n");
            scanf (" %c", &cont);
    }    

            printf ("Thank you for using TempConvert!\n");
            printf ("PEACE OUT!\n");





    





}






