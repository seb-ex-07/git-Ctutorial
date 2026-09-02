#include <stdio.h>


int main (void)
{

    int x;
    int y;
    int z;


    printf ("Enter 3 numbers:\n");
    scanf ("%i %i %i", &x, &y, &z);

    if (x > y && x > z)
        {
        printf ("%i is Bigger than %i and %i!", x, y, z);
        }
    else if (y > x && y > z)
        {
        printf ("%i is bigger than %i and %i!", y, x, z);
        }
    else if (z > x && z > y)
        {
            printf ("%i is bigger than %i and %i!", z, x, y);
        }
    else
        {
        printf ("All numbers are the same!");
        }


    return 0;

}







