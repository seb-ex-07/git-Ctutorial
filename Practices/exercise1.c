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
    int k;

    int sum;
    float result;

    printf ("INPUT SCORES: \n");
    scanf ( "%d %d %d %d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j, &k);
    
    sum = a+b+c+d+e+f+g+h+i+j+k;
    result = (float)sum /11;

    printf ("TOTAL: %d\n", sum);
    printf ("AVERAGE: %.3f\n", result);

    



    return 0;
}  











