#include <stdio.h>


/*WELCOME TO VOWEL COUNTER

this program asks the user to enter an integer N, representing the number of
characters to be entered. Then, prompt the user to enter N characters, one at a time. Count
and display the total number of vowels (a, e, i, o, u) entered. Both uppercase and lowercase
vowels should be counted.
*/



int main(void)
{
    int n;
    int coun = 0;
    int vowels = 0;
    char ch;

    printf("Enter the number of characters: ");

    scanf("%d", &n);

    while (coun < n)
    {
        printf("Enter character #%d: ", coun + 1);

        scanf(" %c", &ch);

        if (ch == 'a' || ch == 'e' || ch == 'i' ||
            ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' ||
            ch == 'O' || ch == 'U')
        {
            vowels++;
        }

        coun++;
    }

    printf("\nNumber of vowels: %d\n", vowels);

    return 0;
}








