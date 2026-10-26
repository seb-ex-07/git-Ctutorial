#include <stdio.h> 


/*WELCOME TO GYM MEMBERSHIP DISCOUNTER
this program calculates the membership price of a gym based 
on age and type of membership using nested if-else*/

int main ()
{

    int age;
    int memtyp;
    int disc;
    int rate1 = 20;
    int rate2 = 30;
    int total;
    int p1 = 100;
    int p2 = 500;
    int p3 = 1000;
    char m1 [] = "Basic";
    char m2 [] = "Premium";
    char m3 [] = "VIP";



    printf ("WELCOME TO GYM MEMBERSHIP\n");
    printf ("Avail Yours NOW!!!!\n");

    printf ("1 --- \"Basic\" Membership: $100\n2 --- \"Premium\" Membership: $500\n3 --- \"VIP\" Membership: $1000\n");

    printf ("\n");
    printf ("AGE: ");
    scanf ("%d", &age);
    printf ("Membership: ");
    scanf ("%d", &memtyp);




//calculation for discount

    if (age < 18)
        {
            if (memtyp == 1)
            {
                disc = p1 * rate1 / 100;
                total = p1 - disc;
                printf ("TOTAL PRICE (after discount): $%d\n", total);
                printf ("%d%% discount applied to %s membership", rate1, m1);
            }
            else if (memtyp == 2)
                {
                    disc = p2 * rate1 / 100;
                    total = p2 - disc;
                printf ("TOTAL PRICE (after discount): $%d\n", total);
                printf ("%d%% discount applied to %s membership", rate1, m2);
                }
            else 
                {
                    disc = p3 * rate1 / 100;
                    total = p3 - disc;
                    printf ("TOTAL PRICE (after discount): $%d\n", total);
                    printf ("%d%% discount applied to %s membership", rate1, m3);
                }
        }



    else if (age = 18 && age <= 60)
        {
            if (memtyp == 1)
                {
                    total = p1;
                    printf ("TOTAL PRICE (after discount): $%d\n", total);
                    printf ("no discount applied to %s membership", m1);
                }
            else if (memtyp == 2)
                {
                    total = p2;
                    printf ("TOTAL PRICE (after discount): $%d\n", total);
                    printf ("no discount applied to %s membership", m2);
                }
            else 
                {
                    total = p3;
                    printf ("TOTAL PRICE (after discount): $%d\n", total);
                    printf ("no discount applied to %s membership", m3);
                }
        }


    else 
        {
            if (memtyp == 1)
            {
                disc = p1 * rate2 / 100;
                total = p1 - disc;
                printf ("TOTAL PRICE (after discount): $%d\n", total);
                printf ("%d%% discount applied to %s membership", rate2, m1);
            }
            else if (memtyp == 2)
                {
                    disc = p2 * rate2 / 100;
                    total = p2 - disc;
                    printf ("TOTAL PRICE (after discount): $%d\n", total);
                    printf ("%d%% discount applied to %s membership", rate2, m2);
                }
            else 
                {
                    disc = p3 * rate2 / 100;
                    total = p3 - disc;
                    printf ("TOTAL PRICE (after discount): $%d\n", total);
                    printf ("%d%% discount applied to %s membership", rate2, m3);
                }
        }


    return 0;
}