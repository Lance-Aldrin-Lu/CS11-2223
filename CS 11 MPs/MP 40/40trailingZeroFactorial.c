#include <stdio.h>

int computingTrailZero(int number);

int main()
{
    int n;
    scanf("%d", &n);
    int c = computingTrailZero(n);
    printf("%d", c);

    return 0;
}



int computingTrailZero(int n)
{
    int number = 0;

    for(; n > 0; )
    {
        number += n / 5;
        n /= 5;
    }
    
    return number;
    
}