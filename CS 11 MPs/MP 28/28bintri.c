#include <stdio.h>

int main()
{
    // Initialize the Variable Bank
    int n, m;

    int sum, mod, odd_or_even;

    // Get Number of Triangles from User
    scanf("%d", &n);

    // Iteration (1) for Number of Triangles for Whole Program
    for(int i = 0; i < n; i++)
    {
        // Get Size of the Triangle from User
        scanf("%d", &m);

        // Make the Number Pyramid
        // Iteration (2) for PER ROW
        for(int j = 1; j < m + 1; j++)
        {

            // Iteration (3) for PER NUMBER IN A ROW
            for(int k = 1; k < (j + 1); k++)
            {
                sum = j + k;    // Loop starts at an even number then it will alternate
                mod = sum % 2;

                if(mod == 1)    // When odd
                {
                    odd_or_even = 0;
                }
                
                else    // When even
                {
                    odd_or_even = 1;
                }
                
                printf("%d ", odd_or_even);
            }
            
            // New Line After Finishing Iteration (3)
            printf("\n");
            
        }

    }

    return 0;
}