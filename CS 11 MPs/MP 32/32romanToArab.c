#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d\n", &n);

    for(int z = 0; z < n; z++)
    {
        char roman_numeral[512];

        fgets(roman_numeral, sizeof(roman_numeral), stdin);

        int add_arab = 0;
        int minus_arab = 0;

        int num_char = strlen(roman_numeral) - 1;

        for(int i = 0; i < num_char; i++)
        {

            if(roman_numeral[i] == 'I')
            {
                if(roman_numeral[i + 1] == 'V' ||
                   roman_numeral[i + 1] == 'X')
                {
                    minus_arab += 1;
                }

                else
                {
                    add_arab += 1;
                }
            }

            if(roman_numeral[i] == 'V')
            {
                add_arab += 5;
            }

            if(roman_numeral[i] == 'X')
            {
                if(roman_numeral[i + 1] == 'L' ||
                   roman_numeral[i + 1] == 'C')
                {
                    minus_arab += 10;
                }

                else
                {
                    add_arab += 10;
                }
            }

            if(roman_numeral[i] == 'L')
            {
                add_arab += 50;
            }

            if(roman_numeral[i] == 'C')
            {
                if(roman_numeral[i + 1] == 'D' ||
                   roman_numeral[i + 1] == 'M')
                {
                    minus_arab += 100;
                }

                else
                {
                    add_arab += 100;
                }
            }

            if(roman_numeral[i] == 'D')
            {
                add_arab += 500;
            }

            if(roman_numeral[i] == 'M')
            {
                add_arab += 1000;
            }
        }

        int total = add_arab - minus_arab;

        printf("%d\n", total);

    }


    return 0;
}