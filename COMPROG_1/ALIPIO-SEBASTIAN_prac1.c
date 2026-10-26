#include <stdio.h>
//PRAC1
int main ()
{

    int name[100];
    int w8;


    printf ("Enter your name: ");
    scanf ("%s", &name);
    printf ("Enter your weight: ");
    scanf ("%d", &w8);

    printf ("\n\n");
    printf ("Hi, %s! Your weight is %d kilos.\n", name, w8);




    return 0;
}
