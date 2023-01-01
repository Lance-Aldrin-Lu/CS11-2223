#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Prototypes
void prepare_Array(int array[512], char string[512]);


int main()
{
    int n;
    scanf("%d\n", &n);

    for(int z = 0; z < n; z++)
    {
        char str[512];
        int substring[512];

        fgets(str, sizeof(str), stdin);

        //
        prepare_Array(substring, str);

        //
        int len_str = strlen(str) - 1;
        int current_len_substring = 1, record_len_substring = 1;

        for(int k = 0; k < len_str - 1; k++)
        {
            int last_element = substring[str[k + 1]];

            if(last_element < (k + 1) - current_len_substring)
            {
                current_len_substring++;
            }

            else if(last_element == 0)
            {
                current_len_substring++;
            }

            else
            {
                if(record_len_substring < current_len_substring)
                {
                    record_len_substring = current_len_substring;
                }

                current_len_substring = (k + 1) - last_element;
            }

            substring[str[k + 1]] = k + 1;
        }

        if(record_len_substring < current_len_substring)
    	{
        	record_len_substring = current_len_substring;
    	}

	    printf("%d\n", record_len_substring);


    }

    return 0;
}




// Functions
void prepare_Array(int array[512], char string[512])
{
    for(int i = 0; i < 512; i++)
        {
            array[i] = 0;
        }

    array[string[0]] = 1;
}
