#include <stdio.h>
#include <math.h>

int main()
{

    // Variable Bank
    int n;
    int input_day;
    int val_store[20];

    int iday, iweek, oday;
    double dec_year, dec_week;
    int fl_year, fl_week;


    // User Input
    scanf("%d", &n);

    // For Loop for Input
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &input_day);
        val_store[i] = input_day;
    }


    // For Loop for Evaluation AND Output
    for(int i = 0; i < n; i++)
    {
        // Get number of years floored
        iday = val_store[i];

        dec_year = iday / 365;
        fl_year = floor(dec_year);


        // Get number of weeks floored
        iweek = iday % 365;
        
        // Remainder of days from the year
        dec_week = iweek / 7;
        fl_week = floor(dec_week);


        // Get number of days
        oday = iweek % 7;

        printf("%d %d %d\n", fl_year, fl_week, oday);
    }




    return 0;
}