#include <stdio.h>

int main()
{
    // Variable Initialization
    int n, x, y, z;

    // Get Number of Triad Sets
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        // Get Each Number of a Single Triad
        scanf("%d %d %d", &x, &y, &z);

        // Check if Triangle Exists
        
        // Triangle Exists and All Sides Valid
        if((z < (x + y)) && (y < (x + z)) && (x < (y + z)))
        {
            // Identify if what type
            // Equilateral (all sides are equal in measure)
            if((x == y) && (y == z) && (z == x))
            {
                printf("equilateral\n");
            }

            // Isosceles (if two sides are equal in measure)
            else if((x == y) || (y == z) || (z == x))
            {
                printf("isosceles\n");
            }

            // Scalene (all sides have a different measure)
            else
            {
                printf("scalene\n");
            }
        }

        // Traingle Does NOT Exist
        else
        {
            printf("no triangle is formed\n");
        }

    }


    return 0;
}