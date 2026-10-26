#include <stdio.h>

int main ()
{

    FILE * ifp;
    FILE * ofp;

    int N1, N2;

    ifp = fopen ("input.txt", "rt");
    fscanf (ifp, "%d %d", &N1, &N2);
    fclose (ifp);


    float PD = (float)(N1 - N2) / (N1 + N2 / 2.0) * 100;

    printf ("The values read from the file are %d and %d\n", N1, N2);
    printf ("\n");
    printf ("The percentage difference between the two numbers is %.4f\n", PD);









    return 0;
}