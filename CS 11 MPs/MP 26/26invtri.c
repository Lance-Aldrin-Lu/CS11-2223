#include <stdio.h>


int main()
{
    // Initialize the Variable Bank
    int n, m;

    // Get Number of Triangles from User
    scanf("%d", &n);

    // Iteration (1) for Number of Triangles for Whole Program
    for(int i = 0; i < n; i++)
    {
        // Get Size of the Triangle from user
        scanf("%d", &m);

        // Make the Star Pyramid
        // Iteration (2) for PER ROW
        for(int j = m; j > 0; j--)
        {

            // Iteration (3) for PER STAR IN A ROW
            for(int k = j; k > 0; k--)
            {
                printf("*");
            }
            
            // New Line After Finishing Iteration (3)
            printf("\n");
            
        }

    }

    return 0;
}