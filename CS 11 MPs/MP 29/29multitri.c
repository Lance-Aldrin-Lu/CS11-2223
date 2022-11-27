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
        // Get Size of the Triangle from User
        scanf("%d", &m);

        // Make the Number Pyramid
        // Iteration (2) for PER ROW
        for(int j = 1; j < (m + 1); j++)
        {

            // Iteration (3) for PER NUMBER IN A ROW
            for(int k = 1; k < (j + 1); k++)
            {
                // Variable "j" (in Iteration (2)) is the Base of the Current Row
                // And being Multiplied by Variable "k" (in Iteration (3))
                printf("%d ", (j * k));
            }
            
            // New Line After Finishing Iteration (3)
            printf("\n");
            
        }

    }

    return 0;
}