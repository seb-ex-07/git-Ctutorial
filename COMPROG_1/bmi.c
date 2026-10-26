#include <stdio.h>
#include <math.h>

/*WELCOME TO BMI CALCULATOR
this program calculates teh body mass index based on a person's height 
in meter and weight in KG 

using the BMI formula = weight/(height*height)*/

int main ()
{

    char name [50];
    float kg;
    float ht;
    float BMI;



    printf ("BMI CALCULATOR\n\n");
    printf ("Please Enter your name: ");
    scanf ("%s", &name);
    printf ("Weight (kg): ");
    scanf ("%f", &kg);
    printf ("Height (m): ");
    scanf ("%f", &ht);


    BMI = kg / pow(ht, 2);
    printf ("%s's BMI: %.2f\n\n", name, BMI);

    if (BMI < 18.5)
        {
            printf ("Category: Underweight");
        }
    else if (BMI >= 18.5 && BMI < 25)
        {
            printf ("Category: Normal");
        }
    else if (BMI >=25 && BMI <= 29.9)
        {
            printf ("Category: Overweight");
        }
    else 
        {
            printf ("Category: Obese"); 
        }



    return 0;
}



