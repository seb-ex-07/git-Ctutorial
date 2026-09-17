#include <stdio.h>
/* SECOND CONVERTER*/

/*Welcome to my second converter, where the function of this program is to convert 
any wanted seconds into hours, minutes, and seconds*/

/*this program highlights the use of modulo (%) and division (/)
for it to work, also I'll add some creativity rather than just some input and output for seconds*/

/*IPO

INPUT: any number of seconds
PROCESS: turn the seconds to hours, minutes, and seconds
OUTPUT: display the hours, minutes, and seconds
*/


int main (void)
{

    int totalSeconds;

    printf ("WELCOME TO SECOND CONVERTER!\n");
    printf ("Please enter the seconds you want to conveter: \n");
    scanf ("%d", &totalSeconds);
    
    int hrs = totalSeconds / 3600;
    int rmngSeconds = totalSeconds % 3600;
    int min = rmngSeconds / 60;
    int sec = rmngSeconds % 60;
    

    printf ("THE CONVERTED SECONDS: \n");
    printf ("HOURS: %d\n", hrs);
    printf ("MINUTES: %d\n", min);
    printf ("SECONDS: %d\n", sec);

    printf ("That is %d hours, %d minutes and %d seconds!\n", hrs, min, sec);


    return 0;

}