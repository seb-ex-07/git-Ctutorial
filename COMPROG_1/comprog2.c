/*SEBASTIAN DANIEL ALIPIO   BSCS-1C STUDENT QUIZ REPORTv2*/

/*This program accepts the student's name and 5 quiz score and total possible score, it calculates
each quiz's percent rating and gets the overall average rating, then it displays the result in a table
and outputs a txt file with the result*/

/*WELCOME TO ANOTHER COMPUTER PROGRAMMING EXERCISE!*/
/*this program will focus on input and output formatting, focusing on string formatting, numerical alignment, and the
presentation of calculated results.
*/

/*IPO
INPUT (from file .txt)
The program should read the following data from a text file named data.txt:
• The first line contains the student’s first name.
• The next five lines each contain two integers representing the total possible points and the
student’s score for each of five quizzes.

Computation:
• For each quiz, compute the quiz rating as a percentage using the formula:
rating=
score achieved/total points * 100
• Calculate the average rating for all five quizzes.
OUTPUT
The program should write the following report both to the screen and to a text file named
report.txt:
• The student’s name.
• A formatted table showing:
• Quiz number
• Score
• Total points
• Rating (percentage with two decimal places)
• The overall average rating of all five quizzes.
• The output should follow proper alignment and number formatting, as shown below.
*/




#include <stdio.h>



// START



// here is the function call for the computation for the rating

    float comprate (int scr, int qz)
    {
        return (float) scr / qz * 100;
    }

int main ()
{
    
    FILE * ifp;
    FILE * ofp;



    char stdname [100];
    int qz1, qz2, qz3, qz4, qz5, scr1, scr2, scr3, scr4, scr5; 

   

    printf ("STUDENT QUIZ REPORT\n\n");

    // here is the process on opning the .txt file

    ifp = fopen ("data.txt", "rt");

    // reading the contents of the file

    fscanf (ifp, "%s", stdname);
    fscanf (ifp, "%d %d", &qz1, &scr1);
    fscanf (ifp, "%d %d", &qz2, &scr2);
    fscanf (ifp, "%d %d", &qz3, &scr3);
    fscanf (ifp, "%d %d", &qz4, &scr4);
    fscanf (ifp, "%d %d", &qz5, &scr5);

    fclose (ifp);
    


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

    
    //creation of result.txt

    ofp = fopen ("report.txt", "wt");


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
    printf ("| %-5d | %5d | %5d | %5.2f%% |\n", 5, scr5, qz5, r5);
    printf ("----------------------------------\n");

    printf ("Quiz Average Rating: %.2f%%\n", average);



    fprintf (ofp, "QUIZ REPORT: %s\n", stdname);

    fprintf (ofp, "----------------------------------\n");
    fprintf (ofp, "| QUIZ# | SCORE | TOTAL | RATING |\n");
    fprintf (ofp, "---------------------------------\n");
    fprintf (ofp, "| %-5d | %5d | %5d | %5.2f%% |\n", 1, scr1, qz1, r1);
    fprintf (ofp, "| %-5d | %5d | %5d | %5.2f%% |\n", 2, scr2, qz2, r2);
    fprintf (ofp, "| %-5d | %5d | %5d | %5.2f%% |\n", 3, scr3, qz3, r3);
    fprintf (ofp, "| %-5d | %5d | %5d | %5.2f%% |\n", 4, scr4, qz4, r4);
    fprintf (ofp, "| %-5d | %5d | %5d | %5.2f%% |\n", 5, scr5, qz5, r5);
    fprintf (ofp, "----------------------------------\n");

    fprintf (ofp, "Quiz Average Rating: %.2f%%\n", average);

    fclose (ofp);

    return 0;
}