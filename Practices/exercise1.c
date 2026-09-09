#include <stdio.h>

/* working grade calculatorrr lezzgoooo
simple tho, will improve it soon with UI/UX*/


int main ()
{ 


    int a;
    int b;
    int c;
    int d;
    int e;


    int sum;
    float result;

    printf ("INPUT SCORES: \n");
    scanf ( "%d %d %d %d %d ", &a, &b, &c, &d, &e);
    
    sum = a+b+c+d+e;
    result = (float)sum /5;

    printf ("TOTAL: %d\n", sum);
    printf ("AVERAGE: %.3f\n", result);

    



    return 0;
}  






