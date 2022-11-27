#include <stdio.h>
#include <string.h>

int main()
{
    int a;

    scanf("%d\n", &a);

    for(int j = 0; j < a; j++)
    {
        // Variable Initialization
        char phrase[200];
        int len_of_string;
        int stop_at;
        int first_occur;
        char letter_identifier;

        // Get phrase
        fgets(phrase, sizeof(phrase), stdin);

        // Get the last letter
        // 1. Get length of string
        len_of_string = strlen(phrase);

        // 2. Identify it
        letter_identifier = phrase[len_of_string - 2];

        // 0 1 2 3 4 5 6 7 8 9  10
        // a b c d e f g h   a '\0'
        // strlen() of above is 11

        stop_at = len_of_string - 3;
        first_occur = 0;

        for(int i = 0; i < stop_at; i++)
        {
            if((phrase[i] == letter_identifier) && (first_occur == 0))
            {
                first_occur++;
                continue;
            }

            else
            {
                printf("%c", phrase[i]);
            }
        }

        printf("\n");

    }


    return 0;
}