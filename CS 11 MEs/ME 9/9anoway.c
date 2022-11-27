#include <stdio.h>
#include <math.h>

int main()
{
    // Variable Initialization
    int n;
    int num;
    int is_notprime;
    int factor;
    int counter;

    // Get number of numbers
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        // Get specific number
        scanf("%d", &num);
        
        

        // Case 1: Number is 1
        if(num == 1)
        {
            printf("%d\n", num);
            continue;
        }

        
        // Find out whether that number is prime or not
        is_notprime = 0;
        
        for (int j = 2; j <= num; j++) 
        {
            if (num % j == 0) 
            {
                is_notprime = 1;
                break;
            }
            
            else
            {
                continue;
            }
        } 


        // Case 2: Prime
        if(is_notprime == 0)
        {
            printf("%d\n", num);
            continue;
        }


        // Case 3: Composite
        factor = num;

        if(is_notprime != 0)
        {
            for(int k = 2; factor > 1; k++)
            {
                // Resets when new number
                counter = 0;
                
                while(factor % k == 0)
                {
                    // Add when same number is repeated
                    counter += 1;
                    factor /= k;
                }
                
                // Do nothing if 0 (not a factor)

                // Print out only the single number
                if(counter == 1)
                {
                    printf("%d ", k);
                }

                // Print out exponent when more than 1
                else if(counter > 1)
                {
                    printf("%d^%d ", k, counter);
                }
            }
        }

        // Formatting
        printf("\n");
    
    }


    return 0;
}