#include <stdio.h>
#include <stdlib.h>

// Func for QSort
int compare_num (const void*left_num, const void*right_num)
{
   return (*(int*)left_num - *(int*)right_num);
}


int main()
{
    // Variable Initialization
    int n, index, num_ele, new_index, new_num_ele;
    int num1, num2, num3, num4, num5, midnum;
    char ch_arr[2];

    // Get number of arrays
    scanf("%d", &n);


    for(int i = 0; i < n; i++)
    {
        int int_arr[21];
        int unique_arr[21];

        // Get the input array
        scanf("%d%c", &int_arr[0], &*ch_arr);
        index = 1;

        while(*ch_arr != '\n')
        {
            scanf("%d%c", &int_arr[index], &*ch_arr);
            index += 1;
        }

        // Sort the array
        num_ele = index;
        qsort(int_arr, num_ele, sizeof(int_arr[0]), compare_num);

        // Get unique num from sorted array and put them in unique array
        new_index = 1;

        for(int j = 0; j < num_ele; j++)
        {
            if(j == 0)
            {
                unique_arr[j] = int_arr[j];
                continue;
            }

            if(int_arr[j] != int_arr[j - 1])
            {
                unique_arr[new_index] = int_arr[j];
                new_index++;
            }
        }

        // Output
        new_num_ele = new_index;

        // If less than 4
        if(new_num_ele < 4)
        {
            printf("invalid input\n");
        }
        
        // Greater than 4 and even
        else if(new_num_ele % 2 == 0)
        {
            midnum = new_num_ele / 2;
            num1 = unique_arr[midnum - 2];
            num2 = unique_arr[midnum - 1];
            num3 = unique_arr[midnum + 0];
            num4 = unique_arr[midnum + 1];

            printf("%d %d %d %d\n", num1, num2, num3, num4);

        }

        // Greater than 4 and odd
        else if(new_num_ele % 2 == 1)
        {
            midnum = new_num_ele / 2;
            num1 = unique_arr[midnum - 2];
            num2 = unique_arr[midnum - 1];
            num3 = unique_arr[midnum + 0];
            num4 = unique_arr[midnum + 1];
            num5 = unique_arr[midnum + 2];

            printf("%d %d %d %d %d\n", num1, num2, num3, num4, num5);
        }

    }

    return 0;
}


a = 0;
c = 0;

while(a < b)
{
    while(c < b)
    {
        "
        "
        "
        "

        c++


    }

    "
    "
    "
    "
    
    
    a++
}