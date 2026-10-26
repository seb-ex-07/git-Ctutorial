#include <stdio.h>

/*WELCOME TO TRIANGLE TYPE IDENTIFIER 
this program will identify the type of triangle based on its side lengths 

equilateral = all sides are equal
isosceles = two sides are equal
scalene = no sides are equal
not a triangle = if the sum of any two sides is less than or equal to the third side */


int main() {
    
    int s1; 
    int s2;
    int s3;
    

    printf ("WELCOME TO TRIANGLE TYPE IDENTIFIER\n\n");
    printf ("Please enter 3 side lenghts of your triangle:\n");
    printf ("Enter side 1: ");
    scanf ("%d", &s1);
    printf ("Enter side 2: ");
    scanf ("%d", &s2);
    printf ("Enter side 3: ");
    scanf ("%d", &s3);


    // if else statements to identify the type of triangle
        if (s1 + s2 <= s3 || s2 + s3 <= s1 || s1 + s3 <= s2)
            {
                printf ("Not a valid triangle\n");
            }
        else if (s1 == s2 && s2 == s3)
            {
                printf ("Triangle type: Equilateral\n");
            }
        else if (s1 == s2 || s1 == s3 || s2 == s3)
            {
                printf ("Triangle type: Isosceles\n");
            }
        else if (s1 != s2 && s1 != s3 && s2 != s3)
            {
                printf ("Triangle type: Scalene\n");
            }

    orintf ("\n\n");
    printf ("Thank you for using TTI!\n");





    return 0;
}