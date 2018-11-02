#include <stdio.h>
#include <stdlib.h>

#define MAX_CHAR 50

int main()
{
    printf("Enter a string of text: ");

    char enteredText[MAX_CHAR];
    gets(enteredText);

    int a, e, i, o, u, c;

    a = 0;
    e = 0;
    i = 0;
    o = 0;
    u = 0;
    c = 0;

    for (c = 0; enteredText[c] != '\0';c++)
    {
        if (enteredText[c] == 'a' || enteredText[c] == 'A')
        {
            a++;
        }

            else if (enteredText[c] == 'e' || enteredText[c] =='E')
            {
                e++;
            }
            else if (enteredText[c] == 'i' || enteredText[c] == 'I')
            {
                i++;
            }
            else if (enteredText[c] == 'o' || enteredText[c] == 'O')
            {
                o++;
            }
            else if (enteredText[c] == 'u' || enteredText[c] == 'U')
            {
                u++;
            }


    }

    printf("Aa = %d\nEe = %d\nIi = %d\nOo = %d\nUu = %d", a, e, i, o, u);



    return 0;
}
