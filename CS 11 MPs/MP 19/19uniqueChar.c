#include <stdio.h>



int main()
{
    int p;

    scanf("%d\n", &p);



    for(int q = 0; q < p; q++)
    {
        // Variable Initialization
        char unique_char[256];
        char string[256];

        int frequency_table[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                                 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    

        fgets(string, sizeof(string), stdin);

        
        int index = 0;
    

        for(int i = 0; string[i] != '\0'; i++)
        {
            // Lowercase
            if(string[i] >= 'a' && string[i] <= 'z')
            {
                if(frequency_table[string[i] - 'a'] == 0)
                {
                    frequency_table[string[i] - 'a'] = 1;
                    unique_char[index] = string[i];
                    index++;
                }
            }

            // Uppercase
            if(string[i] >= 'A' && string[i] <= 'Z')
            {
                if(frequency_table[string[i] - 'A'] == 0)
                {
                    frequency_table[string[i] - 'A'] = 1;
                    unique_char[index] = string[i];
                    index++;
                }
            }
        }

        for(int j = 0; j < index; j++)
        {
            printf("%c", unique_char[j]);
        }

    }

    return 0;
}