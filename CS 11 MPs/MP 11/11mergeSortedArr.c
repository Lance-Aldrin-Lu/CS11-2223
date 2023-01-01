#include <stdio.h>
#include <stdlib.h>

// Prototypes
int compare_num (const void*left_num, const void*right_num);



int main()
{
    int q;

    scanf("%d\n", &q);

    for(int p = 0; p < q; p++)
    {
        // Variable Initialization
	    char string[1000];
	    int int_arr[200];
        int final_int_arr[200];

        for(int k = 0; k < 200; k++)
        {
            int_arr[k] = 0;
        }

    
        fgets(string, 1000, stdin);


	    int index = 0;
	    int input_two_digit_bool = 0;

	    for(int i = 0; string[i] != '\n'; i++)
	    {
            // skip if space or colon
            if(string[i] == ' ' || string[i] == ':')
	    	{
	    	 input_two_digit_bool = 0;
                continue;
	    	}


	    	if(string[i] != ' ' && string[i] != ':')
            {
                // get two digit case
                if( (string[i + 1] != ' ' && string[i + 1] != ':') && (string[i + 2] == ' '  || string[i + 2] == ':' || string[i + 2] == '\n') )
                {
                    int_arr[index] = ((string[i] - 48) * 10) + (string[i + 1] - 48);
                    index++;
                    input_two_digit_bool = 1;
                    continue;
                }

                // get one digit case
                if( (string[i + 1] == ' ' || string[i + 1] == ':' || string[i + 1] == '\n') &&  (input_two_digit_bool == 0)) 
	    	    {
	    	    	int_arr[index] = string[i] - 48;
	    	    	index++;
                    input_two_digit_bool = 0;
                    continue;
	    	    }
            }

	    }


        // remove the zeroes by moving all values to final int arr
        int number_of_elements = index;

	    for(int j = 0; j < number_of_elements; j++)
        {
            final_int_arr[j] = int_arr[j];
        }

        // Sort
        qsort(final_int_arr, number_of_elements, sizeof(int), compare_num);


        // Output
        for(int m = 0; m < number_of_elements; m++)
        {
            printf("%d ", final_int_arr[m]);
        }

        printf("\n");

    }

    return 0;
}




int compare_num (const void*left_num, const void*right_num)
{
   return (*(int*)left_num - *(int*)right_num);
}