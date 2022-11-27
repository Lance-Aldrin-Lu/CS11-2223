#include <stdio.h>
#include <math.h>

int main()
{
    // Variable Initialization
    int n;
    int num;
    int is_notprime;
    int other_fac;
    
    int prime_arr[] = {2, 3, 5, 7, 11, 13, 17};
    int count_arr[7];
    int c2, c3, c5, c7, c11, c13, c17;

    // Get number of numbers
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        // Get specific number
        scanf("%d", &num);
        is_notprime = 0;

        // Case 1: Number is 1 or 2
        if(num == 1 || num == 2)
        {
            printf("%d\n", num);
            continue;
        }

        // Find out whether that number is prime or not
        for (int j = 2; j <= sqrt(num); j++) 
        {
            if (num % j == 0) 
            {
                is_notprime = 1;
                break;
            }
        } 

        // Case 2: Prime
        if(is_notprime == 0)
        {
            printf("%d\n", num);
            continue;
        }

        // Counters
        c2 = 0;
        c3 = 0;
        c5 = 0;
        c7 = 0;
        c11 = 0;
        c13 = 0;
        c17 = 0;

        // Case 3: Composite
        if(is_notprime != 0)
        {
            other_fac = num;

            while(other_fac > 1)
            {
                for(int k = 0; k < 7; k++)

                // {2, 3, 5, 7, 11, 13, 17}

                if(other_fac % prime_arr[k] == 0)
                {
                    other_fac = other_fac / prime_arr[k];

                    switch(prime_arr[k])
                    {
                        case 2:
                            c2 += 1;
                            break;
                        
                        case 3:
                            c3 += 1;
                            break;
                        
                        case 5:
                            c5 += 1;
                            break;
                        
                        case 7:
                            c7 += 1;
                            break;
                        
                        case 11:
                            c11 += 1;
                            break;
                        
                        case 13:
                            c13 += 1;
                            break;
                        
                        case 17:
                            c17 += 1;
                            break;
                    }
                }

                else
                {
                    continue;
                }

            }
        
            // Put number of repeaters in array
            count_arr[0] = c2;
            count_arr[1] = c3;
            count_arr[2] = c5;
            count_arr[3] = c7;
            count_arr[4] = c11;
            count_arr[5] = c13;
            count_arr[6] = c17;

            // Output format
            for(int l = 0; l < 8; l++)
            {
                if(l == 7)
                {
                    printf("\n");
                    break;
                }

                if(count_arr[l] != 0)
                {
                    printf("%d^%d ", prime_arr[l], count_arr[l]);
                }

                else if(count_arr[l] == 0)
                {
                    continue;
                }
            }

        }
    
    
    
    }
    

    return 0;
}