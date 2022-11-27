#include <stdio.h>
#include <stdlib.h>

int compare_num (const void*left_num, const void*right_num)
{
   return (*(int*)left_num - *(int*)right_num);
}


int main()
{
    // Variangle Initalization
    int n;
    int clock, num_ele;

    char ch_arr[2];

    int small, large, sec_large;


    // Get number of Sets
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        // Refreshed Array
        int int_arr[21];

        // Ask the first input to start the While
        scanf("%d%c", &int_arr[0], &*ch_arr);
        clock = 1;

        // Continuous Inputs UNTIL newline (enter)
        while(*ch_arr != '\n')
        {
            scanf("%d%c", &int_arr[clock], &*ch_arr);
            clock += 1;
        }

        // Note: "clock" variable also shows the number of elements in an array.
        num_ele = clock;


        // QSort
        qsort(int_arr, num_ele, sizeof(int_arr[0]), compare_num);

        small = int_arr[0];
        large = int_arr[num_ele - 1];

        // Find second largest
        for(int j = num_ele - 1; j > -1; j--)
        {
            if(int_arr[j] == large) 
            {
                continue;
            }
            else if(int_arr[j] < large)
            {
                sec_large = int_arr[j];
                break;
            }
            
        }

        // Output
        printf("%d %d %d\n", small, sec_large, large);
        
    }


    return 0;
}