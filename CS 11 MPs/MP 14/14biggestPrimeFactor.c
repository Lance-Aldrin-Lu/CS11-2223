#include <stdio.h>

// Prototypes
int primeChecker(int number);
int largestPrimeFactor(int number);



int main()
{
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        int number;
        scanf("%d", &number);

        int largestPrime = largestPrimeFactor(number);
        printf("%d\n", largestPrime);
    }

    return 0;
}



int primeChecker(int number)
{
    int is_notprime = 0;
        
    for (int j = 2; j <= number / 2; j++) 
    {
        if(number % j == 0) 
        {
            is_notprime = 1;
            break;
        }
        
        else
        {
            continue;
        }
    }

    // 0 means number is prime
    return is_notprime;
}

int largestPrimeFactor(int number)
{
    int largestPrime;

    for(int i = number; number > 1; i--)
    {
        if((number % i == 0) && primeChecker(i) == 0)
        {
            largestPrime = i;
            break;
        }
    }

    return largestPrime;
}