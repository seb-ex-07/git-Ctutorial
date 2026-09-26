#include <stdio.h>

/*WELCOME TO ANOTHER COMPUTER PROGRAMMING EXERCISE!*/
/*this program will focus on input and output formatting, focusing on string formatting, numerical alignment, and the
presentation of calculated results.
*/

/*IPO
INPUT
• Accept the student's first name.
• Accept five pairs of integer values representing the student's performance in five quizzes.
For each quiz, the first integer in the pair represents the total possible points for that quiz
(e.g., 45), and the second integer represents the score the student received (e.g., 12).
PROCESS
Computation:
• For each quiz, compute the quiz rating as a percentage using the formula:
rating=
score achieved/total points * 100
• Calculate the average rating for all five quizzes.
OUTPUT
• Display each pair of input values (score and total points) along with the corresponding rating.
• Display the overall average rating of the five quizzes.
• Ensure all outputs follow proper alignment and number formats as shown in the sample run.
This includes formatting percentages to two decimal places.
*/

/*This program accepts the student's name and 5 quiz score and total possible score, it calculates
each quiz's percent rating and gets the overall average rating, then it displays the result in a table*/

// START



// here is the function call for the computation for the rating

    float comprate (int scr, int qz)
    {
        return (float) scr / qz * 100;
    }

int main ()
{
    
    char stdname [100];
    int qz1, qz2, qz3, qz4, qz5, scr1, scr2, scr3, scr4, scr5; 

    // first, asking for the proper inputs needed

    printf ("STUDENT QUIZ REPORT\n\n");
    printf ("Input First name of student: ");
    scanf ("%s", stdname);
    printf ("\n");
    printf ("Please Input 5 pairs of integer values\nrepresenting the total number of points\nand score of %s's quizzes\n", stdname);
    printf ("Enter Quiz 1: ");
    scanf ("%d %d", &qz1, &scr1);
    printf ("Enter Quiz 2: ");
    scanf ("%d %d", &qz2, &scr2);
    printf ("Enter Quiz 3: ");
    scanf ("%d %d", &qz3, &scr3);
    printf ("Enter Quiz 4: ");
    scanf ("%d %d", &qz4, &scr4);
    printf ("Enter Quiz 5: ");
    scanf ("%d %d", &qz5, &scr5);


    // here is now the computation for computing each rating of individual quizzes 

    float r1, r2, r3, r4, r5;
    
    r1 = comprate (scr1, qz1);
    r2 = comprate (scr2, qz2);
    r3 = comprate (scr3, qz3);
    r4 = comprate (scr4, qz4);
    r5 = comprate (scr5, qz5);

    // here is the computation for the average 
    float average;

    average = (r1+r2+r3+r4+r5) / 5;

    printf ("\n\n");

    //table constructuon

    printf ("QUIZ REPORT: %s\n", stdname);

    printf ("----------------------------------\n");
    printf ("| QUIZ# | SCORE | TOTAL | RATING |\n");
    printf ("---------------------------------\n");
    printf ("| %-5d | %5d | %5d | %5.2f%% |\n", 1, scr1, qz1, r1);
    printf ("| %-5d | %5d | %5d | %5.2f%% |\n", 2, scr2, qz2, r2);
    printf ("| %-5d | %5d | %5d | %5.2f%% |\n", 3, scr3, qz3, r3);
    printf ("| %-5d | %5d | %5d | %5.2f%% |\n", 4, scr4, qz4, r4);
    printf ("| %-5d | %5d | %5d | %5.2f%% |\n", 5, scr5, qz4, r5);
    printf ("----------------------------------\n");

    printf ("Quiz Average Rating: %.2f%%\n", average);



    return 0;
}