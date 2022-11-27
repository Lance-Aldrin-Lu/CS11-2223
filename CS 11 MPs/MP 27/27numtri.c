// Resubmission to Remove Unused Variables

#include <stdio.h>

int main()
{
    // Initialize the Variable Bank
    int n, m;

    int num;

    // Get Number of Triangles from User
    scanf("%d", &n);

    // Iteration (1) for Number of Triangles for Whole Program
    for(int i = 0; i < n; i++)
    {
        // Get Size of the Triangle from User
        scanf("%d", &m);

        num = 1;

        // Make the Number Pyramid
        // Iteration (2) for PER ROW
        for(int j = 1; j < m + 1; j++)
        {

            // Iteration (3) for PER NUMBER IN A ROW
            for(int k = 1; k < j + 1; k++)
            {
                printf("%d ", num);
                num += 1;   // next num is adding 1 to the previous 1
            }
            
            // New Line After Finishing Iteration (3)
            printf("\n");
            
        }

    }

    return 0;
}