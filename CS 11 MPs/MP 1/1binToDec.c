#include <stdio.h>
#include <math.h>

int main() 
{
    // Variable Initialization

    int n;
    int dec, mod, counter, exp_counter;

    // Get number of rows
    scanf("%d", &n);

    // Get each binary number
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &dec);
        counter = 0;
        exp_counter = 0;

        // Get the powers of 2 that are turned on (1)
        while(dec != 0)
        {
            mod = dec % 10;
            counter += (mod) * (pow(2, exp_counter));
            dec = dec / 10;
            exp_counter += 1;
        }
        
        // Output
        printf("%d\n", counter);
    }

    
    return 0;
}