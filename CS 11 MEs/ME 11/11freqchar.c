#include <stdio.h>

int main()
{
    // Variable Initialization
    int n;
	char letter;

    // Get number of strings
    scanf("%d\n", &n);

    for(int i = 0; i < n; i++)
    {
        char phrase[250];
        int table_freq[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
							0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

        // Get string
        fgets(phrase, sizeof(phrase), stdin);

        // Add 1 where first ele in arr is "a" and last ele in arr is "z"
        for(int j = 0; phrase[j] != '\0'; j++)
        {
            table_freq[phrase[j] - 97]++;
        }

        // Start at freq 1, if freq 1 matches freq of letter, print letter.
        for(int k = 1; k < 27; k++)
        {
            for(int m = 0; m < 26; m++)
            {
                if(table_freq[m] == k)
                {
					letter = 97 + m;
                    printf("%c", letter);
                }
            }
        }

        printf("\n");

    }

    return 0;
}