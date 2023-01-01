#include <stdio.h>
#include <string.h>


int char_in_string(char letter, char string[512]);

int main()
{
    int n;
    scanf("%d\n", &n);

    for(int z = 0; z < n; z++)
    {

    char string[512];

    fgets(string, sizeof(string), stdin);

    int long_substr_len_record = 0;
    int len_str = strlen(string) - 1;
    

    for(int index_orig_str = 0; index_orig_str < len_str; index_orig_str++)
    {
        char substring[512];
        int long_substr_len_current = 0;
        int index_sub_counter = 0;


        for(int index_sub_str = index_orig_str; index_sub_str < len_str; index_sub_str++)
        {
            char current_letter = string[index_sub_str];

            if(char_in_string(current_letter, substring) == 0)
            {
                long_substr_len_current++;
                substring[index_sub_counter] = current_letter;
                index_sub_counter++;
            }

            else
            {
                break;
            }

        }

        if(long_substr_len_current > long_substr_len_record)
        {
            long_substr_len_record = long_substr_len_current;
        }

    }

    printf("%d\n", long_substr_len_record);

    }

    return 0;
}





// Functions
int char_in_string(char letter, char string[512])
{
    int truth_value = 0;

    for(int i = 0; string[i] != '\0'; i++)
    {
        if(string[i] == letter)
        {
            truth_value = 1;
            break;
        }
    }

    return truth_value;
}
