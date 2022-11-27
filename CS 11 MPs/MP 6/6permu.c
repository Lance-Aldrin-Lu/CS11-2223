#include <stdio.h>

int main()
{
    // Variable Initialization
    int n;
    int a, b;
    int denom, perm;

    // Get number of pairs
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        // Get value of number in the pair
        scanf("%d %d", &a, &b);
        denom = a - b;

        // Valid: Positive Factorial and Including 0!
        if(denom >= 0)
        {
            perm = 1;

            for(a; a > denom; a--)
            {
                perm = perm * a;
            }

            printf("%d\n", perm);
        }

        // Invalid: Negative Factorial
        else
        {
            printf("not valid\n");
        }
    
    }


    return 0;
}