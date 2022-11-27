#include <stdio.h>

// Prototype
long long int factorial(int number);


int main()
{
    int a;

    scanf("%d", &a);

    for(int b = 0; b < a; b++)
    {
        // Variable Initialization
        long long int row, num_ele;

        scanf("%lld", &row);

        num_ele = row + 1;

        for(long long int i = 0; i < num_ele; i++)
        {
            // Notes:
            // Formula: n! / (k! (n - k)!)

            // n --> nth row
            // k --> specific element in the row

            long long int numerator = factorial(row);
            long long int denominator = (factorial(i) * factorial(row - i));
            long long int quotient = numerator / denominator;

            printf("%lld ", quotient);
        }

        printf("\n");

    }

    return 0;
}



long long int factorial(int number)
{
    long long int counter = 1;

    for(long long int factor = number; factor > 1; factor--)
    {
        counter *= factor;
    }

    return counter;
}