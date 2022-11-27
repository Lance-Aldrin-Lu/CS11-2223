#include <stdio.h>

int main()
{
    // Initialize Variable Bank
    int n, a, b, c;

    // Get Number of Sets from User
    scanf("%d", &n);

    // Iterate to Get Specific Set of Numbers and Evaluation
    for(int i = 0; i < n; i++)
    {
        // Get Set of Numbers
        scanf("%d %d %d", &a, &b, &c);

        // Evaluate if "c" is in between of a and b
        if (((a < c) && (c < b)) || ((a > c) && (c > b)))
        {
            printf("Yes");
        }

        else
        {
            printf("No");
        }

    }

    return 0;
}