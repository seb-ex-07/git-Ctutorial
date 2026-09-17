#include <stdio.h>
#include <math.h>

/*WELCOME TO PERIMETER AND AREA CALCULATOR!*/

/*this program is a perimeter and area calculator where user will input
integer values and the programm will identify the perimeter and areas*/

/*IPO
INPUT: values of the 3 sides
PROCES: use perimeter formula and area formula to calculate for it
OUTPUT: display the PERIMETER and AREA in meter and squaremeter
*/

int main (void)
{

    int a;
    int b;
    int c;


    printf ("WELCOME TO PERIMAREAcalc!\n");
    printf ("Please enter 3 values of the area: \n");
    scanf ("%d", &a);
    scanf ("%d", &b);
    scanf ("%d", &c);

    /*FORMULARS*/

    int perimeter = a+b+c;
    int s = perimeter / 2;
    int area = sqrt (s*(s-a)*(s-b)*(s-c));

    printf ("Perimeter: %dm\n", perimeter);
    printf ("Area: %dsqm\n", area);

    printf ("Thank you for using PERIMAREAcalc!");






    return 0;

}

