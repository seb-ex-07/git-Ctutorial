#include <stdio.h>

int main ()
{

    FILE * ifp;

    int N1, N2;

    ifp = fopen ("input.txt", "rt");
    fscanf (ifp, "%d %d", &N1, &N2);
    fclose (ifp);


    float pd1 = (N1 - N2);
    float pd2 = (N1 + N2) / (2.0);
    float pd3 = (pd1 / pd2) * 100;

    printf ("The values read from the file are %d and %d\n", N1, N2);
    printf ("\n");
    printf ("The percentage difference between the two nnumbers is %.4f\n", pd3);









    return 0;
}