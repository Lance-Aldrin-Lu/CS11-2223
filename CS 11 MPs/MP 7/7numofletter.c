#include <stdio.h>

int main()
{
    // Variable Initialization
    int n;

    // Get number of strings
    scanf("%d\n", &n);

    for(int i = 0; i < n; i++)
    {
        // Refreshed array
        char string[100];
        int counter = 0;

        // Get string
        fgets(string, sizeof(string), stdin);

        for(int j = 5; string[j] != '\0'; j++)
        {
            // If the current letter is the same to the letter at start
            if(string[j] == string[1])
            {
                counter += 1;
            }

            else
            {
                continue;
            }
        }

        // Output
        printf("%d\n", counter);

    }

    return 0;
}