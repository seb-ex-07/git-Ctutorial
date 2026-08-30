#include <stdio.h>
#include <windows.h>


// kalapastangan snippet lyrics


int main(void)
{
    char *lyrics[] = {
        "Kalapastangan ang 'di Ka ibigin",
        "Kalokohan ang 'di Ka isipin",
        "Kung ang mundo ay biglang gugunawin",
        "IKAW ang una kong hahanapin..."
    };

    int lines = 4;

    for (int i = 0; i < lines; i++)
    {
        char *line = lyrics[i];

        for (int j = 0; line[j] != '\0'; j++)
        {
            printf("%c", line[j]);
            fflush(stdout);
            Sleep(100);
        }

        printf("\n");
        Sleep(1000);


        



        return 0; 
 

    }
}


    

    
    
    
    

