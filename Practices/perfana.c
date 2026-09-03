#include <stdio.h>

/*PSEUDOCODE FOR THIS PROGRAM*/
/* This program will perform a student performance analyzer */

/*INPUTS: 
number of scores
student scores*/

/*PROCESS: 
calculate the average score of the student
determine passed or failed */

/*OUTPUTS: 
average score
passed or failed status*/

int main (void)
{

    int no_scores;
    float score;
    int count = 0;
    float Tscore = 0;
    float average = 0;

    printf ("Please enter the number of scores: ");
    scanf ("%d", &no_scores);

    count = no_scores;

        while (count > 0)
        { 
            printf ("please enter scores: ");
            scanf ("%f", &score);
            Tscore += score;
            count--;
        }
    
    average = Tscore / no_scores;


        if (average >= 75)
        {
            printf ("Your Average is %.2f, and you have passed!\n", average);

        }

        else 
        {
            printf ("Your Average is %.2f, and you have failed...\n", average);
        }



}

