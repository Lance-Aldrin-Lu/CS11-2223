#include <stdio.h>

int main()
{
    // Variable Initialization
    int n, num; 
    
    // Get Number of numbers
    scanf("%d", &n);


    for(int i = 0; i < n; i++)
    {
        int current_dig;
        int big_dig = 0;

        // Get specific number
        scanf("%d", &num);

        while(num != 0)
        {
            current_dig = num % 10;

            if(current_dig > big_dig)
            {
                big_dig = current_dig;
            }

            num = num / 10;
        }

        // Output
        printf("%d\n", big_dig);

    }

    return 0;
}