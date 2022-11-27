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
        
        // Triangle Exists and All Sides Valid
        if((z < (x + y)) && (y < (x + z)) && (x < (y + z)))
        {
            printf("YES\n");
        }

        // Traingle Does NOT Exist
        else
        {
            printf("NO\n");
        }

    }


    return 0;
}