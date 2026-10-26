#include <stdio.h>


/*WELCOME TO BONUS CACLULATOR!
This program calculates employee's bonus based on their years of service on the job*/

int main ()
{
    int serv;
    int post;
    int sal;
    int bonus;


    printf ("WELCOME TO BONUS CALC!\n");
    printf ("\n\n");
    printf ("1 --- Manager =20%% of salary\n2 --- Team Lead = 15%% of salary\n3 --- Staff = 10%% of salary\n\n");
    printf ("Please Enter the following: \n");
    printf ("Enter Years of Service: ");
    scanf ("%d", &serv);
    printf ("Enter Position: ");
    scanf ("%d", &post);
    printf ("Enter Salary: ");
    scanf ("%d", &sal);



    // calculation of bonuses.

    if (serv < 5)
        {
            printf ("Bonus: 0 ");
        }
    else if (serv >= 5)
        {
            if (post == 1)
                {
                    bonus = (sal * 20) / 100;
                    printf ("Bonus: %d (20%% of salary for Manager)\n", bonus);
                }
            else if (post == 2)
                {
                    bonus = (sal * 15) / 100;
                    printf ("Bonus: %d (15%% of salary for Team Lead)\n", bonus);
                }
            else
                {
                    bonus = (sal * 10) / 100;
                    printf ("Bonus: %d (10%% of salary for Staff)\n", bonus);
                }
        }
return 0;

}