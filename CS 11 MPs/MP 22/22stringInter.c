#include <stdio.h>



int main()
{
    int n;
    scanf("%d\n", &n);

    for(int i = 0; i < n; i++)
    {
        // Variable Initialization
        char orig_str[512];
        char str_one[512];
        char str_two[512];


        fgets(orig_str, sizeof(orig_str), stdin);

        

        // get first string
        int index_one = 0;
        for(int j = 0; orig_str[j] != ','; j++)
        {
            if(orig_str[j] != ' ')
            {
                str_one[index_one] = orig_str[j];
                index_one++;
            }
        }

        // get the index of comma
        int index_comma = 0;
        for(int l = 0; orig_str[l] != ','; l++)
        {
            index_comma++;
        }

        // get second string
        int index_two = 0;
        for(int k = (index_comma + 1); orig_str[k] != '\n'; k++)
        {
            if(orig_str[k] != ' ')
            {
                str_two[index_two] = orig_str[k];
                index_two++;
            }
        }




        // get the number of elements of the two strings
        int num_ele_one = index_one;
        int num_ele_two = index_two;


        // get the UNIQUE letters by using boolean table alphabet
        // first string
        int frequency_string_one[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
                                      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

        char unique_one[512];
        int index_unique_one = 0;
        // index_unique_one also serves as the number of unique letters that str_one has

        for(int p = 0; p < num_ele_one; p++)
        {
            if(frequency_string_one[str_one[p] - 'a'] == 0)
            {
                // also get unique char on str_one and put in array
                unique_one[index_unique_one] = str_one[p];
                frequency_string_one[str_one[p] - 'a']++;
                index_unique_one++;
            }
        }


        // second string
        int frequency_string_two[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
                                      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

        for(int q = 0; q < num_ele_two; q++)
        {
            if(frequency_string_two[str_two[q] - 'a'] == 0)
            {
                frequency_string_two[str_two[q] - 'a']++;
            }
        }



        // combine the two boolean tables
        int frequency_string_final[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
                                        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        
        for(int r = 0; r < 26; r++)
        {
            frequency_string_final[r] = frequency_string_one[r] + frequency_string_two[r];
        }




        // print out the unique
        // 0 means none of the two strings have the spec letter
        // 1 means one of them has that letter while the other dont
        // 2 means both have the letter
        for(int s = 0; s < index_unique_one; s++)
        {
            if(frequency_string_final[unique_one[s] - 'a'] == 2)
            {
                printf("%c", unique_one[s]);
            }
        }

        printf("\n");

    }



    return 0;
}