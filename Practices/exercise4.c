#include <stdio.h>

/* exercise on loops, sheesh*/


int main (void)
{

    int i = 0;
    printf ("How many times do i have to repeat myself?\n");
    scanf ("%d", &i);
    
    for (int num = 0; num < i; num++)
        {
            printf ("I will be the \"GREATEST PROGRAMMER THAT HAS EVER LIVED!!!\"\n");
        }       

    return 0;

}