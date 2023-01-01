#include <stdio.h>

// Prototypes
void freq_of_char(char str[1000], int frequency[26]);



int main()
{
    int p;

    scanf("%d\n", &p);

    for(int q = 0; q < p; q++)
    {
        // Variable Initialization

        int frequency_table[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                                 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

        char string[256];

        fgets(string, sizeof(string), stdin);



        freq_of_char(string, frequency_table);

        // See if letter is marked 1 or not
        for(int i = 0; string[i] != '\0'; i++)
        {
            if(string[i] >= 'a' && string[i] <= 'z')
            {
                if(frequency_table[string[i] - 'a'] == 1)
                {
                    printf("%c", string[i]);
                }
            }

            if(string[i] >= 'A' && string[i] <= 'Z')
            {
                if(frequency_table[string[i] - 'A'] == 1)
                {
                    printf("%c", string[i]);
                }
            }
        }

        printf("\n");

    }

    return 0;
}




void freq_of_char(char str[1000], int frequency[26])
{

    for(int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
        {
            frequency[str[i] - 'a']++;
        }

        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            frequency[str[i] - 'A']++;
        }
	}

}

