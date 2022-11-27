#include <stdio.h>

// Prototypes
int gcd(int x, int y);
void frac_simplifier(int numerator, int denominator, int gcd);


int main()
{
    int a;

    scanf("%d", &a);

    for(int i = 0; i < a; i++)
    {
        // Variable Initialization
        int numer1, denomi1, numer2, denomi2;
        int sum_numer, sum_denomi;
        int simplified_numer, simplified_denomi;

        scanf("%d %d %d %d", &numer1, &denomi1, &numer2, &denomi2);

        sum_numer = (numer1 * denomi2) + (numer2 * denomi1);
        sum_denomi = denomi1 * denomi2;

        frac_simplifier(sum_numer, sum_denomi, gcd(sum_numer, sum_denomi));
    
    }

    return 0;
}



int gcd(int x, int y)
{
    int great_common_factor = 1;

    for(int i = 1; (i <= x) && (i <= y); i++)
    {
        if((x % i == 0) && (y % i == 0))
        {
            great_common_factor = i;
        }

        else
        {
            continue;
        }
    }

    return great_common_factor;
}

void frac_simplifier(int numerator, int denominator, int gcd)
{
    int simplified_num = numerator / gcd;
    int simplified_denomi = denominator / gcd;

    printf("%d %d\n", simplified_num, simplified_denomi);
}