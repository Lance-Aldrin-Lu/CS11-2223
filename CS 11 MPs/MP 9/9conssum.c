// Resubmition due to Included Comments

#include <stdio.h>

int main()
{

    // Variable Initialization
    int n;
    int num;
    int mod;

    int coef, cons, diff;

    int yes = 1;
    int no = 0;

    int counter_suc;
    
    // Get number of numbers
    scanf("%d", &n);


    for(int i = 0; i < n; i++)
    {
        // Get specific number
        scanf("%d", &num);
        counter_suc =0;

        // Extreme Case, where num = 1 since 1 = 1 + 0 (consecutive numbers)
        if(num == 1)
        {
            printf("%d\n", yes);
            continue;
        }

        // General Cases
        // Formula Used: Triangular Numbers [ (n*(n-1)) / 2 ]
        for(int j = 2; num > ((j*(j-1)) / 2); j++)
        {
            cons = (j*(j-1)) / 2;
            coef = j;

            diff = num - cons;
            mod = diff % coef;
            
            // There's a solution
            // Stop if nX + ( (n*(n-1)) / 2 )
            if(mod == 0)
            {
                printf("%d\n", yes);
                counter_suc += 1;   // Add to counter to tell that there is a solution
                break;
            }

            // Ignore if not a solution
            else
            {
                continue;
            }

            
        }
        
        // If there's no solution
        if(counter_suc != 1)
        {
            printf("%d\n", no);
        }
         
    }


    return 0;
}