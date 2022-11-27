#include <stdio.h>

int main()
{

    int n;
    int day, month, year, cent;
    int is_leap;

    int day_c, month_c, cent_c, dec_c, decdiv_c, total_c, final_c;

    int month_code[12] = {0, 3, 3, 6, 1, 4, 6, 2, 5, 0, 3, 5};

    scanf("%d", &n);


    for(int i = 0; i < n; i++)
    {
        scanf("%d %d %d", &day, &month, &year);

        // Check if month and year is valid
        if(((1 <= month) && (month <= 12)) && ((1600 <= year) && (year <= 2600)))
        {
            if(day > 31)
            {
                printf("invalid date\n");
                continue;
            }

            if(day > 30 && (month == 2 || month == 4 || month == 6 || month == 9 || month == 11))
            {
                printf("invalid date\n");
                continue;
            }

            if(year % 4 != 0 && (month == 2 && day > 28))
            {
                printf("invalid date\n");
                continue;
            }

            // Century code
            cent = year / 100;
            
            if(cent == 16 || cent == 20 || cent == 24)
            {
                cent_c = 6;
            }
            if(cent == 17 || cent == 21 || cent == 25)
            {
                cent_c = 4;
            }
            if(cent == 18 || cent == 22 || cent == 26)
            {
                cent_c = 2;
            }
            if(cent == 19 || cent == 23)
            {
                cent_c = 0;
            }

            day_c = day;
            month_c = month_code[month - 1];
            dec_c = year % 100;
            decdiv_c = dec_c / 4;
            
            total_c = day_c + month_c + cent_c + dec_c + decdiv_c;
            final_c = total_c % 7;

            if(year % 4 == 0 && (month == 1 || month == 2))
            {
                final_c = final_c - 1;
            }

            printf("%d\n", day_c);
            printf("%d\n", month_c);
            printf("%d\n", cent_c);
            printf("%d\n", dec_c);
            printf("%d\n", decdiv_c);


            printf("%d\n", total_c);
            printf("%d\n", final_c);
            
            
            
            

            switch(final_c)
            {
                case 0:
                    printf("sunday\n");
                    break;
                case 1:
                    printf("monday\n");
                    break;
                case 2:
                    printf("tuesday\n");
                    break;
                case 3:
                    printf("wednesday\n");
                    break;
                case 4:
                    printf("thursday\n");
                    break;
                case 5:
                    printf("friday\n");
                    break;
                case 6:
                    printf("saturday\n");
                    break;
            }

        }

        else
        {
            printf("invalid date\n");
            continue;
        }


    }

    
    
    return 0;
}