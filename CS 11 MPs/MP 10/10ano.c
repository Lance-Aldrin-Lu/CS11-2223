#include <stdio.h>
#include <math.h>

int main()
{
    // Variable Initialization
    int n, num;

    // Get number of nums
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        // Definition: If 0, false and prime; otherwise true and NOT prime
        int booly = 0; 

        // Get specific nums
        scanf("%d", &num);

        for(int i = 2; i <= sqrt(num); i++)
        {
            if(num % i == 0)
            {
                booly = 1;
                break;
            }
        }

        // Output
        if(booly == 0)
        {
            // 1 means prime
            printf("1\n");
        }

        else
        {
            // 0 means NOT prime
            printf("0\n");
        }

    }


    return 0;

}