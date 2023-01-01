#include <stdio.h>
#include <string.h>

// Prototypes
int starting_index_substring(char str_one[512], char str_two[512], int one_len, int two_len);



int main() 
{
    int n;
    scanf("%d\n", &n);

    for(int z = 0; z < n; z++)
    {
        char orig_str[512];
        char str_one[512];
        char str_two[512];

        // Input string
        fgets(orig_str, sizeof(orig_str), stdin);

        // get first string
        int index_one = 0;
        for(int j = 0; orig_str[j] != ','; j++)
        {
            str_one[index_one] = orig_str[j];
            index_one++;
        }

        // get the index of comma
        int index_comma = 0;
        for(int l = 0; orig_str[l] != ','; l++)
        {
            index_comma++;
        }

        // get second string
        int index_two = 0;
        for(int k = (index_comma + 2); orig_str[k] != '\n'; k++)
        {
            str_two[index_two] = orig_str[k];
            index_two++;
        }

        // get the number of elements of the two strings
        int num_ele_one = index_one;
        int num_ele_two = index_two;

        // Call Function
        int final_index = starting_index_substring(str_one, str_two, num_ele_one, num_ele_two);

        // Output
        printf("%d\n", final_index);

    }

    return 0;
}



// Functions
int starting_index_substring(char str_one[512], char str_two[512], int one_len, int two_len) 
{
    int limit = one_len - two_len;
    
    for(int index_one = 0; index_one <= limit; index_one++)
    {
        int index_two;

        for(index_two = 0; index_two < two_len; index_two++)
        {
            if(str_one[index_one + index_two] != str_two[index_two])
            {
                break;
            }
        }

        if(index_two == two_len) 
        {
            // a substring and output the index
            return index_one;
        }
  
    }

    // NOT a substring
    return -1; 
}