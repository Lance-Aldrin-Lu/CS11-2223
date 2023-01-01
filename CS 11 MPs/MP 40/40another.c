#include <stdio.h>

// Prototype
int count_fives(int num);



int main()
{
    int z;
    scanf("%d", &z);

    for(int j = 0; j < z; j++)
    {
        int n;
        scanf("%d", &n);

        int counter = 0;

        for(int i = 1; i <= n; i++)
        {
            counter += count_fives(i);
        }

        printf("%d\n", counter);
    }

    return 0;
}



// Function
int count_fives(int num)
{
    int counter = 0;

    while(num > 0)
    {
        if(num % 5 == 0)
        {
            counter += 1;
            num = num / 5;
        }

        else
        {
            break;
        }
    }

    return counter;
}