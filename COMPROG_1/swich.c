#include <stdio.h>

/*WELCOME TO THE SWITCH ALPHABET LOVE SONG
this program asks the user to enter one letter from A to Z(lowercase or
uppercase) and displays the message associated with that letter based on the lyrics of
the alphabet love song. */



int main ()
{

    char x;

    printf ("WELCOME TO ALPHABET LOVE SONG!\n");
    printf ("Please Enter a Letter (A-Z/a-z): ");
    scanf ("%c", &x);
    printf ("\n\n");

    switch (x)
    {
        case 'A':
        case 'a':
        printf("A - you're adorable");
        break;

        case 'B':
        case 'b':
        printf("B - you're so beautiful");
        break;

        case 'C':
        case 'c':
        printf("C - you're a cutie full of charms");
        break;

        case 'D':
        case 'd':
        printf("D - you're a darling and");
        break;

        case 'E':
        case 'e':
        printf("E - you're exciting and");
        break;

        case 'F':
        case 'f':
        printf("F - you're a feather in my arms");
        break;

        case 'G':
        case 'g':
        printf("G - you look good to me");
        break;

        case 'H':
        case 'h':
        printf("H - you're so heavenly");
        break;

        case 'I':
        case 'i':
        printf("I - you're the one I idolize");
        break;

        case 'J':
        case 'j':
        printf("J - we're like Jack and Jill");
        break;

        case 'K':
        case 'k':
        printf("K - you're so kissable");
        break;

        case 'L':
        case 'l':
        printf("L - is the love light in your eyes");
        break;

        case 'M':
        case 'm':
        case 'N':
        case 'n':
        case 'O':
        case 'o':
        case 'P':
        case 'p':
        printf("M N O P - I could go on all day");
        break;

        case 'Q':
        case 'q':
        case 'R':
        case 'r':
        case 'S':
        case 's':
        case 'T':
        case 't':
        printf("Q R S T - Alphabetically speaking, you're OK");
        break;

        case 'U':
        case 'u':
        printf("U - made my life complete");
        break;

        case 'V':
        case 'v':
        printf ("V - means you're very sweet");

        case 'w':
        case 'W':
        case 'x':
        case 'X':
        case 'y':
        case 'Y':
        case 'z':
        case 'Z':
        printf ("W X Y Z - means you're everything to me, my sweet lovable, kissable baby");


    }


    return 0;
}
