#include <stdio.h>


int main ()
{ 


    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    int g;
    int h; 
    int i;
    int j;

    int sum;
    float result;

    printf ("INPUT SCORES: \n");
    scanf ( "%d %d %d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j);
    
    sum = a+b+c+d+e+f+g+h+i+j;
    result = (float)sum /10;

    printf ("TOTAL: %d\n", sum);
    printf ("AVERAGE: %.3f\n", result);

    
    



    return 0;
}  











