#include <stdio.h> 
#include <stdbool.h>

int main () {
    
    //variable is a reusable container for a value
    // behaves as if it were the values it contains  

    int taon = 17; //integer variable declaration and initialization
    int year = 2026; 
    int item = 99;

    /* integer: i declared it as age 17 with a unique name "taon" 
    it's variable name*/

    printf ("I am %d years old today\n", taon); // print age variable "taon" 
    printf ("the year currently now is %d \n", year);
    printf ("thank you for getting %d squishy's today \n", item);


//  this is float (decimal)
    float gwa = 1.7;
    float price = 69.89; 
    float temp = 37.50;

    printf ("hoping makakuha ng %.2f na grade! \n ", gwa);
    printf ("the price for a suggestion is ₱%.2f, and no refunds! \n", price);
    printf ("the temperature outside is %.2f℃, it's hot! \n", temp);


// this is double (decimal but can store 12-15 decimal numbers)

    double pi = 3.1415159592539;
    double eulers = 2.71828;

    printf ("the value of pi is %.2lf \n", pi);
    printf ("this %lf is euler's no. in short %.2lf approximately \n", eulers, eulers);


// this can store one value (only one letter/number)
    char grade = 'A';
    char symbolpeso = 'P';
    char symboldollar = '$';
    char tempera = 'F';


    printf ("my grade is %c in programming \n", grade);
    printf ("the currency in my country is %c, while in America its %c \n", symbolpeso, symboldollar);
    printf ("in my countr, we use %c symbol for our temperature \n", tempera);
    


 /* array = strings; so technically an array is a 
 multi character in C, string for others */

    char name[] = "Sebastian";
    char food[] = "Siomai Rice";
    char email[] = "myemail123@mail.com";


  
    printf ("Hello!!! %s \n", name);
    printf ("my email is %s, send me an email soon! \n", email);
    printf ("My fav na pagkain is %s, it's verry yummy!\n", food);


// lastly, boolean (true or false)

    bool isOnline = true;
    bool isOffline = false;

    printf ("%d \n", isOnline);



// if else print out examplee using boolean

     

    if(isOnline){
        printf ("You are Online\n");
        printf ("Please turn on WIFI\n");

    }
    else {
        printf ("you are not Online\n");
        printf ("you can turn on wifi\n");


    }



    bool twoDigit;
    bool oneDigit;


    



    

}










