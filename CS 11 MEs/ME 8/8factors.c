#include <stdio.h>

int main()
{
    // Variable Initliazation
    int n;
    int num;

    // Get the number of numbers that will be asked
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        // Get number that will be factored
        scanf("%d", &num);

        for(int j = 1; j < num + 1; j++)
        {
            int mod;

            // j is a factor of num, if num is divisible by j
            mod = num % j;

            // When last number, print it AND enter a new line
            if(j == num)
            {
                printf("%d\n", j);
            }

            else if(mod == 0)
            {
                printf("%d ", j);
            }

            else
            {
                continue;
            }
        }

    }

    return 0;
}