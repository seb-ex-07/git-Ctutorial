#include <stdio.h>
//PRAC2
int main ()
{

    float fah; 
    float cel;
    float kel;
    float cont = 5.0 / 9.0;
    float cont2 = 273.15;

    printf ("Enter temperature in Fahrenheit: ");
    scanf ("%f", &fah);


    cel = (fah -32) * cont;
    kel = cel + cont2; 
    printf ("\n");

    printf ("%-5s   | %-5s", "Celsius", "Kelvin");
    printf ("\n--------------------\n");
    printf ("%-9.2f | 0%-5.2f", cel,kel);












    return 0;
}