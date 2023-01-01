#include <stdio.h>

void get_nums(int arr[512], int index);

int main()
{
    int n; 
    scanf("%d", &n);
    
    for(int z = 0; z < n; z++)
    {
        int int_arr[512];
        
        int index = 1;
        
        get_nums(int_arr, index);


        int num_of_unique_triplets = 0;
        int num_of_nums = index;

        // will reference to the indiv trips
        int first, second, third;

        
        for(first = 0; first < num_of_nums - 2; first++)
        {
            for(second = first + 1; second < num_of_nums - 1; second++)
            {
                for(third = second + 1; third < num_of_nums; third++)
                {
                    if((int_arr[first] + int_arr[second] + int_arr[third]) == 0)
                    {
                        if( ((int_arr[first]) != (int_arr[second])) && 
                            ((int_arr[second]) != (int_arr[third])) && 
                            ((int_arr[first]) != (int_arr[third])) )
                        {
                            num_of_unique_triplets += 1;
                        }

                        else
                        {
                            num_of_unique_triplets = 1;
                        }
                    }
                }
            }
        }
        
        printf("%d\n", num_of_unique_triplets);
    }


    return 0;
}



void get_nums(int arr[512], int index)
{
    char char_sp[2];

    scanf("%d%c", &arr[0], &*char_sp);
        
    while(*char_sp != '\n')
    {
        scanf("%d%c", &arr[index], &*char_sp);
        index++;
    }
}