#include <stdio.h>
#include <stdlib.h>

// Prototypes
int recur_gcd(int x, int y);
int compare_num(const void*left_num, const void*right_num);



int main()    
{   
    int n;

    scanf("%d", &n);

    for(int a = 0; a < n; a++)
    {
        // Variable Initialization
        int int_arr[22];
        char ch_arr[2];
        int counter;
        int new_arr[22];


        scanf("%d%c", &int_arr[0], &*ch_arr);
        counter = 1;

        // Continuous Inputs UNTIL newline (enter)
        while(*ch_arr != '\n')
        {
            scanf("%d%c", &int_arr[counter], &*ch_arr);
            counter += 1;
        }

        // Get number of elements
        int num_ele = int_arr[0];

        // Get the array without the first elem
        for(int k = 0; k < num_ele; k++)
        {
            new_arr[k] = int_arr[k + 1];
        }

        // Sort the array
        qsort(new_arr, num_ele, sizeof(new_arr[0]), compare_num);

        int gcd_start = new_arr[0];

        for(int i = 1; i < num_ele; i++)
        {
            gcd_start = recur_gcd(new_arr[i], gcd_start);
        }

        printf("%d\n", gcd_start);

    }
    
    return 0;    
}    



int compare_num(const void*left_num, const void*right_num)
{
   return (*(int*)left_num - *(int*)right_num);
}

int recur_gcd(int x, int y)
{
    int r;

    if((r = x % y) == 0)
    {
        return y;
    }

    else
    {
        return recur_gcd(y, r);
    }
}