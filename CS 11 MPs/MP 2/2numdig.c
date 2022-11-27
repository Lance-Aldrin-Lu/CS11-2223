#include <stdio.h>

int main()
{

    // Initalize da Variables
    int n;
    int spec_num, long_num;
    int dig, counter;

    // Get da User Input
    scanf("%d", &n);

    // Get da Pair of Numbahs
    for(int i = 0; i < n; i++)
    {
        scanf("%d %d", &spec_num, &long_num);
        counter = 0;

        // Separate the digits and +1 if it satisfies it
        while(long_num != 0)
        {
            dig = long_num % 10;
            
            if(dig == spec_num)
            {
                counter += 1;
            }

            else
            {
                counter += 0;
            }

            long_num = long_num / 10;

        }

        // Output
        printf("%d\n", counter);
    }




    return 0;
}