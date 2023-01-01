#include <stdio.h>

int main()
{
    // Initialize Variable Bank
    int n, a, b, c, upper_lim, lower_lim;

    // Get Number of Sets from User
    scanf("%d", &n);

    // Iterate to Get Specific Set of Numbers and Evaluation
    for(int i = 0; i < n; i++)
    {
        // Get Set of Numbers
        scanf("%d %d %d", &a, &b, &c);

        upper_lim = a + b;
        lower_lim = a - b;

        // Evaluate if "c" is in between of a and b (inclusive)
        if (((lower_lim <= c) && (c <= upper_lim)))
        {
            printf("Yes\n");
        }

        else
        {
            printf("No\n");
        }

    }

    return 0;
}