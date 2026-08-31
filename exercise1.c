#include <stdio.h>


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
    scanf ( "%d %d %d %d %d", &a, &b, &c, &d, &e);
    
    sum = a+b+c+d+e;
    result = (float)sum /5;

    printf ("TOTAL: %d\n", sum);
    printf ("RESULT: %.2f\n", result);
    



    return 0;
}  











